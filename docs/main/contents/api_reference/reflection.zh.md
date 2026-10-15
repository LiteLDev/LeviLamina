`ll/api/reflection/` · **通用**

## 概述

Reflection 模块让 C++ 结构体和 JSON / NBT 之间来回映射，而不必给每个类型手写一遍读写代码。典型落点：

- 模组配置（[Config](config.zh.md) 就建立在它之上）
- 模组清单 `manifest.json`
- 存档 / 玩家数据之类的持久化内容
- 自定义 NBT 数据（`CompoundTagVariant`）
- 网络包或其它 JSON-like / NBT-like 结构

它并不只面向 JSON：`nlohmann::json` 只是最常见的目标类型之一，凡是提供 `is_object` / `is_array` / `is_string` 这类查询接口、以及 `object()` / `array()` 工厂的类型，都能用同一套代码处理。

**这一页怎么读：**

1. 想把普通结构体存成 JSON —— 看「快速上手」；
2. 想让某个类型以字符串形式出现（比如版本号、UUID）—— 看「给一个类型写最简单的特化」；
3. 需要控制必选规则、写复杂特化、或者"特化明明写了却没生效" —— 看[反射（进阶篇）](reflection_advanced.zh.md)。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/reflection/Reflection.h` | 核心反射工具、成员遍历、字符串转换 |
| `ll/api/reflection/Serialization.h` | 通用序列化 |
| `ll/api/reflection/Deserialization.h` | 通用反序列化 |
| `ll/api/reflection/Serializer.h` | 自定义扩展点 |
| `ll/api/reflection/Dispatcher.h` | Dispatcher 支持 |
| `ll/api/reflection/ReflectionError.h` | 常见反射错误 |
| `ll/api/reflection/TypeName.h` | 编译期类型名与类型名裁剪工具 |

## 什么类型可以直接反射

当一个类型是**聚合体**时，不用写任何特化就能直接序列化。聚合体的要求是：没有用户声明的构造函数、没有私有或受保护的非静态数据成员、没有私有或受保护的基类。典型例子：

- 只包含公开数据成员的普通结构体
- 嵌套聚合结构体
- 成员里包含容器、`std::optional`、`std::variant`

默认映射规则是「成员名 → 字段名」，逐成员递归处理。每种类型对应什么表示：

| C++ 类型 | 输出 | 备注 |
| --- | --- | --- |
| 算术类型 `int` / `float` / `double` … | 数字 | `bool` 输出布尔值；数值转换是严格的，见下 |
| `std::string` 等字符串类型 | 字符串 | |
| `std::string_view` | 字符串 | 只能从可安全借用的左值源反序列化，见进阶篇 |
| 枚举 | 字符串（枚举名） | 名字不可得时退回底层整数 |
| `std::optional<T>` | `T` 的表示 | 空值作为对象成员时**整个键被省略**，不是 `null` |
| `std::variant<...>` | 当前分支的表示 | |
| `std::pair` / `std::tuple` / `std::array` | 数组 | 反序列化时元素个数必须一致 |
| `std::vector` / `std::list` / `std::set` … | 数组 | |
| `std::map` / `std::unordered_map` … | 对象 | 键类型必须能转成字符串 |
| 嵌套聚合体 | 对象 | 递归应用同一套规则 |

两个容易踩的点：

- **默认反序列化要求所有非 optional 成员都出现在输入里**。成员的默认初始化值（`int level = 0;`）不参与补齐，缺字段会直接报缺失字段错误；输入里多出来的键会被忽略。
- **数值转换是严格的**：越界（例如把 `300` 写进 `int8`）、带小数的值写进整数类型、负数写进无符号类型都会报错，而不是静默截断或回绕；布尔值写进算术类型会变成 0 / 1。

不适用的类型（有私有成员、有自定义构造函数、需要专门的构造逻辑、要序列化成字符串或带判别字段的对象……）请写 `Serializer<T>` 特化，做法见下文。

## 快速上手：基础聚合类型

第一次用，照这三步走。

### 1. 定义结构体

字段是公开的普通数据成员即可：

```cpp
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/reflection/Serialization.h"

#include "nlohmann/json.hpp"

