# Reflection（反射）

`ll/api/reflection/` · **通用**

## 概述

Reflection 模块为聚合类型提供编译期反射，支持自动序列化/反序列化到 JSON，无需手动编写代码。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/reflection/Reflection.h` | 核心反射工具 |
| `ll/api/reflection/Serialization.h` | JSON 序列化 |
| `ll/api/reflection/Deserialization.h` | JSON 反序列化 |

## 核心概念

### Reflectable

如果类型是聚合体（无用户定义构造函数、无私有成员、无虚函数），则该类型可反射。

```cpp
namespace ll::reflection {
template <class T>
concept Reflectable = /* 聚合类型 */;
}
```

## 核心函数

```cpp
namespace ll::reflection {
// 迭代成员
template <class T, class F>
void forEachMember(T& value, F&& fn);

// 序列化为 JSON
template <class J, Reflectable T>
Expected<J> serialize(T const& value);

// 从 JSON 反序列化
template <Reflectable T, class J>
Expected<T> deserialize(J const& json);

// 成员内省
template <class T>
constexpr size_t member_count_v;

template <size_t I, class T>
using member_t = /* 第 I 个成员的类型 */;

template <size_t I, class T>
constexpr size_t member_offset_v;

template <class T>
constexpr auto member_name_array_v;
}
```

## 使用方法

### 基本序列化

```cpp
#include "ll/api/reflection/Serialization.h"
#include "nlohmann/json.hpp"

struct PlayerData {
    std::string name;
    int level;
    double health;
};

void savePlayer(PlayerData const& player) {
    auto json = ll::reflection::serialize<nlohmann::json>(player);
    if (json) {
        // json.value() == {"name": "...", "level": 10, "health": 20.0}
    }
}
```

### 基本反序列化

```cpp
#include "ll/api/reflection/Deserialization.h"

void loadPlayer(nlohmann::json const& json) {
    auto player = ll::reflection::deserialize<PlayerData>(json);
    if (player) {
        // 使用 player.value()
    }
}
```

### 成员迭代

```cpp
#include "ll/api/reflection/Reflection.h"

void printMembers(PlayerData const& player) {
    ll::reflection::forEachMember(player, [](auto const& member) {
        // 处理每个成员
    });
}
```

## 相关模块

- [Config（配置系统）](config.zh.md) — 使用反射进行配置序列化
- [Base（基础类型）](base.zh.md) — `Reflectable` 概念在此定义
