# Config（配置系统）

`ll/api/Config.h` · **通用**

## 概述

Config 模块提供了用于加载和保存模组配置文件（JSON 格式）的模板函数。它利用 [Reflection（反射）](reflection.md) 模块进行自动序列化/反序列化，支持带版本号的配置及自动迁移。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/Config.h` | `saveConfig`、`loadConfig` 及相关工具 |

## 概念

### IsConfig

配置类型必须满足：

- `ll::reflection::Reflectable<T>` — 类型必须是聚合体（用于反射）
- 具有整数类型的 `version` 字段

```cpp
namespace ll::config {
template <class T>
concept IsConfig = ll::reflection::Reflectable<T>
    && std::integral<std::remove_cvref_t<decltype((std::declval<T>().version))>>;
}
```

## 核心函数

### saveConfig

```cpp
template <IsConfig T, class J = nlohmann::ordered_json>
bool saveConfig(T const& config, std::filesystem::path const& path);
```

将 `config` 序列化为 JSON 并写入 `path`。成功时返回 `true`。

### loadConfig

```cpp
template <IsConfig T, class J = nlohmann::ordered_json, class F = bool(T&, J&)>
bool loadConfig(T& config, std::filesystem::path const& path, F&& updater = defaultConfigUpdater<T, J>);
```

从 `path` 加载配置到 `config`。如果文件不存在，则保存当前 `config` 作为默认值。返回 `true` 表示无需重写（版本匹配）。

**行为：**

1. 文件不存在 → 保存默认配置，返回 `false`
2. 文件存在但版本不同 → 调用 `updater`，返回 `false`
3. 文件存在且版本匹配 → 直接反序列化，返回 `true`

### defaultConfigUpdater

```cpp
template <class T, class J>
bool defaultConfigUpdater(T& config, J& data);
```

默认更新策略：使用 `merge_patch` 将现有文件内容合并到默认配置上，在添加新字段的同时保留用户的修改。

## 使用方法

### 定义配置结构体

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
    结构体必须是聚合类型（无用户定义构造函数、无私有成员、无虚函数），反射才能正常工作。

### 加载和保存

```cpp
#include "ll/api/Config.h"
#include "ll/api/mod/Mod.h"

void loadMyConfig(ll::mod::Mod& mod) {
    MyConfig config;

    auto configPath = mod.getConfigDir() / "config.json";

    bool upToDate = ll::config::loadConfig(config, configPath);
    if (!upToDate) {
        // 配置已创建或已迁移，保存更新后的版本
        ll::config::saveConfig(config, configPath);
    }

    mod.getLogger().info("问候语: {}", config.greeting);
    mod.getLogger().info("最大玩家数: {}", config.maxPlayers);
}
```

### 自定义更新器

```cpp
#include "ll/api/Config.h"

struct MyConfigV2 {
    int         version = 2;
    std::string greeting = "Hello";
    int         maxPlayers = 20;
    bool        enableFeatureX = false;
    std::string newField = "default";  // v2 中新增
};

bool myUpdater(MyConfigV2& config, nlohmann::ordered_json& data) {
    int oldVersion = data.value("version", 1);
    if (oldVersion == 1) {
        // 从 v1 迁移：保留旧的 "greeting" 值
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

### 生成的 JSON 示例

对于上述 `MyConfig` 结构体，生成的 JSON 如下：

```json
{
    "version": 1,
    "greeting": "Hello",
    "maxPlayers": 20,
    "enableFeatureX": false
}
```

## 相关模块

- [Reflection（反射）](reflection.zh.md) — 提供配置使用的 `serialize`/`deserialize`
- [Mod（模组系统）](mod.zh.md) — `Mod::getConfigDir()` 返回配置目录
