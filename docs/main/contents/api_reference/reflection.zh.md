`ll/api/reflection/` 路 **通用**

## 概述

Reflection 模块为聚合类型提供编译期反射能力，并在其上构建了一套通用的序列化 / 反序列化框架。

它常用于：

- 将聚合对象序列化为 `nlohmann::json`
- 将聚合对象序列化为 `CompoundTagVariant` 这类 NBT 风格目标
- 将 JSON / NBT 风格数据反序列化回 C++ 对象
- 自定义成员名、枚举名、映射键名，以及某些类型的专用序列化逻辑

这个模块的核心并不只面向 JSON。`nlohmann::json` 只是最常见的目标类型之一。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/reflection/Reflection.h` | 核心反射工具、成员遍历、字符串转换 |
| `ll/api/reflection/Serialization.h` | 通用序列化 |
| `ll/api/reflection/Deserialization.h` | 通用反序列化 |
| `ll/api/reflection/Serializer.h` | 自定义扩展点 |
| `ll/api/reflection/Dispatcher.h` | Dispatcher 支持 |
| `ll/api/reflection/ReflectionError.h` | 常见反射错误 |

## 什么类型可以直接反射

当一个类型是可被反射系统接受的聚合类型时，可以直接走默认反射逻辑。

典型例子：

- 只包含公开数据成员的普通结构体
- 嵌套聚合结构体
- 成员里包含容器、`std::optional`、`std::variant`

不适合直接走默认反射的情况：

- 类型需要专门的构造逻辑
- 同一个类型对不同输出目标需要不同序列化结果
- 类型应该序列化成字符串或带判别字段的对象

这些情况应当提供 `ll::reflection::Serializer<T>` 特化。

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

其中 `J` 是目标类型，例如：

- `nlohmann::json`
- `CompoundTagVariant`
- 你自己通过 `Serializer<T>` 支持的其他 JSON-like / NBT-like 类型

### 反序列化

```cpp
template <class T, class J, IsKeyFormatter F>
Expected<> deserialize(T& out, J&& input, F const& keyFormatter) noexcept;

template <class T, class J>
Expected<> deserialize(T& out, J&& input) noexcept;

template <class T, class J, IsKeyFormatter F>
Expected<T> deserialize_to(J&& input, F const& keyFormatter) noexcept;
```

### 反射工具

```cpp
template <class T, class F>
void forEachMember(T& value, F&& fn);

template <class T, class F>
void forEachMember(T const& value, F&& fn);
```

### 键和枚举的字符串转换

```cpp
template <typename T, typename F>
std::string type_to_string(T const& value, F const& keyFormatter);

template <typename T, typename F>
std::optional<T> string_to_type(std::string_view text, F const& keyFormatter);
```

这两个函数主要用于：

- 关联容器键
- 枚举
- 具备字符串转换能力的自定义类型

## 基础聚合类型用法

```cpp
#include "ll/api/reflection/Serialization.h"
#include "ll/api/reflection/Deserialization.h"
#include "nlohmann/json.hpp"

struct PlayerData {
    std::string name;
    int         level;
    double      health;
};

auto json = ll::reflection::serialize<nlohmann::json>(PlayerData{
    .name   = "Steve",
    .level  = 10,
    .health = 20.0,
});

auto parsed = ll::reflection::deserialize_to<PlayerData>(*json);
```

默认映射规则是“成员名 -> 字段名”，并递归处理：

- 算术类型
- 字符串
- `std::optional`
- `std::variant`
- 数组和数组风格容器
- 关联容器
- 嵌套可反射聚合类型

## Key Formatter

Key formatter 用于控制反射成员名和枚举名在序列化 / 反序列化时如何转换。

例如：

```cpp
std::string uppercaseAsciiKey(std::string_view key) {
    std::string result{key};
    std::transform(result.begin(), result.end(), result.begin(), [](unsigned char ch) {
        return static_cast<char>(std::toupper(ch));
    });
    return result;
}
```

使用方式：

```cpp
auto json = ll::reflection::serialize<nlohmann::json>(value, uppercaseAsciiKey);
auto obj  = ll::reflection::deserialize_to<MyType>(*json, uppercaseAsciiKey);
```

### 针对特定键类型的格式化

对于关联容器，formatter 还可以单独指定某些键类型在“输出时”如何转字符串，而不影响“输入时”的解析规则。

例如：

```cpp
struct UuidKeyFormatter {
    std::string operator()(std::string_view key) const {
        return std::string{key};
    }

