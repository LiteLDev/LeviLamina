# Mod

`ll/api/mod/` · **Common**

## Overview

The Mod module manages mod lifecycle, metadata (manifest), directory structure, and provides access to mod-specific resources like loggers, config directories, and data directories.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/mod/Mod.h` | Mod instance and lifecycle |
| `ll/api/mod/Manifest.h` | Mod metadata structure |
| `ll/api/mod/ModManager.h` | Base mod manager |
| `ll/api/mod/ModManagerRegistry.h` | Registry of all mod managers |
| `ll/api/mod/NativeMod.h` | Native (DLL) mod implementation |

## Key Classes

### Mod

Represents a loaded mod with lifecycle callbacks and resource access.

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

Mod metadata loaded from `manifest.json`.

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

## Usage

### Accessing Mod Instance

```cpp
#include "ll/api/mod/NativeMod.h"

ll::mod::NativeMod& getSelfMod() {
    return ll::mod::NativeMod::current();
}
```

### Using Mod Resources

```cpp
#include "ll/api/mod/Mod.h"

void setupMod(ll::mod::Mod& mod) {
    auto& logger = mod.getLogger();
    logger.info("Mod name: {}", mod.getName());

    auto configPath = mod.getConfigDir() / "config.json";
    auto dataPath = mod.getDataDir() / "database.db";
    auto langPath = mod.getLangDir() / "en_US.json";
}
```

### Lifecycle Callbacks

```cpp
#include "ll/api/mod/Mod.h"

void registerCallbacks(ll::mod::Mod& mod) {
    mod.onLoad([](ll::mod::Mod& self) -> bool {
        self.getLogger().info("Mod loading");
        return true;  // Return false to abort load
    });

    mod.onEnable([](ll::mod::Mod& self) -> bool {
        self.getLogger().info("Mod enabled");
        return true;
    });

    mod.onDisable([](ll::mod::Mod& self) -> bool {
        self.getLogger().info("Mod disabled");
        return true;
    });

    mod.onUnload([](ll::mod::Mod& self) -> bool {
        self.getLogger().info("Mod unloading");
        return true;
    });
}
```

### Directory Structure

Each mod has the following directory structure:

```
mods/
└── MyMod/
    ├── manifest.json          # Mod metadata
    ├── MyMod.dll              # Mod binary
    ├── config/                # Config files (getConfigDir())
    ├── data/                  # Persistent data (getDataDir())
    ├── lang/                  # Translations (getLangDir())
    ├── resources/             # Resource packs (getResourceDir())
    └── behavior/              # Behavior packs (getBehaviorDir())

worlds/
└── Bedrock level/
    └── plugins/
        └── MyMod/
            ├── config/        # World-specific config (getWorldConfigDir())
            └── data/          # World-specific data (getWorldDataDir())
```

## Related

- [Config](config.md) — Use `getConfigDir()` for config file location
- [Data](data.md) — Use `getDataDir()` for database storage
- [I18n](i18n.md) — Use `getLangDir()` for translation files
- [IO & Logger](io.md) — `getLogger()` returns the mod's logger
