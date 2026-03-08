# Config

`ll/api/Config.h` · **Common**

## Overview

The Config module provides template functions for loading and saving mod configuration files as JSON. It leverages the [Reflection](reflection.md) module for automatic serialization/deserialization and supports versioned configuration with automatic migration.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/Config.h` | `saveConfig`, `loadConfig`, and related utilities |

## Concepts

### IsConfig

A config type must satisfy:

- `ll::reflection::Reflectable<T>` — The type must be an aggregate (for reflection)
- Has an integral `version` field

```cpp
namespace ll::config {
template <class T>
concept IsConfig = ll::reflection::Reflectable<T>
    && std::integral<std::remove_cvref_t<decltype((std::declval<T>().version))>>;
}
```

## Key Functions

### saveConfig

```cpp
template <IsConfig T, class J = nlohmann::ordered_json>
bool saveConfig(T const& config, std::filesystem::path const& path);
```

Serializes `config` to JSON and writes it to `path`. Returns `true` on success.

### loadConfig

```cpp
template <IsConfig T, class J = nlohmann::ordered_json, class F = bool(T&, J&)>
bool loadConfig(T& config, std::filesystem::path const& path, F&& updater = defaultConfigUpdater<T, J>);
```

Loads a config from `path` into `config`. If the file does not exist, saves the current `config` as a default. Returns `true` if no rewrite was needed (version matched).

**Behavior:**

1. If the file doesn't exist → saves default config, returns `false`
2. If the file exists but version differs → calls `updater`, returns `false`
3. If the file exists and version matches → deserializes directly, returns `true`

### defaultConfigUpdater

```cpp
template <class T, class J>
bool defaultConfigUpdater(T& config, J& data);
```

The default update strategy: merges the existing file content onto the default config using `merge_patch`, preserving user modifications while adding new fields.

## Usage

### Defining a Config Struct

```cpp
#include "ll/api/Config.h"

struct MyConfig {
    int         version = 1;
    std::string greeting = "Hello";
    int         maxPlayers = 20;
    bool        enableFeatureX = false;
};
```

!!! note
    The struct must be an aggregate type (no user-defined constructors, no private members, no virtual functions) for reflection to work.

### Loading and Saving

```cpp
#include "ll/api/Config.h"
#include "ll/api/mod/Mod.h"

void loadMyConfig(ll::mod::Mod& mod) {
    MyConfig config;

    auto configPath = mod.getConfigDir() / "config.json";

    bool upToDate = ll::config::loadConfig(config, configPath);
    if (!upToDate) {
        // Config was created or migrated, save the updated version
        ll::config::saveConfig(config, configPath);
    }

    mod.getLogger().info("Greeting: {}", config.greeting);
    mod.getLogger().info("Max Players: {}", config.maxPlayers);
}
```

### Custom Updater

```cpp
#include "ll/api/Config.h"

struct MyConfigV2 {
    int         version = 2;
    std::string greeting = "Hello";
    int         maxPlayers = 20;
    bool        enableFeatureX = false;
    std::string newField = "default";  // Added in v2
};

bool myUpdater(MyConfigV2& config, nlohmann::ordered_json& data) {
    int oldVersion = data.value("version", 1);
    if (oldVersion == 1) {
        // Migrate from v1: rename "greeting" to keep old value
        if (data.contains("greeting")) {
            config.greeting = data["greeting"];
        }
    }
    data.erase("version");
    auto patch = ll::reflection::serialize<nlohmann::ordered_json>(config);
    patch.value().merge_patch(data);
    data = *std::move(patch);
    return true;
}

void loadConfigV2(ll::mod::Mod& mod) {
    MyConfigV2 config;
    ll::config::loadConfig(config, mod.getConfigDir() / "config.json", myUpdater);
}
```

### Generated JSON Example

For the `MyConfig` struct above, the generated JSON looks like:

```json
{
    "version": 1,
    "greeting": "Hello",
    "maxPlayers": 20,
    "enableFeatureX": false
}
```

## Related

- [Reflection](reflection.md) — Provides `serialize`/`deserialize` used by config
- [Mod](mod.md) — `Mod::getConfigDir()` returns the config directory
