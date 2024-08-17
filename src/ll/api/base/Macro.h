#pragma once
#pragma warning(error : 4834)

#include "ll/api/base/CompilerPredefine.h"

#define LL_VA_EXPAND(...) __VA_ARGS__

#ifndef LLAPI
#ifdef LL_EXPORT
#define LLAPI [[maybe_unused]] LL_SHARED_EXPORT
#else
#define LLAPI [[maybe_unused]] LL_SHARED_IMPORT
#endif
#endif

#ifndef LLCAPI
#define LLCAPI extern "C" LLAPI
#endif

#ifndef LLNDAPI
#define LLNDAPI [[nodiscard]] LLAPI
#endif

#ifndef LL_MAY_CONSTEXPR
#ifdef __clang__
#define LL_MAY_CONSTEXPR inline
#else
#define LL_MAY_CONSTEXPR constexpr
#endif
#endif

#ifndef LL_UNIQUE_TYPE
#ifdef __INTELLISENSE__
#define LL_UNIQUE_TYPE decltype((nullptr))
#else
#define LL_UNIQUE_TYPE decltype(([] {}))
#endif
#endif
