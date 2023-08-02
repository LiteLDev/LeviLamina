#pragma once

#ifndef LLAPI
#ifdef LITELOADER_EXPORTS
#define LLAPI [[maybe_unused]] __declspec(dllexport)
#else
#define LLAPI [[maybe_unused]] __declspec(dllimport)
#endif
#endif

#ifndef LLCAPI
#define LLCAPI extern "C" LLAPI
#endif

#ifndef LL_UNUSED
#define LL_UNUSED [[maybe_unused]]
#endif
