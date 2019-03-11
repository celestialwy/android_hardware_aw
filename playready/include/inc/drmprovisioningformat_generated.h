/**@@@+++@@@@******************************************************************
**
** Microsoft (r) PlayReady (r)
** Copyright (c) Microsoft Corporation. All rights reserved.
**
***@@@---@@@@******************************************************************
*/

/* This source was autogenerated by xbgen.
** DO NOT EDIT THIS SOURCE MANUALLY.
** If changes need to be applied update the XML and regenerate this source.
*/
/*
** This file defines the following generated formats
** DRM_PROVISIONING_RESPONSE_MESSAGE
** DRM_PROVISIONING_REQUEST_MESSAGE
*/
#ifndef __PROVISIONINGFORMATS_H__
#define __PROVISIONINGFORMATS_H__ 1

ENTER_PK_NAMESPACE;

PREFAST_PUSH_DISABLE_EXPLAINED( __WARNING_POOR_DATA_ALIGNMENT_25021, "Ignore poor alignment of XBinary data structures" );

#define DRM_PROVISIONING_CURRENT_VERSION 1
#define DRM_PROVISIONING_HWID_LENGTH 16
#define DRM_TEE_RPROV_STACK_SIZE 1024

typedef enum __tagDRM_PROVISIONING_RESPONSE_MESSAGE_TYPES 
{
    DRM_PROVISIONING_CERT_ENTRY_TYPE                = 0x1,
    DRM_PROVISIONING_RESPONSE_SIGNATURE_ENTRY_TYPE  = 0x3,
    DRM_PROVISIONING_RESPONSE_DATA_ENTRY_TYPE       = 0x4,
} DRM_PROVISIONING_RESPONSE_MESSAGE_TYPES;
/* Count Includes XB_OBJECT_GLOBAL_HEADER */
#define DRM_PROVISIONING_RESPONSE_MESSAGE_TYPE_COUNT       4
#define DRM_PROVISIONING_RESPONSE_MESSAGE_FORMAT_ID        XB_DEFINE_QWORD_FORMAT_ID( 'P', 'K', 'P', 'R', 'V', 'R', 'S', 'P' )

typedef struct __tagDRM_PROVISIONING_CERT
{
    DRM_BOOL             fValid;
    DRM_XB_BYTEARRAY     xbbaCert;
} DRM_PROVISIONING_CERT;

typedef struct __tagDRM_PROVISIONING_RESPONSE_DATA
{
    DRM_BOOL             fValid;
    DRM_DWORD            dwSecurityLevel;
    DRM_XB_BYTEARRAY     xbbaNonce;
    DRM_UINT64           qwClientTimestamp;
    DRM_UINT64           qwTimestamp;
} DRM_PROVISIONING_RESPONSE_DATA;

typedef struct __tagDRM_PROVISIONING_RESPONSE_SIGNATURE
{
    DRM_BOOL             fValid;
    DRM_WORD             wSignatureType;
    DRM_XB_BYTEARRAY     xbbaSignature;
} DRM_PROVISIONING_RESPONSE_SIGNATURE;

typedef struct __tagDRM_PROVISIONING_RESPONSE_MESSAGE
{
    DRM_BOOL                                fValid;
    DRM_PROVISIONING_CERT                   Cert;
    DRM_PROVISIONING_RESPONSE_DATA          ResponseData;
    DRM_PROVISIONING_RESPONSE_SIGNATURE     Signature;
} DRM_PROVISIONING_RESPONSE_MESSAGE;

DRM_EXPORT_VAR extern DRM_GLOBAL_CONST DRM_XB_FORMAT_DESCRIPTION s_DRM_PROVISIONING_RESPONSE_MESSAGE_FormatDescription[1];

typedef enum __tagDRM_PROVISIONING_REQUEST_MESSAGE_TYPES 
{
    DRM_PROVISIONING_REQUEST_DATA_ENTRY_TYPE       = 0x1,
    DRM_PROVISIONING_PUBKEYS_ENTRY_TYPE            = 0x2,
    DRM_PROVISIONING_VERSIONS_ENTRY_TYPE           = 0x3,
    DRM_PROVISIONING_REQUEST_SIGNATURE_ENTRY_TYPE  = 0x4,
} DRM_PROVISIONING_REQUEST_MESSAGE_TYPES;
/* Count Includes XB_OBJECT_GLOBAL_HEADER */
#define DRM_PROVISIONING_REQUEST_MESSAGE_TYPE_COUNT       5
#define DRM_PROVISIONING_REQUEST_MESSAGE_FORMAT_ID        XB_DEFINE_QWORD_FORMAT_ID( 'P', 'K', 'P', 'R', 'V', 'R', 'E', 'Q' )

typedef struct __tagDRM_PROVISIONING_REQUEST_DATA
{
    DRM_BOOL             fValid;
    DRM_WORD             wRequestType;
    DRM_DWORD            dwFeaturesRequested;
    DRM_UINT64           qwClientTimestamp;
    DRM_XB_BYTEARRAY     xbbaSecureMediaPathCapabilities;
    DRM_WORD             wEncryptionType;
    DRM_XB_BYTEARRAY     xbbaHWId;
    DRM_XB_BYTEARRAY     xbbaAppId;
    DRM_XB_BYTEARRAY     xbbaNonce;
} DRM_PROVISIONING_REQUEST_DATA;

typedef struct __tagDRM_PROVISIONING_PUBKEYS
{
    DRM_BOOL             fValid;
    DRM_XB_BYTEARRAY     xbbaSigningPubKey;
    DRM_XB_BYTEARRAY     xbbaEncryptionPubKey;
    DRM_XB_BYTEARRAY     xbbaPRNDPubKeyDeprecated;
} DRM_PROVISIONING_PUBKEYS;

typedef struct __tagDRM_PROVISIONING_VERSIONS
{
    DRM_BOOL      fValid;
    DRM_DWORD     dwOEMTEEVersion;
    DRM_DWORD     dwPKMajorVersion;
    DRM_DWORD     dwPKMinorVersion;
    DRM_DWORD     dwPKBuildVersion;
    DRM_DWORD     dwPKQFEVersion;
} DRM_PROVISIONING_VERSIONS;

typedef struct __tagDRM_PROVISIONING_REQUEST_SIGNATURE
{
    DRM_BOOL             fValid;
    DRM_WORD             wSignatureType;
    DRM_XB_BYTEARRAY     xbbaSignature;
} DRM_PROVISIONING_REQUEST_SIGNATURE;

typedef struct __tagDRM_PROVISIONING_REQUEST_MESSAGE
{
    DRM_BOOL                               fValid;
    DRM_PROVISIONING_REQUEST_DATA          RequestData;
    DRM_PROVISIONING_PUBKEYS               PubKeys;
    DRM_PROVISIONING_VERSIONS              Versions;
    DRM_PROVISIONING_REQUEST_SIGNATURE     Signature;
} DRM_PROVISIONING_REQUEST_MESSAGE;

DRM_EXPORT_VAR extern DRM_GLOBAL_CONST DRM_XB_FORMAT_DESCRIPTION s_DRM_PROVISIONING_REQUEST_MESSAGE_FormatDescription[1];

PREFAST_POP;

EXIT_PK_NAMESPACE;

#endif /* __PROVISIONINGFORMATS_H__ */