    template <typename T>
        requires std::same_as<T, mce::UUID>
    std::string operator()(T const& value) const {
        auto text = value.asString();
        std::transform(text.begin(), text.end(), text.begin(), [](unsigned char ch) {
            return static_cast<char>(std::toupper(ch));
        });
        return text;
    }
};
```

这样可以做到：

- 序列化时把 UUID 键输出成大写
- 反序列化时仍然按普通 UUID 字符串规则解析

## 成员辅助函数

模块提供了两类辅助函数，用于在自定义序列化器里精确操作某个成员或某个固定字段。

### 基于成员指针

这类 API 使用真实成员指针，并自动取反射成员名：

```cpp
member<&Type::member>(object, outJson, formatter);
member_serialize<&Type::member>(outJson, object, formatter);
member_deserialize<&Type::member>(object, inJson, formatter);
```

适合字段名就是成员名的情况。

### 基于固定键名

这类 API 使用编译期固定字符串：

```cpp
field<"name">(value, outJson, formatter);
field_serialize<"name">(outJson, value, formatter);

field<"name">(value, inJson, formatter);
field_deserialize<"name">(value, inJson, formatter);
required_field<"name">(value, inJson, formatter);
```

适合：

- 字段名不是成员名
- 你正在写 `Serializer<T>`
- 某些字段是否必选取决于其他字段

### `field_deserialize` 与 `required_field`

`field_deserialize<"...">` 在目标类型是 `std::optional<T>` 且字段缺失时，会成功并把目标重置为 `std::nullopt`。

`required_field<"...">` 则表示这个字段必须存在，即使目标类型本身是 `std::optional<T>`。

这特别适合条件字段场景，例如：

```cpp
struct ItemInfo {
    ItemInfoType               type;
    std::optional<std::string> name;
    std::optional<int>         aux;
    std::optional<std::string> snbt;
};
```

其中：

- `type == Name` 时，`name` 逻辑上必须存在
- `type == Snbt` 时，`snbt` 逻辑上必须存在

## 自定义 `Serializer<T>`

当默认聚合反射不够用时，应提供 `Serializer<T>` 特化。

这部分是整个 reflection 扩展里最重要的入口。

在写特化前，先明确你的类型对外应该长什么样：

- 字符串形式，比如 `"1.20.5"`、`"0123-uuid-..."`  
- 单值形式，比如一个 JSON 字符串、一个 JSON 对象、一个 NBT 节点  
- 手工控字段的对象形式

### 先判断该写哪一种特化

在这些情况下，优先写 `to_string` / `from_string`：

- 类型本质上有稳定的文本表示
- 类型经常作为关联容器键使用
- 你希望它支持 `type_to_string` / `string_to_type`

在这些情况下，优先写值式 `serialize` / `deserialize`：

- 整个类型应被当成“一个值”输出
- 同一个类型对不同目标类型输出结果不同
- 类型本身不适合直接按成员展开

在这些情况下，优先写原地 `serialize(value, out, formatter)` / `deserialize(out, in, formatter)`：

- 你要手动控制字段名和字段逻辑
- 某些字段是否必选取决于其他字段
- 你想复用 `field`、`required_field`、`member`、`member_deserialize`

### 大致命中顺序

从高层看，reflection 会优先尝试自定义特化，而不是默认聚合反射。

常见优先级可以理解为：

1. 当前值类型 + 当前输出类型能命中的自定义特化
2. 内建的 optional / dispatcher / enum / variant / container 逻辑
3. 默认聚合反射
4. 最后的兜底转换

实际使用时，只要 `Serializer<T>` 对当前调用有效，通常就会先命中它，而不是继续走聚合反射。

主要有三种扩展方式。

### 1. 字符串转换

用于：

- 关联容器键
- 部分枚举转换路径
- 显式调用 `type_to_string` / `string_to_type`

```cpp
template <>
struct ll::reflection::Serializer<MyType> {
    static std::string to_string(MyType const& value);
    static ll::Expected<MyType> from_string(std::string_view text);
};
```

这一层本身不会自动替代普通对象序列化。

它主要影响：

- 关联容器键
- `type_to_string(value)`
- `string_to_type<T>(text)`

典型例子：

```cpp
template <>
struct ll::reflection::Serializer<mce::UUID> {
    static std::string to_string(mce::UUID const& value) {
        return value.asString();
    }

