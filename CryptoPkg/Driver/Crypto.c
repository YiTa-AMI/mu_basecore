/** @file
  Implements the EDK II Crypto Protocol/PPI services using the library services
  from BaseCryptLib and TlsLib.

  Copyright (C) Microsoft Corporation. All rights reserved.
  Copyright (c) 2019 - 2022, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#include <Base.h>
#include <Library/DebugLib.h>
#include <Library/BaseCryptLib.h>
#include <Library/TlsLib.h>
#include <Protocol/Crypto.h>
#include <Pcd/PcdCryptoServiceFamilyEnable.h>

// MU_CHANGE remove BaseCryptLibServiceNotEnabled and macros

/**
  Returns the version of the EDK II Crypto Protocol.

  @return  The version of the EDK II Crypto Protocol.

**/
UINTN
EFIAPI
CryptoServiceGetCryptoVersion (
  VOID
  )
{
  return EDKII_CRYPTO_VERSION;
}

// MU_CHANGE [BEGIN]
// ****************************************************************************
// AUTOGENERATED BY CryptoPkg\Driver\Packaging\generate_cryptodriver.py
// AUTOGENED AS temp_Crypto.c
// DO NOT MODIFY
// GENERATED ON: 2022-02-21 15:16:35.467130

const EDKII_CRYPTO_PROTOCOL  mEdkiiCrypto = {
  /// Version
  CryptoServiceGetCryptoVersion,
  // HMACSHA256 functions
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256New
  HmacSha256New,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256Free
  HmacSha256Free,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256SetKey
  HmacSha256SetKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256Duplicate
  HmacSha256Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256Update
  HmacSha256Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256Final
  HmacSha256Final,
 #else
  NULL,
 #endif
  // PKCS functions
 #if _PCD_VALUE_PcdCryptoServicePkcs5HashPassword
  Pkcs5HashPassword,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs1v2Encrypt
  Pkcs1v2Encrypt,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7GetSigners
  Pkcs7GetSigners,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7FreeSigners
  Pkcs7FreeSigners,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7GetCertificatesList
  Pkcs7GetCertificatesList,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7Sign
  Pkcs7Sign,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7Verify
  Pkcs7Verify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceVerifyEKUsInPkcs7Signature
  VerifyEKUsInPkcs7Signature,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7GetAttachedContent
  Pkcs7GetAttachedContent,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceAuthenticodeVerify
  AuthenticodeVerify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceImageTimestampVerify
  ImageTimestampVerify,
 #else
  NULL,
 #endif
  // DH functions
 #if _PCD_VALUE_PcdCryptoServiceDhNew
  DhNew,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceDhFree
  DhFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceDhGenerateParameter
  DhGenerateParameter,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceDhSetParameter
  DhSetParameter,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceDhGenerateKey
  DhGenerateKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceDhComputeKey
  DhComputeKey,
 #else
  NULL,
 #endif
  // RANDOM functions
 #if _PCD_VALUE_PcdCryptoServiceRandomSeed
  RandomSeed,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRandomBytes
  RandomBytes,
 #else
  NULL,
 #endif
  // RSA functions
 #if _PCD_VALUE_PcdCryptoServiceRsaNew
  RsaNew,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaFree
  RsaFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaSetKey
  RsaSetKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaGetKey
  RsaGetKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaGenerateKey
  RsaGenerateKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaCheckKey
  RsaCheckKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaPkcs1Sign
  RsaPkcs1Sign,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaPkcs1Verify
  RsaPkcs1Verify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaPssSign
  RsaPssSign,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaPssVerify
  RsaPssVerify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaGetPrivateKeyFromPem
  RsaGetPrivateKeyFromPem,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaGetPublicKeyFromX509
  RsaGetPublicKeyFromX509,
 #else
  NULL,
 #endif
  // SHA1 functions
 #if _PCD_VALUE_PcdCryptoServiceSha1GetContextSize
  Sha1GetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha1Init
  Sha1Init,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha1Duplicate
  Sha1Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha1Update
  Sha1Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha1Final
  Sha1Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha1HashAll
  Sha1HashAll,
 #else
  NULL,
 #endif
  // SHA256 functions
 #if _PCD_VALUE_PcdCryptoServiceSha256GetContextSize
  Sha256GetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha256Init
  Sha256Init,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha256Duplicate
  Sha256Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha256Update
  Sha256Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha256Final
  Sha256Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha256HashAll
  Sha256HashAll,
 #else
  NULL,
 #endif
  // SHA384 functions
 #if _PCD_VALUE_PcdCryptoServiceSha384GetContextSize
  Sha384GetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha384Init
  Sha384Init,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha384Duplicate
  Sha384Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha384Update
  Sha384Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha384Final
  Sha384Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha384HashAll
  Sha384HashAll,
 #else
  NULL,
 #endif
  // SHA512 functions
 #if _PCD_VALUE_PcdCryptoServiceSha512GetContextSize
  Sha512GetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha512Init
  Sha512Init,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha512Duplicate
  Sha512Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha512Update
  Sha512Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha512Final
  Sha512Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha512HashAll
  Sha512HashAll,
 #else
  NULL,
 #endif
  // X509 functions
 #if _PCD_VALUE_PcdCryptoServiceX509GetSubjectName
  X509GetSubjectName,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetCommonName
  X509GetCommonName,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetOrganizationName
  X509GetOrganizationName,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509VerifyCert
  X509VerifyCert,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509ConstructCertificate
  X509ConstructCertificate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509ConstructCertificateStackV
  X509ConstructCertificateStackV,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509ConstructCertificateStack
  X509ConstructCertificateStack,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509Free
  X509Free,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509StackFree
  X509StackFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetTBSCert
  X509GetTBSCert,
 #else
  NULL,
 #endif
  // TDES functions
  // AES functions
 #if _PCD_VALUE_PcdCryptoServiceAesGetContextSize
  AesGetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceAesInit
  AesInit,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceAesCbcEncrypt
  AesCbcEncrypt,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceAesCbcDecrypt
  AesCbcDecrypt,
 #else
  NULL,
 #endif
  // ARC4 functions
  // SM3 functions
 #if _PCD_VALUE_PcdCryptoServiceSm3GetContextSize
  Sm3GetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSm3Init
  Sm3Init,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSm3Duplicate
  Sm3Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSm3Update
  Sm3Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSm3Final
  Sm3Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSm3HashAll
  Sm3HashAll,
 #else
  NULL,
 #endif
  // HKDF functions
 #if _PCD_VALUE_PcdCryptoServiceHkdfSha256ExtractAndExpand
  HkdfSha256ExtractAndExpand,
 #else
  NULL,
 #endif
  // TLS functions
 #if _PCD_VALUE_PcdCryptoServiceTlsInitialize
  TlsInitialize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsCtxFree
  TlsCtxFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsCtxNew
  TlsCtxNew,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsFree
  TlsFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsNew
  TlsNew,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsInHandshake
  TlsInHandshake,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsDoHandshake
  TlsDoHandshake,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsHandleAlert
  TlsHandleAlert,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsCloseNotify
  TlsCloseNotify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsCtrlTrafficOut
  TlsCtrlTrafficOut,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsCtrlTrafficIn
  TlsCtrlTrafficIn,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsRead
  TlsRead,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsWrite
  TlsWrite,
 #else
  NULL,
 #endif
  // TLSSET functions
 #if _PCD_VALUE_PcdCryptoServiceTlsSetVersion
  TlsSetVersion,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetConnectionEnd
  TlsSetConnectionEnd,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetCipherList
  TlsSetCipherList,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetCompressionMethod
  TlsSetCompressionMethod,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetVerify
  TlsSetVerify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetVerifyHost
  TlsSetVerifyHost,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetSessionId
  TlsSetSessionId,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetCaCertificate
  TlsSetCaCertificate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetHostPublicCert
  TlsSetHostPublicCert,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetHostPrivateKey
  TlsSetHostPrivateKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetCertRevocationList
  TlsSetCertRevocationList,
 #else
  NULL,
 #endif
  // TLSGET functions
 #if _PCD_VALUE_PcdCryptoServiceTlsGetVersion
  TlsGetVersion,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetConnectionEnd
  TlsGetConnectionEnd,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetCurrentCipher
  TlsGetCurrentCipher,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetCurrentCompressionId
  TlsGetCurrentCompressionId,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetVerify
  TlsGetVerify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetSessionId
  TlsGetSessionId,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetClientRandom
  TlsGetClientRandom,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetServerRandom
  TlsGetServerRandom,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetKeyMaterial
  TlsGetKeyMaterial,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetCaCertificate
  TlsGetCaCertificate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetHostPublicCert
  TlsGetHostPublicCert,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetHostPrivateKey
  TlsGetHostPrivateKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetCertRevocationList
  TlsGetCertRevocationList,
 #else
  NULL,
 #endif
};
// AUTOGEN ENDS
// ****************************************************************************
// MU_CHANGE [END]
