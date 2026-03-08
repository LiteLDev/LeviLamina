# Base（基础类型）

`ll/api/base/` · **通用**

## 概述

Base 模块提供了 LeviLamina API 的基础构建块：导出宏、C++20 概念（concepts）、类型萃取（type traits）、整数类型、编译期定长字符串、容器别名和元编程工具。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/base/Macro.h` | 导出宏（`LLAPI`、`LLNDAPI`、`LLCAPI`） |
| `ll/api/base/Concepts.h` | C++20 概念，用于类型约束 |
| `ll/api/base/TypeTraits.h` | 类型内省萃取 |
| `ll/api/base/StdInt.h` | 标准整数类型别名 |
| `ll/api/base/FixedString.h` | 编译期定长字符串 |
| `ll/api/base/Containers.h` | 容器类型别名（`SmallDenseSet`、`SmallStringMap` 等） |
| `ll/api/base/Meta.h` | 元编程工具（`visitIndex` 等） |
| `ll/api/base/SourceLocation.h` | 源代码位置信息 |
| `ll/api/base/ToString.h` | 转字符串工具 |
| `ll/api/base/CompilerPredefine.h` | 编译器检测及 `LL_SHARED_EXPORT`/`LL_SHARED_IMPORT` |

## 导出宏

定义在 `Macro.h` 中，这些宏控制 LeviLamina 和模组之间的符号可见性：

| 宏 | 构建 LL 时的展开 | 模组使用时的展开 |
|----|------------------|------------------|
| `LLAPI` | `[[maybe_unused]] __declspec(dllexport)` | `[[maybe_unused]] __declspec(dllimport)` |
| `LLNDAPI` | `[[nodiscard]] LLAPI` | `[[nodiscard]] LLAPI` |
| `LLCAPI` | `extern "C" LLAPI` | `extern "C" LLAPI` |

切换由 `LL_EXPORT` 宏定义控制，在 `xmake.lua` 中通过 `add_defines("LL_EXPORT")` 设置。

!!! tip "为你的模组创建导出宏"
    在你的模组中定义类似的宏对：
    ```cpp
    #ifdef MY_MOD_EXPORT
    #define MY_MOD_API __declspec(dllexport)
    #else
    #define MY_MOD_API __declspec(dllimport)
    #endif
    ```
    然后在你的 `xmake.lua` 中添加 `add_defines("MY_MOD_EXPORT")`。

## 概念（Concepts）

定义在 `Concepts.h` 中，这些 C++20 概念在整个 API 中提供类型约束：

| 概念 | 说明 |
|------|------|
| `IsString<T>` | `T` 是字符串类型（`std::string`、`std::string_view`、`char*` 等） |
| `IsOneOf<T, Ts...>` | `T` 是 `Ts...` 中的类型之一 |
| `IsInTypes<T, U>` | `T` 包含在类型列表 `U` 中 |
| `IsExpected<T>` | `T` 是类似 expected 的类型，具有 `value()`、`error()`、`has_value()` |
| `IsLeviExpected<T>` | `IsExpected<T>` 且 `error_type == ll::Error` |
| `IsOptional<T>` | `T` 是类似 optional 的类型（非 expected） |
| `RangeLoopable<T>` | `T` 可以使用范围 for 循环迭代 |
| `Associative<T>` | `T` 是具有 `key_type` 和 `mapped_type` 的范围 |
| `ArrayLike<T>` | `T` 是没有 `mapped_type` 的范围 |
| `Specializes<T, Z>` | `T` 是模板 `Z` 的特化 |
| `TupleLike<T>` | `T` 支持 `std::tuple_size` 和 `std::get` |
| `Stringable<T>` | `T` 具有 `toString()` 或 `to_string()` 方法 |
| `Awaitable<T>` | `T` 是 C++20 可等待类型 |
| `Require<T, Pred>` | `T` 满足谓词 `Pred`（用于适配 type traits） |

### 示例

```cpp
#include "ll/api/base/Concepts.h"

template <ll::concepts::IsString T>
void processString(T const& str) {
    // 可接受 std::string、std::string_view、const char* 等
}

template <ll::concepts::RangeLoopable T>
void iterateOver(T const& range) {
    for (auto const& item : range) {
        // 处理每个元素
    }
}
```

## FixedString

定义在 `FixedString.h` 中，`FixedString` 是一种编译期字符串类型，主要用于模板参数（例如 i18n 的 `_tr` 字面量）。

```cpp
#include "ll/api/base/FixedString.h"

template <ll::FixedString Name>
struct NamedType {
    static constexpr auto name = Name;
};

using MyType = NamedType<"hello">;
static_assert(MyType::name.sv() == "hello");
```

## 相关模块

- [Expected（错误处理）](expected.zh.md) — 基于基础类型构建的错误处理
- [Reflection（反射）](reflection.zh.md) — 使用本模块的概念进行类型内省
