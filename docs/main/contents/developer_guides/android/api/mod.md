# Mod API

## Purpose

The Mod API is the lifecycle entry point for native mods. It uses
`<pl/Mod.hpp>`, `ll::mod::NativeMod::current()`, and a long-lived C++
instance registered with `PL_REGISTER_MOD`.

## Header

```cpp
#include <pl/Mod.hpp>
```

## Registration

```cpp
#include <pl/Mod.hpp>

class MyMod {
public:
  static MyMod &instance();

  MyMod();

  [[nodiscard]] ll::mod::NativeMod &getSelf() const { return mSelf; }

  bool load();
  bool enable();
  bool disable();
  bool unload();

private:
  ll::mod::NativeMod &mSelf;
};

PL_REGISTER_MOD(MyMod, MyMod::instance())
```

```cpp
MyMod::MyMod() : mSelf(*ll::mod::NativeMod::current()) {}
```

`load()` is required. `enable()`, `disable()`, and `unload()` are optional; the
registration helper treats missing optional phases as success.

Use `PL_REGISTER_MOD` once in a source file for each native mod library.

## Lifecycle

| Method | Recommended work |
| --- | --- |
| `load()` | Read config, create directories, prepare mod-owned state. |
| `enable()` | Register hooks, input callbacks, and runtime UI. |
| `disable()` | Undo game-facing work and unregister runtime UI. |
| `unload()` | Release remaining C++ state after disable. |

Each method returns `true` on success and `false` on failure.

## NativeMod

`ll::mod::NativeMod` exposes manifest metadata, package paths, the Java VM,
state, and a mod-scoped logger.

```cpp
bool MyMod::load() {
  auto &self = getSelf();
  std::filesystem::create_directories(self.getConfigDir());
  self.getLogger().info("Loading {}", self.getName());
  return true;
}
```

Common members:

| Member | Purpose |
| --- | --- |
| `getJavaVM()` | Current `JavaVM *`. |
| `getLogger()` | `pl::log::Logger` for this mod. |
| `getId()` | Stable runtime mod id. |
| `getName()` | Display name from the manifest. |
| `getAuthor()` | Author from the manifest. |
| `getVersion()` | Version from the manifest. |
| `getEntryPath()` | Resolved path to the configured entry file. |
| `getEntryFileName()` | Entry file name from the manifest. |
| `getIconPath()` | Resolved icon path, when one is configured. |
| `getModDir()` | Root directory of the mod package. |
| `getDataDir()` | `<mod root>/data`. |
| `getConfigDir()` | `<mod root>/config`. |
| `getResourceDir()` | `<mod root>/resources`. |
| `getManifestPath()` | Resolved path to `manifest.json`. |
| `getLibraryPath()` | Resolved path to the loaded native library. |
| `getState()` | Current native mod lifecycle state. |
| `isLoaded()` / `isEnabled()` / `isDisabled()` | Convenience state checks. |

Runtime UI, floating buttons, and HUD overlay drawing are documented in
[Mod Menu API](./mod_menu.md).

## Notes

- Keep the registered instance alive for the process lifetime.
- Do not throw across lifecycle boundaries; catch failures and return `false`.
- Store user-editable config under `getSelf().getConfigDir()`.