struct PlayerData {
    std::string name{};
    int         level{};
    double      health{};
};
```

### 2. 序列化

```cpp
ll::Expected<nlohmann::json> toJson() {
    PlayerData const player{
        .name   = "Steve",
        .level  = 10,
        .health = 20.0,
    };
    return ll::reflection::serialize<nlohmann::json>(player);
}
```

得到的就是按成员名展开的对象：

```json
{
    "health": 20.0,
    "level": 10,
    "name": "Steve"
}
```

`nlohmann::json` 默认按键名排序，所以输出顺序和成员声明顺序不同；想保持声明顺序就换 `nlohmann::ordered_json`（配置系统正是这么做的）。

### 3. 反序列化

```cpp
ll::Expected<PlayerData> fromJson(nlohmann::json const& json) {
    return ll::reflection::deserialize_to<PlayerData>(json);
}
```

`deserialize_to<T>` 会读出一个新的 `T`；如果想写进已经存在的对象（例如调用方持有的配置对象），改用 `deserialize(out, json)`。

默认规则是「成员名 → 字段名」，逐成员递归处理；每种类型对应什么表示见上一节的对照表。注意它是**严格**的：输入里少一个非 optional 成员就会报缺失字段错误，多出来的键会被静默忽略。

## 核心 API

### 序列化

```cpp
template <typename J, typename T, IsKeyFormatter F>
Expected<J> serialize(T&& value, F const& keyFormatter) noexcept;

template <typename J, typename T>
Expected<J> serialize(T&& value) noexcept;

template <class J, class T, IsKeyFormatter F>
Expected<> serialize_to(J& out, T&& value, F const& keyFormatter) noexcept;
```

其中 `J` 是目标类型，例如 `nlohmann::json`、`CompoundTagVariant`，或你自己通过 `Serializer<T>` 支持的类型。

### 反序列化

```cpp
template <class T, class J, IsKeyFormatter F>
Expected<> deserialize(T& out, J&& input, F const& keyFormatter) noexcept;

template <class T, class J>
Expected<> deserialize(T& out, J&& input) noexcept;

template <class T, class J, IsKeyFormatter F>
Expected<T> deserialize_to(J&& input, F const& keyFormatter) noexcept;
```

所有公开入口都返回 `ll::Expected`，用法和 LL 其它 API 一致：

```cpp
auto json = ll::reflection::serialize<nlohmann::json>(value);
if (!json) {
    return ll::forwardError(json.error());   // 错误信息自带字段路径，见「错误模型」
}
use(*json);                                  // 成功时解引用取值
```

同一个操作通常有两个入口，按"手上有没有现成的目标对象"来选：

| 你想做的事 | 用哪个入口 |
| --- | --- |
| 把值转成目标类型，拿到一个新对象 | `serialize<J>(value)` / `deserialize_to<T>(input)` |
| 写进一个已经存在的目标对象 | `serialize_to<J>(out, value)` / `deserialize(out, input)` |

每个入口都有带 key formatter 和不带的两个版本；不带 formatter 时使用默认 formatter（键名原样）。

## 给一个类型写最简单的特化

有些类型天生不适合"按成员展开"：UUID、版本号、资源 ID 之类，它们最自然的形态是一个字符串。做法是给 `Serializer<T>` 写特化，一共两层——**第一层让它在当键时能转成字符串，第二层让它在对象里也输出成字符串**。

以强类型 ID 为例：

```cpp
struct PlayerId {
    uint64 value{};

    std::string                   toString() const;                     // 例如 "0000-0000-0001"
    static ll::Expected<PlayerId> tryParse(std::string_view text);       // 解析失败时返回错误
};

template <>
struct ll::reflection::Serializer<PlayerId> {
    // 第一层：字符串形式，关联容器键与 type_to_string / string_to_type 会用
    static std::string            to_string(PlayerId const& value) { return value.toString(); }
    static ll::Expected<PlayerId> from_string(std::string_view text) { return PlayerId::tryParse(text); }

    // 第二层：让它在对象里也输出成字符串
    template <typename J, typename F>
    static ll::Expected<J> serialize(PlayerId const& value, F const&) {
        return J{value.toString()};
    }

    template <typename J, typename F>
    static ll::Expected<PlayerId> deserialize(J const& j, F const&) {
        if (!j.is_string()) return ll::reflection::makeDeserStringTypeError();
        // 拿到 string_t const&，再自己构造成需要的类型
        auto const& text = j.template get_ref<typename std::remove_cvref_t<J>::string_t const&>();
        return from_string(std::string_view{text});
    }
};
```

写完之后的差别：

```cpp
struct PlayerProfile {
    PlayerId    id{};
    std::string name{};
};

