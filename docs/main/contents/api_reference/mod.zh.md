# Mod（模组系统）

`ll/api/mod/` · **通用**

## 概述

Mod 模块管理模组生命周期、元数据（清单）、目录结构，并提供对模组特定资源的访问，如日志器、配置目录和数据目录。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/mod/Mod.h` | 模组实例和生命周期 |
| `ll/api/mod/Manifest.h` | 模组元数据结构 |
| `ll/api/mod/ModManager.h` | 模组管理器基类 |
| `ll/api/mod/ModManagerRegistry.h` | 所有模组管理器的注册表 |
| `ll/api/mod/NativeMod.h` | 原生（DLL）模组实现 |

## 核心类

### Mod

表示已加载的模组，包含生命周期回调和资源访问。

```cpp
namespace ll::mod {
class Mod {
public:
    enum class State { Enabled, Disabled };

    State getState() const;
    Manifest const& getManifest() const;
    std::string const& getName() const;
    std::string const& getType() const;

    std::filesystem::path const& getModDir() const;
    std::filesystem::path const& getDataDir() const;
    std::filesystem::path const& getConfigDir() const;
    std::optional<std::filesystem::path> getWorldDataDir() const;
    std::optional<std::filesystem::path> getWorldConfigDir() const;
    std::filesystem::path const& getLangDir() const;
    std::filesystem::path const& getResourceDir() const;
    std::filesystem::path const& getBehaviorDir() const;

    io::Logger& getLogger() const;

    bool isEnabled() const;
    bool isDisabled() const;

    void onLoad(CallbackFn func) noexcept;
    void onUnload(CallbackFn func) noexcept;
    void onEnable(CallbackFn func) noexcept;
    void onDisable(CallbackFn func) noexcept;
};

std::filesystem::path const& getModsRoot();
}
```

### Manifest

从 `manifest.json` 加载的模组元数据。

```cpp
namespace ll::mod {
struct Dependency {
    std::string                  name;
    std::optional<data::Version> version;
};

struct Manifest {
    std::string                                entry;
    std::string                                name;
    std::string                                type;
    std::optional<std::string>                 platform;
    std::optional<bool>                        passive;
    std::optional<data::Version>               version;
    std::optional<std::string>                 author;
    std::optional<std::string>                 description;
    std::optional<SmallStringMap<std::string>> extraInfo;
    std::optional<SmallDenseSet<Dependency>>   dependencies;
    std::optional<SmallDenseSet<Dependency>>   optionalDependencies;
    std::optional<SmallDenseSet<Dependency>>   conflicts;
    std::optional<SmallDenseSet<Dependency>>   loadBefore;
};
}
```

## 使用方法

### 访问模组实例

```cpp
#include "ll/api/mod/NativeMod.h"

ll::mod::NativeMod& getSelfMod() {
    return ll::mod::NativeMod::current();
}
```

### 使用模组资源

```cpp
#include "ll/api/mod/Mod.h"

void setupMod(ll::mod::Mod& mod) {
    auto& logger = mod.getLogger();
    logger.info("模组名称: {}", mod.getName());

    auto configPath = mod.getConfigDir() / "config.json";
    auto dataPath = mod.getDataDir() / "database.db";
    auto langPath = mod.getLangDir() / "zh_CN.json";
}
```

### 生命周期回调

```cpp
#include "ll/api/mod/Mod.h"

void registerCallbacks(ll::mod::Mod& mod) {
    mod.onLoad([](ll::mod::Mod& self) -> bool {
        self.getLogger().info("模组加载中");
        return true;  // 返回 false 中止加载
    });

    mod.onEnable([](ll::mod::Mod& self) -> bool {
        self.getLogger().info("模组已启用");
        return true;
    });

    mod.onDisable([](ll::mod::Mod& self) -> bool {
        self.getLogger().info("模组已禁用");
        return true;
    });

    mod.onUnload([](ll::mod::Mod& self) -> bool {
        self.getLogger().info("模组卸载中");
        return true;
    });
}
```

### 目录结构

每个模组具有以下目录结构：

```
mods/
└── MyMod/
    ├── manifest.json          # 模组元数据
    ├── MyMod.dll              # 模组二进制文件
    ├── config/                # 配置文件 (getConfigDir())
    ├── data/                  # 持久化数据 (getDataDir())
    ├── lang/                  # 翻译文件 (getLangDir())
    ├── resources/             # 资源包 (getResourceDir())
    └── behavior/              # 行为包 (getBehaviorDir())

worlds/
└── Bedrock level/
    └── plugins/
        └── MyMod/
            ├── config/        # 世界特定配置 (getWorldConfigDir())
            └── data/          # 世界特定数据 (getWorldDataDir())
```

## 相关模块

- [Config（配置系统）](config.zh.md) — 使用 `getConfigDir()` 获取配置文件位置
- [Data（数据结构）](data.zh.md) — 使用 `getDataDir()` 存储数据库
- [I18n（国际化）](i18n.zh.md) — 使用 `getLangDir()` 存储翻译文件
- [IO & Logger（日志系统）](io.zh.md) — `getLogger()` 返回模组的日志器
