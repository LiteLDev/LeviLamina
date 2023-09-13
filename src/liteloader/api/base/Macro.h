#pragma once

#ifndef LLDLL_UNUSED
#define LLDLL_UNUSED [[maybe_unused]]
#endif

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
