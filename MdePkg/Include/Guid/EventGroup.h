/** @file
  GUIDs for gBS->CreateEventEx Event Groups. Defined in UEFI spec 2.0 and PI 1.2.1.

Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
Copyright (c) Microsoft Corporation<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef __EVENT_GROUP_GUID__
#define __EVENT_GROUP_GUID__

#define EFI_EVENT_GROUP_EXIT_BOOT_SERVICES \
  { 0x27abf055, 0xb1b8, 0x4c26, { 0x80, 0x48, 0x74, 0x8f, 0x37, 0xba, 0xa2, 0xdf } }

extern EFI_GUID  gEfiEventExitBootServicesGuid;

#define EFI_EVENT_GROUP_BEFORE_EXIT_BOOT_SERVICES \
  { 0x8be0e274, 0x3970, 0x4b44, { 0x80, 0xc5, 0x1a, 0xb9, 0x50, 0x2f, 0x3b, 0xfc } }

extern EFI_GUID  gEfiEventBeforeExitBootServicesGuid;

#define EFI_EVENT_GROUP_VIRTUAL_ADDRESS_CHANGE \
  { 0x13fa7698, 0xc831, 0x49c7, { 0x87, 0xea, 0x8f, 0x43, 0xfc, 0xc2, 0x51, 0x96 } }

extern EFI_GUID  gEfiEventVirtualAddressChangeGuid;

#define EFI_EVENT_GROUP_MEMORY_MAP_CHANGE \
  { 0x78bee926, 0x692f, 0x48fd, { 0x9e, 0xdb, 0x1, 0x42, 0x2e, 0xf0, 0xd7, 0xab } }

extern EFI_GUID  gEfiEventMemoryMapChangeGuid;

#define EFI_EVENT_GROUP_READY_TO_BOOT \
  { 0x7ce88fb3, 0x4bd7, 0x4679, { 0x87, 0xa8, 0xa8, 0xd8, 0xde, 0xe5, 0x0d, 0x2b } }

extern EFI_GUID  gEfiEventReadyToBootGuid;

#define EFI_EVENT_GROUP_AFTER_READY_TO_BOOT \
  { 0x3a2a00ad, 0x98b9, 0x4cdf, { 0xa4, 0x78, 0x70, 0x27, 0x77, 0xf1, 0xc1, 0xb } }

extern EFI_GUID  gEfiEventAfterReadyToBootGuid;

#define EFI_EVENT_GROUP_DXE_DISPATCH_GUID \
  { 0x7081e22f, 0xcac6, 0x4053, { 0x94, 0x68, 0x67, 0x57, 0x82, 0xcf, 0x88, 0xe5 }}

extern EFI_GUID  gEfiEventDxeDispatchGuid;

#define EFI_END_OF_DXE_EVENT_GROUP_GUID \
  { 0x2ce967a, 0xdd7e, 0x4ffc, { 0x9e, 0xe7, 0x81, 0xc, 0xf0, 0x47, 0x8, 0x80 } }

extern EFI_GUID  gEfiEndOfDxeEventGroupGuid;

// MU_CHANGE [BEGIN]
#define EFI_PRE_READY_TO_BOOT_GUID \
  { 0x10c41e8f, 0xc52a, 0x4ea4, {0xa2, 0x69, 0x0b, 0x45, 0x09, 0x31, 0xab, 0xf6}}

extern EFI_GUID  gEfiEventPreReadyToBootGuid;

#define EFI_POST_READY_TO_BOOT_GUID  \
  { 0xa5b489b4, 0x18fd, 0x4425, { 0x91, 0xa4, 0x61, 0x3a, 0xdd, 0xd2, 0x74, 0x5 }}

extern EFI_GUID  gEfiEventPostReadyToBootGuid;
// MU_CHANGE [END]
#endif
