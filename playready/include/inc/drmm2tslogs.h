/**@@@+++@@@@******************************************************************
**
** Microsoft (r) PlayReady (r)
** Copyright (c) Microsoft Corporation. All rights reserved.
**
***@@@---@@@@******************************************************************
*/

#ifndef __DRMM2TSLOGS_H__
#define __DRMM2TSLOGS_H__ 1

#include <drmm2tstypes.h>

ENTER_PK_NAMESPACE_CODE;

DRM_NO_INLINE DRM_API DRM_RESULT DRM_CALL DRM_M2TS_LogEventWithPacket(
    __in                                  const DRM_M2TS_ENCRYPTOR_CONTEXT  *f_pEncContext,
    __in                                  const DRM_M2TS_LOG_CATEGORY        f_eCategory,
    __in                                  const DRM_BOOL                     f_fDropped,
    __in                                  const DRM_RESULT                   f_drResult,
    __in                                  const DRM_M2TS_PACKET             *f_pPacket ) DRM_NO_INLINE_ATTRIBUTE;

DRM_NO_INLINE DRM_API DRM_RESULT DRM_CALL DRM_M2TS_LogEventWithPES(
    __in                                  const DRM_M2TS_ENCRYPTOR_CONTEXT  *f_pEncContext,
    __in                                  const DRM_M2TS_LOG_CATEGORY        f_eCategory,
    __in                                  const DRM_BOOL                     f_fDropped,
    __in                                  const DRM_RESULT                   f_drResult,
    __in                                  const DRM_M2TS_PES                *f_pPES ) DRM_NO_INLINE_ATTRIBUTE;

DRM_NO_INLINE DRM_API DRM_RESULT DRM_CALL DRM_M2TS_LogEventWithKeyRotation(
    __in                                  const DRM_M2TS_ENCRYPTOR_CONTEXT  *f_pEncContext,
    __in                                  const DRM_UINT64                   f_qwPTS,
    __in                                  const DRM_UINT64                   f_qwAggregatedDuration,
    __in                                  const DRM_UINT64                   f_qwCurrentKeyDuration ) DRM_NO_INLINE_ATTRIBUTE;

DRM_NO_INLINE DRM_API DRM_RESULT DRM_CALL DRM_M2TS_LogPATPacket(
    __in                                  const DRM_M2TS_ENCRYPTOR_CONTEXT  *f_pEncContext,
    __in                                  const DRM_DWORD                    f_dwPacketNumber,
    __in                                  const DRM_WORD                     f_wProgramNumber,
    __in                                  const DRM_WORD                     f_wPIDPMT ) DRM_NO_INLINE_ATTRIBUTE;

DRM_NO_INLINE DRM_API DRM_RESULT DRM_CALL DRM_M2TS_LogPMTPacket(
    __in                                  const DRM_M2TS_ENCRYPTOR_CONTEXT  *f_pEncContext,
    __in                                  const DRM_DWORD                    f_dwPacketNumber,
    __in                                  const DRM_WORD                     f_wPID,
    __in                                  const DRM_BYTE                     f_bStreamType ) DRM_NO_INLINE_ATTRIBUTE;

DRM_NO_INLINE DRM_API DRM_RESULT DRM_CALL DRM_M2TS_LogPESPacket(
    __in                                  const DRM_M2TS_ENCRYPTOR_CONTEXT  *f_pEncContext,
    __in                                  const DRM_DWORD                    f_dwPacketNumber,
    __in                                  const DRM_WORD                     f_wPID,
    __in                                  const DRM_WORD                     f_wPacketLength,
    __in                                  const DRM_BOOL                     f_fDataAligned,
    __in                                  const DRM_UINT64                   f_qwPTS ) DRM_NO_INLINE_ATTRIBUTE;

DRM_NO_INLINE DRM_API DRM_RESULT DRM_CALL DRM_M2TS_TranslateError(
    __in                                  const DRM_RESULT                   f_drResult ) DRM_NO_INLINE_ATTRIBUTE;


EXIT_PK_NAMESPACE_CODE;

#endif  /* __DRMM2TSLOGS_H__ */