    static ll::Expected<mce::UUID> from_string(std::string_view sv) {
        if (!mce::UUID::canParse(sv)) {
            return ll::makeI18nStringError<"invalid uuid">();
        }
        return mce::UUID::fromString(sv);
    }
};
```

如果一个类型有明确、稳定、可逆的文本形式，就很适合先写这一层。

### 2. 值式序列化 / 反序列化

适用于“整个值应当作为另一个独立值输出”的场景：

```cpp
template <>
struct ll::reflection::Serializer<MyType> {
    template <typename J>
    static ll::Expected<J> serialize(MyType const& value);

    template <typename J>
    static ll::Expected<MyType> deserialize(J const& j);
};
```

这是最灵活、最常用的一种特化方式。

适用于“这个类型整体应当被当成一个值，而不是一组反射成员”的情况。

典型例子：

```cpp
template <>
struct ll::reflection::Serializer<mce::UUID> {
    template <typename J>
    static J serialize(mce::UUID const& value) {
        return value.asString();
    }

    template <typename J>
    static ll::Expected<mce::UUID> deserialize(J const& j) {
        if (!j.is_string()) {
            return ll::reflection::makeDeserStringTypeError();
        }
        auto text = std::string{j};
        if (!mce::UUID::canParse(text)) {
            return ll::makeI18nStringError<"invalid uuid">();
        }
        return mce::UUID::fromString(text);
    }
};
```

这类写法尤其适合：

- UUID 这类单值类型
- 版本号类型
- 包装类
- 同一类型对 `json` / `nbt` 需要不同输出的场景

它也可以根据目标输出类型做不同逻辑：

```cpp
template <>
struct ll::reflection::Serializer<MyType> {
    template <typename J>
    static ll::Expected<J> serialize(MyType const& value) {
        if constexpr (std::same_as<J, CompoundTagVariant>) {
            return /* NBT 形式 */;
        } else {
            return /* JSON 或字符串形式 */;
        }
    }
};
```

如果你希望“同一个类型对不同输出目标产生不同结果”，这是首选写法。

例如：

- `serialize<nlohmann::json>(value)` 输出一个 SNBT 字符串
- `serialize<CompoundTagVariant>(value)` 直接返回原始 NBT 节点

这类场景非常适合值式特化，而不是硬塞进默认聚合反射。

### 3. 原地序列化 / 反序列化

适合逐字段填充目标对象的场景：

```cpp
template <>
struct ll::reflection::Serializer<MyType> {
    template <typename J, typename F>
    static ll::Expected<> serialize(MyType const& value, J& out, F const& keyFormatter);

