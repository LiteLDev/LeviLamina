#pragma once

#ifndef LLAPI
#ifdef LITELOADER_EXPORTS
#define LLAPI [[maybe_unused]] __declspec(dllexport)
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

#define LL_EBO __declspec(empty_bases)
