# Base

`ll/api/base/` · **Common**

## Overview

The Base module provides the foundational building blocks used throughout the LeviLamina API: export macros, C++20 concepts, type traits, integer types, compile-time fixed strings, container aliases, and metaprogramming utilities.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/base/Macro.h` | Export macros (`LLAPI`, `LLNDAPI`, `LLCAPI`) |
| `ll/api/base/Concepts.h` | C++20 concepts for type constraints |
| `ll/api/base/TypeTraits.h` | Type introspection traits |
| `ll/api/base/StdInt.h` | Standard integer type aliases |
| `ll/api/base/FixedString.h` | Compile-time fixed-length strings |
| `ll/api/base/Containers.h` | Container type aliases (`SmallDenseSet`, `SmallStringMap`, etc.) |
| `ll/api/base/Meta.h` | Metaprogramming utilities (`visitIndex`, etc.) |
| `ll/api/base/SourceLocation.h` | Source code location information |
| `ll/api/base/ToString.h` | To-string conversion utilities |
| `ll/api/base/CompilerPredefine.h` | Compiler detection and `LL_SHARED_EXPORT`/`LL_SHARED_IMPORT` |

## Export Macros

Defined in `Macro.h`, these macros control symbol visibility between LeviLamina and mods:

| Macro | Expansion (when building LL) | Expansion (when consumed by mod) |
|-------|------------------------------|----------------------------------|
| `LLAPI` | `[[maybe_unused]] __declspec(dllexport)` | `[[maybe_unused]] __declspec(dllimport)` |
| `LLNDAPI` | `[[nodiscard]] LLAPI` | `[[nodiscard]] LLAPI` |
| `LLCAPI` | `extern "C" LLAPI` | `extern "C" LLAPI` |

The switch is controlled by the `LL_EXPORT` define, which is set in `xmake.lua` via `add_defines("LL_EXPORT")`.

!!! tip "Creating Your Own Export Macros"
    For your mod, define a similar pair:
    ```cpp
    #ifdef MY_MOD_EXPORT
    #define MY_MOD_API __declspec(dllexport)
    #else
    #define MY_MOD_API __declspec(dllimport)
    #endif
    ```
    Then add `add_defines("MY_MOD_EXPORT")` to your `xmake.lua`.

## Concepts

Defined in `Concepts.h`, these C++20 concepts provide type constraints used across the API:

| Concept | Description |
|---------|-------------|
| `IsString<T>` | `T` is a string-like type (`std::string`, `std::string_view`, `char*`, etc.) |
| `IsOneOf<T, Ts...>` | `T` is one of the types in `Ts...` |
| `IsInTypes<T, U>` | `T` is contained in type list `U` |
| `IsExpected<T>` | `T` is an expected-like type with `value()`, `error()`, `has_value()` |
| `IsLeviExpected<T>` | `IsExpected<T>` with `error_type == ll::Error` |
| `IsOptional<T>` | `T` is an optional-like type (not expected) |
| `RangeLoopable<T>` | `T` can be iterated with range-based for |
| `Associative<T>` | `T` is a range with `key_type` and `mapped_type` |
| `ArrayLike<T>` | `T` is a range without `mapped_type` |
| `Specializes<T, Z>` | `T` is a specialization of template `Z` |
| `TupleLike<T>` | `T` supports `std::tuple_size` and `std::get` |
| `Stringable<T>` | `T` has `toString()` or `to_string()` method |
| `Awaitable<T>` | `T` is a C++20 awaitable type |
| `Require<T, Pred>` | `T` satisfies predicate `Pred` (adapter for type traits) |

### Example

```cpp
#include "ll/api/base/Concepts.h"

template <ll::concepts::IsString T>
void processString(T const& str) {
    // Works with std::string, std::string_view, const char*, etc.
}

template <ll::concepts::RangeLoopable T>
void iterateOver(T const& range) {
    for (auto const& item : range) {
        // Process each item
    }
}
```

## FixedString

Defined in `FixedString.h`, `FixedString` is a compile-time string type used primarily for template parameters (e.g., in the i18n `_tr` literal).

```cpp
#include "ll/api/base/FixedString.h"

template <ll::FixedString Name>
struct NamedType {
    static constexpr auto name = Name;
};

using MyType = NamedType<"hello">;
static_assert(MyType::name.sv() == "hello");
```

## Related

- [Expected](expected.md) — Error handling built on top of base types
- [Reflection](reflection.md) — Uses concepts from this module for type introspection
