#pragma once

#ifndef LIAPI
#ifdef LITELOADER_EXPORTS
#define LIAPI [[maybe_unused]] __declspec(dllexport)
#else
#define LIAPI [[maybe_unused]] __declspec(dllimport)
#endif
#endif

#ifndef LICAPI
#define LICAPI extern "C" LIAPI
#endif

#ifndef LL_UNUSED
#define LL_UNUSED [[maybe_unused]]
#endif
