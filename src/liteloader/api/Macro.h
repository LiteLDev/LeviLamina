#pragma once

#ifndef LLDLL_UNUSED
#if defined(__clang__)
#define LLDLL_UNUSED
#else
#define LLDLL_UNUSED [[maybe_unused]]
#endif//defined(__clang__)
#endif//LLDLL_UNUSED

#ifndef LLAPI
#ifdef LITELOADER_EXPORTS
#define LLAPI LLDLL_UNUSED __declspec(dllexport)
#else
#define LLAPI LLDLL_UNUSED __declspec(dllimport)
#endif
#endif

#ifndef LLCAPI
#define LLCAPI extern "C" LLAPI
#endif

#ifndef LLNDAPI
#define LLNDAPI [[nodiscard]] LLAPI
#endif

#ifndef LL_UNUSED
#define LL_UNUSED [[maybe_unused]]
#endif

#define LL_EBO __declspec(empty_bases)