// serialize<nlohmann::json>(profile) 得到：
// {"id":"0000-0000-0001","name":"Steve"}
//
// std::map<PlayerId, int> 的键同样是 "0000-0000-0001"
// deserialize_to<PlayerId>(json) 从字符串解析回对象
```

几点提示：

- **两层要一起写**：只写 `to_string` / `from_string` 时，类型当键没问题，但作为普通成员仍然会按成员展开（聚合体）或直接报错（非聚合体）。
- **签名要对齐、返回值不要写 `void`**，否则特化会被静默忽略——完整清单见[进阶篇](reflection_advanced.zh.md)。
- LL 内部对 `mce::UUID`、`ll::data::Version` 就是这套做法；它们用的是「原地式序列化 + 值式反序列化」的组合（`serialize(t, j)` 把字符串写进目标），框架两种写法都接受。
- 只想改变"键的写法"（例如 UUID 键全大写）而不想让类型本身变成字符串，请用 key formatter，见下一节。

## 可选与必选字段

默认反序列化是严格的，规则只有三条：

| 成员声明 | 输入里缺这个键时 |
| --- | --- |
| `std::optional<T> m{};` | 成功，`m` 变成 `std::nullopt` |
| 普通成员 `T m{};` | 报 `missing required field "m" when deserializing` |

写出方向与之对应：成员是空的 `std::optional<T>` 时，**整个键会被省略**，而不是写成 `null`。也就是说"缺键"和 `null` 在输出里无法区分，读取方要按可选字段处理。

需要"缺字段时保留旧值"或"缺字段时用默认值"这类语义，请使用 `default_member` / `default_field`（见进阶篇的成员辅助函数一节），或者干脆把成员改成 `std::optional<T>`。

## Key Formatter

Key formatter 用来控制成员名、枚举名、键名在序列化 / 反序列化时如何转换，例如全部转成大写：

```cpp
#include <algorithm>
#include <cctype>

std::string uppercaseAsciiKey(std::string_view key) {
    std::string result{key};
    std::ranges::transform(result, result.begin(), [](unsigned char ch) {
        return static_cast<char>(std::toupper(ch));
    });
    return result;
}

// 使用：
auto json = ll::reflection::serialize<nlohmann::json>(value, uppercaseAsciiKey);
auto obj  = ll::reflection::deserialize_to<MyType>(json, uppercaseAsciiKey);
```

formatter 还可以只针对某种键类型定制（例如让 UUID 键大写、但解析规则不变），这类用法见[进阶篇](reflection_advanced.zh.md)。

## 错误模型

所有公开接口都返回 `ll::Expected`，失败时给出带路径的可读信息，例如：

```text
Reflection error in field 'values[0].number':
field must be a number or boolean
```

常见错误：

| 错误信息（片段） | 含义 |
| --- | --- |
| `field must be a string` / `field must be an object` / `field must be an array` | 类型不匹配 |
| `missing required field "x" when deserializing` | 缺必选字段 |
| `field must be a number or boolean` | 应该给数字或布尔 |
| `number 300 is out of range for signed char` | 数值越界 |
| `number 1.5 is not an integer` | 带小数的值写进整数类型 |
| `invalid enum value: x` | 枚举值非法 |
| `invalid key: x` | 关联容器的键非法 |
| `could not cast target object (...) to any type in the variant` | variant 没有任何分支能匹配 |

编译期报错主要是两条，都会带上具体类型名：

- `cannot serialize this type: ...` / `cannot deserialize this type: ...`：该类型没有任何可用的路径，需要写 `Serializer<T>` 特化。完整的编译期报错对照表和排查手法见[进阶篇](reflection_advanced.zh.md)。

数值转换是严格的：越界、带小数、负数写进无符号类型都会报错，而不是静默截断或回绕，JSON 与 NBT 两个后端行为一致；布尔值写进算术类型会变成 0 / 1。

## 常见误区

- 只写了 `to_string` / `from_string`，却期望对象里有字符串——第二层也得写。
- 特化签名和文档不一致（多一个 `const`、少一个 `typename F`）——会被静默忽略，聚合体下连报错都没有。
- 返回值写了 `void`——不支持。
- 以为成员的默认初始化值会补上缺字段——不会，缺非 optional 成员直接报错。
- 以为空的 `std::optional` 会写成 `null`——作为对象成员时整个键都会被省略。
- 依赖静默的数值转换——`1.5` 写进 `int`、`300` 写进 `int8`、`-1` 写进无符号类型都会报错。

## 下一步

需要以下内容时看[反射（进阶篇）](reflection_advanced.zh.md)：

- 完整签名表、返回值约束，以及"特化没生效"的自查清单；
- 成员辅助函数（`member` / `field` / `required_field` / `default_field`：条件必选、缺省值）；
- 从测试里摘出来的复杂示例：判别字段结构、扁平化输出、不可默认构造的类型、判别式变体、ABI 包装、JSON 与 NBT 双形态；
- 把别的数据结构（脚本引擎对象、`Json::Value`、自己的 `Value` 类型）接到反射上：自定义目标类型；
- 调度优先级、`std::variant` 的匹配规则、`Dispatcher`、`std::string_view` 生命周期、编译期报错对照表。

## 相关文档

- [反射（进阶篇）](reflection_advanced.zh.md)
- [Config](config.zh.md)：配置系统，反射最主要的消费者
- [Base](base.zh.md)：反射依赖的基础类型工具（概念、容器、`Expected`）
