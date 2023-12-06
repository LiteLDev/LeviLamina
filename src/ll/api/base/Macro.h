#pragma once
#pragma warning(error : 4834)

#define LL_VA_EXPAND(...) __VA_ARGS__

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

#ifndef LL_EBO
#define LL_EBO __declspec(empty_bases)
#endif

#ifndef LL_CLANG_CEXPR
#ifdef __clang__
#define LL_CLANG_CEXPR inline
#else
#define LL_CLANG_CEXPR constexpr
#endif
#endif
