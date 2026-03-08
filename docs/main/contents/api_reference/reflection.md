# Reflection

`ll/api/reflection/` · **Common**

## Overview

The Reflection module provides compile-time reflection for aggregate types, enabling automatic serialization/deserialization to/from JSON without manual code.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/reflection/Reflection.h` | Core reflection utilities |
| `ll/api/reflection/Serialization.h` | JSON serialization |
| `ll/api/reflection/Deserialization.h` | JSON deserialization |

## Key Concepts

### Reflectable

A type is reflectable if it's an aggregate (no user-defined constructors, no private members, no virtual functions).

```cpp
namespace ll::reflection {
template <class T>
concept Reflectable = /* aggregate type */;
}
```

## Key Functions

```cpp
namespace ll::reflection {
// Iterate over members
template <class T, class F>
void forEachMember(T& value, F&& fn);

// Serialize to JSON
template <class J, Reflectable T>
Expected<J> serialize(T const& value);

// Deserialize from JSON
template <Reflectable T, class J>
Expected<T> deserialize(J const& json);

// Member introspection
template <class T>
constexpr size_t member_count_v;

template <size_t I, class T>
using member_t = /* type of Ith member */;

template <size_t I, class T>
constexpr size_t member_offset_v;

template <class T>
constexpr auto member_name_array_v;
}
```

## Usage

### Basic Serialization

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

### Basic Deserialization

```cpp
#include "ll/api/reflection/Deserialization.h"

void loadPlayer(nlohmann::json const& json) {
    auto player = ll::reflection::deserialize<PlayerData>(json);
    if (player) {
        // Use player.value()
    }
}
```

### Member Iteration

```cpp
#include "ll/api/reflection/Reflection.h"

void printMembers(PlayerData const& player) {
    ll::reflection::forEachMember(player, [](auto const& member) {
        // Process each member
    });
}
```

## Related

- [Config](config.md) — Uses reflection for config serialization
- [Base](base.md) — `Reflectable` concept defined here
