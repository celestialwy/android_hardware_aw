/**@@@+++@@@@******************************************************************
**
** Microsoft (r) PlayReady (r)
** Copyright (c) Microsoft Corporation. All rights reserved.
**
***@@@---@@@@******************************************************************
*/

#ifndef __DRM_SOAP_XML_CONSTANTS_H
#define __DRM_SOAP_XML_CONSTANTS_H

ENTER_PK_NAMESPACE;

/*
** -------------------------------------------------------------------
** XML strings used in the parsing of status code from server response
** -------------------------------------------------------------------
*/
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPExceptionRootPath;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPExceptionSignaturePath;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPExceptionCustomDataPath;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPStatusCodePath;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPGARDCustomDataPath;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPGARDRedirectUrlPath;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPGARDServiceIdPath;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPGARDAccountIdPath;


/*
** -----------------------------------------------------
** XML strings used in the construction of SOAP envelope
** -----------------------------------------------------
*/
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrXMLRootTag;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPEnvelopeTag;
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPEnvelopeAbbrevTag;
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPBodyTag;
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPBodyAbbrevTag;


extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPEnvelopeAttrib1Name;
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPEnvelopeAttrib1Value;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPEnvelopeAttrib2Name;
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPEnvelopeAttrib2Value;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPEnvelopeAttrib3Name;
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPEnvelopeAttrib3Value;

extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPPreserveSpaceAttribName;
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrSOAPPreserveSpaceAttribValue;

/*
** -------------------------------------------------------
** XML strings used in the construction of ClientInfo node
** -------------------------------------------------------
*/
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrReqTagClientInfo;
extern DRM_GLOBAL_CONST  DRM_ANSI_CONST_STRING g_dastrReqTagClientVersion;

EXIT_PK_NAMESPACE;

#endif /* __DRM_SOAP_XML_CONSTANTS_H */
