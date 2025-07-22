/** @file MockSmmBase2.h
  This file declares a mock of SmmBase2 Protocol.

  Copyright (c) Microsoft Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef MOCK_SMM_BASE2_H
#define MOCK_SMM_BASE2_H

#include <Library/GoogleTestLib.h>
#include <Library/FunctionMockLib.h>

extern "C" {
  #include <Uefi.h>
  #include <Protocol/SmmBase2.h>
}

struct MockSmmBase2Protocol {
  MOCK_INTERFACE_DECLARATION (MockSmmBase2Protocol);

  MOCK_FUNCTION_DECLARATION (
    EFI_STATUS,
    MockInSmm,
    (
     IN CONST EFI_SMM_BASE2_PROTOCOL  *This,
     OUT BOOLEAN                      *InSmram
    )
    );

  MOCK_FUNCTION_DECLARATION (
    EFI_STATUS,
    MockGetSmstLocation,
    (
     IN CONST EFI_SMM_BASE2_PROTOCOL  *This,
     IN OUT EFI_SMM_SYSTEM_TABLE2     **Smst
    )
    );
};

MOCK_INTERFACE_DEFINITION (MockSmmBase2Protocol);
MOCK_FUNCTION_DEFINITION (MockSmmBase2Protocol, MockInSmm, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockSmmBase2Protocol, MockGetSmstLocation, 2, EFIAPI);

#define MOCK_SMMBASE2_PROTOCOL_INSTANCE(NAME)             \
  EFI_SMM_BASE2_PROTOCOL  NAME##_INSTANCE = {             \
      (EFI_SMM_INSIDE_OUT2)         MockInSmm,            \
      (EFI_SMM_GET_SMST_LOCATION2)  MockGetSmstLocation   \
  };                                                      \
  EFI_SMM_BASE2_PROTOCOL  *NAME = &NAME ## _INSTANCE;

#endif // MOCK_SMM_BASE2_H
