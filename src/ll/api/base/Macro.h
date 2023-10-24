#pragma once
#pragma warning(error : 4834)

#ifndef LLAPI
#ifdef LL_EXPORT
#define LLAPI [[maybe_unused]] __declspec(dllexport)
#else
#define LLAPI [[maybe_unused]] __declspec(dllimport)
#endif
#endif

#ifndef LLCAPI
#define LLCAPI extern "C" LLAPI
#endif

#ifndef LLNDAPI
#define LLNDAPI [[nodiscard]] LLAPI
#endif

#ifndef LLETAPI
#define LLETAPI LLAPI extern
#endif

#define LL_EBO __declspec(empty_bases)
