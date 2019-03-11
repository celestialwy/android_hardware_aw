/**@@@+++@@@@******************************************************************
**
** Microsoft (r) PlayReady (r)
** Copyright (c) Microsoft Corporation. All rights reserved.
**
***@@@---@@@@******************************************************************
*/

/*
** This file includes the #defines normally set by a profile.
** It should be #included at the top of drmfeatures.h if you
** are not using the provided .mk files.
*/

#ifndef __DRMPROFILEOEMTEEPLAYONLYMK_H__
#define __DRMPROFILEOEMTEEPLAYONLYMK_H__

#ifndef DRM_BUILD_PROFILE
#define DRM_BUILD_PROFILE 14
#endif /* DRM_BUILD_PROFILE */

#ifndef DRM_ACTIVATION_PLATFORM
#define DRM_ACTIVATION_PLATFORM 0
#endif /* DRM_ACTIVATION_PLATFORM */

#ifndef DRM_SUPPORT_FILE_LOCKING
#define DRM_SUPPORT_FILE_LOCKING 0
#endif /* DRM_SUPPORT_FILE_LOCKING */

#ifndef DRM_SUPPORT_MULTI_THREADING
#define DRM_SUPPORT_MULTI_THREADING 0
#endif /* DRM_SUPPORT_MULTI_THREADING */

#ifndef DRM_SUPPORT_ECCPROFILING
#define DRM_SUPPORT_ECCPROFILING 1
#endif /* DRM_SUPPORT_ECCPROFILING */

#ifndef DRM_SUPPORT_INLINEDWORDCPY
#define DRM_SUPPORT_INLINEDWORDCPY 0
#endif /* DRM_SUPPORT_INLINEDWORDCPY */

#ifndef DRM_SUPPORT_DATASTORE_PREALLOC
#define DRM_SUPPORT_DATASTORE_PREALLOC 1
#endif /* DRM_SUPPORT_DATASTORE_PREALLOC */

#ifndef DRM_SUPPORT_NATIVE_64BIT_TYPES
#define DRM_SUPPORT_NATIVE_64BIT_TYPES 1
#endif /* DRM_SUPPORT_NATIVE_64BIT_TYPES */

#ifndef DRM_SUPPORT_FORCE_ALIGN
#define DRM_SUPPORT_FORCE_ALIGN 0
#endif /* DRM_SUPPORT_FORCE_ALIGN */

#ifndef DRM_SUPPORT_ASSEMBLY
#define DRM_SUPPORT_ASSEMBLY 1
#endif /* DRM_SUPPORT_ASSEMBLY */

#ifndef DRM_SUPPORT_PRECOMPUTE_GTABLE
#define DRM_SUPPORT_PRECOMPUTE_GTABLE 0
#endif /* DRM_SUPPORT_PRECOMPUTE_GTABLE */

#ifndef DRM_SUPPORT_SECUREOEMHAL
#define DRM_SUPPORT_SECUREOEMHAL 0
#endif /* DRM_SUPPORT_SECUREOEMHAL */

#ifndef DRM_SUPPORT_SECUREOEMHAL_PLAY_ONLY
#define DRM_SUPPORT_SECUREOEMHAL_PLAY_ONLY 0
#endif /* DRM_SUPPORT_SECUREOEMHAL_PLAY_ONLY */

/********************************************************************************
**
** Refer to comments in DrmOverrideFeatureDefaults.mk for details on
** each DRM_SUPPORT_TEE option and what it means.
**
********************************************************************************/
#ifndef DRM_SUPPORT_TEE
#define DRM_SUPPORT_TEE 3
#endif /* DRM_SUPPORT_TEE */

#ifndef DRM_SUPPORT_TRACING
#define DRM_SUPPORT_TRACING 0
#endif /* DRM_SUPPORT_TRACING */

#ifndef _DATASTORE_WRITE_THRU
#define _DATASTORE_WRITE_THRU 1
#endif /* _DATASTORE_WRITE_THRU */

#ifndef _ADDLICENSE_WRITE_THRU
#define _ADDLICENSE_WRITE_THRU 0
#endif /* _ADDLICENSE_WRITE_THRU */

#ifndef DRM_HDS_COPY_BUFFER_SIZE
#define DRM_HDS_COPY_BUFFER_SIZE 32768
#endif /* DRM_HDS_COPY_BUFFER_SIZE */

#ifndef DRM_SUPPORT_TOOLS_NET_IO
#define DRM_SUPPORT_TOOLS_NET_IO 0
#endif /* DRM_SUPPORT_TOOLS_NET_IO */

#ifndef DRM_TEST_SUPPORT_ACTIVATION
#define DRM_TEST_SUPPORT_ACTIVATION 0
#endif /* DRM_TEST_SUPPORT_ACTIVATION */

#ifndef USE_PK_NAMESPACES
#define USE_PK_NAMESPACES 0
#endif /* USE_PK_NAMESPACES */

#ifndef DRM_INCLUDE_PK_NAMESPACE_USING_STATEMENT
#define DRM_INCLUDE_PK_NAMESPACE_USING_STATEMENT 0
#endif /* DRM_INCLUDE_PK_NAMESPACE_USING_STATEMENT */

#ifndef DRM_COMPILE_FOR_NORMAL_WORLD
#define DRM_COMPILE_FOR_NORMAL_WORLD 1
#endif /* DRM_COMPILE_FOR_NORMAL_WORLD */

#ifndef DRM_COMPILE_FOR_SECURE_WORLD
#define DRM_COMPILE_FOR_SECURE_WORLD 0
#endif /* DRM_COMPILE_FOR_SECURE_WORLD */

#ifndef DRM_NO_OPT
#define DRM_NO_OPT 0
#endif /* DRM_NO_OPT */


#endif /* __DRMPROFILEOEMTEEPLAYONLYMK_H__ */

