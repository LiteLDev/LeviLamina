#ifdef _MSC_VER
#pragma once
#endif

#ifndef VCRUNTUME_1_LOADER
#define VCRUNTUME_1_LOADER

#include <stdint.h>

#define  RUNTIME_EXPORT			extern "C"

#ifdef _M_X64
#define  RUNTIME_CALL			__fastcall
#else
#define  RUNTIME_CALL			__cdecl
#endif

#define VC_RUNTIME_LIB			"vcruntime140_1.dll"
#define VC_RUNTIME_LOCAL_LIB	"vcruntime140_2.dll"

#ifndef LOAD_LIBRARY_SEARCH_SYSTEM32
#define LOAD_LIBRARY_SEARCH_SYSTEM32			0x00000800
#endif

#ifndef LOAD_LIBRARY_SEARCH_APPLICATION_DIR
#define LOAD_LIBRARY_SEARCH_APPLICATION_DIR		0x00000200
#endif

namespace proxy
{
	void init_runtime();
	void free_runtime();
}

#endif