    template <typename J, typename F>
    static ll::Expected<> deserialize(MyType& out, J const& in, F const& keyFormatter);
};
```

这通常是“对象结构特化”的最佳写法。

在这种特化里，建议优先复用辅助函数，而不是手写大量 `contains` + `at` + `deserialize`：

```cpp
template <>
struct ll::reflection::Serializer<ItemInfo> {
    template <typename J, typename F>
    static ll::Expected<> deserialize(ItemInfo& out, J const& j, F const& keyFormatter) {
        using ll::reflection::field;
        using ll::reflection::required_field;

        if (!j.is_object()) {
            return ll::reflection::makeDeserObjectTypeError();
        }

        if (auto res = field<"type">(out.type, j, keyFormatter); !res) {
            return ll::forwardError(res.error());
        }

        switch (out.type) {
        case ItemInfoType::Name:
            if (auto res = required_field<"name">(out.name, j, keyFormatter); !res) {
                return ll::forwardError(res.error());
            }
            if (auto res = field<"aux">(out.aux, j, keyFormatter); !res) {
                return ll::forwardError(res.error());
            }
            out.snbt.reset();
            return {};

        case ItemInfoType::Snbt:
            if (auto res = required_field<"snbt">(out.snbt, j, keyFormatter); !res) {
                return ll::forwardError(res.error());
            }
            out.name.reset();
            out.aux.reset();
            return {};
        }

        return {};
    }
};
```

这类模式特别适合：

- 带判别字段的对象
- 条件必选字段
- 兼容层结构
- 字段名需要精调的对象

### 推荐判断顺序

如果你不确定该怎么写，通常按这个顺序判断：

1. 如果类型有稳定文本形式，先写 `to_string` / `from_string`
2. 如果类型应该整体被当成单值输出，写值式 `serialize` / `deserialize`
3. 如果类型本质上是对象结构，但字段逻辑需要手控，写原地 `serialize` / `deserialize`

如果一个类型既需要键字符串支持，又需要正常值序列化，两个层次可以同时实现。

### 常见误区

- 只写了 `to_string` / `from_string`，却期望普通对象序列化也跟着改变
- 明明可以用 `field` / `required_field`，却手写大量重复字段解析逻辑
- 忘记同一类型对不同输出目标可以返回不同 `serialize<J>` 结果
- 逻辑必选的 `std::optional<T>` 没有使用 `required_field`
- 把键风格转换硬编码进类型自身，而不是交给外部 formatter

通常更适合：

- 带判别字段的对象
- 条件必选字段
- 非完全对称的结构布局

## 同时支持字符串形式和结构形式

一个类型可以同时支持：

- `to_string` / `from_string`
- 完整对象的 `serialize` / `deserialize`

例如版本号类型：

```cpp
struct TestVersion {
    int mMajor = 0;
    int mMinor = 0;
    int mPatch = 0;
};
```

可能表现为：

- 作为普通字段值时，输出为 `{ "mMajor": 1, "mMinor": 20, "mPatch": 5 }`
- 作为关联容器键时，输出为 `"1.20.5"`

## `std::variant`

普通 `std::variant` 已被直接支持。

例如：

```cpp
using Value = std::variant<int, std::string, NestedValue>;
```

行为大致如下：

- 序列化时输出当前激活分支对应的值
- 反序列化时依次尝试各个候选类型
- 算术类型会优先做一次精确匹配
- 如果全部候选都失败，返回统一的 variant cast error

对于更复杂的变体，应自行提供 `Serializer<YourVariant>`。

### 带判别字段的变体

如果你的变体需要这种结构：

```json
{
  "type": "transfer",
  "value": { ... }
}
```

应通过 `Serializer<YourVariant>` 自行实现：

- 序列化时写入判别字段
- 序列化时写入载荷
- 反序列化时根据判别字段选择正确分支

这也是“枚举索引变体”这类方案的典型写法。

## 枚举与 Flag 枚举

枚举支持：

- 基于枚举名的字符串序列化
- 对枚举名应用 key formatter
- 字符串不可用时退回到底层整数

Flag 枚举同样支持。例如配合合适的 formatter，可以把 PascalCase 的 flag 输出为：

```text
read_permission|write_permission
```

## 关联容器

关联容器的键类型必须可转成字符串。

支持的键类型通常包括：

- 字符串类
- 枚举
- 提供了 `Serializer<T>::to_string` / `from_string` 的自定义类型

反序列化时：

- 键文本非法会生成带键路径的错误
- 值反序列化失败也会被包装为带键路径的错误

## `std::string_view` 生命周期限制

`std::string_view` 的反序列化是严格的。

只有在输入源可以安全借用底层存储时才会成功。

也就是说：

- 从稳定的左值 JSON / NBT 对象反序列化，可能成功
- 从临时对象反序列化，会因为生命周期不安全而失败

这样做是为了防止悬垂 `string_view`。

## 错误模型

公开序列化 / 反序列化 API 统一返回 `ll::Expected`。

常见错误包括：

- 类型不匹配，例如 `field must be a string`
- 缺少必选字段
- 关联键非法
- 枚举值非法
- variant 无法匹配任何分支

嵌套错误会自动附带路径信息，例如：

- 成员名
- 数组索引
- 映射键

因此即使对象层级很深，错误信息通常也仍然可定位。

## 推荐使用方式

在以下情况下，优先使用默认聚合反射：

- C++ 结构和输出结构基本一致
- 必选字段关系是天然固定的

在以下情况下，优先使用 `field` / `required_field`：

- 需要显式字段名
- 字段是否必选依赖其他字段
- 你正在编写自定义 `Serializer<T>`

在以下情况下，应提供 `Serializer<T>`：

- 类型应序列化成字符串
- 同一类型对 JSON 和 NBT 需要不同输出
- 变体需要判别字段
- 类型本身不是简单聚合结构

## 相关文档

- [Config](config.zh.md)：配置系统通过 reflection 做序列化
- [Base](base.zh.md)：reflection 依赖的一些基础类型工具
