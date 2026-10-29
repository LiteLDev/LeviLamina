# Native Mod Quick Start

!!! note "Android, not LeviLamina"
    This section is about **native mods for Minecraft Bedrock Edition on Android**. They are loaded by the
    [Android version of LeviLauncher](https://docs.levimc.org/LeviLauncher/guide/quick-start?platform=android)
    through the Preloader SDK ([LiteLDev/preloader-android](https://github.com/LiteLDev/preloader-android)), not by
    LeviLamina, and use their own `pl::` API documented here.

This page describes the supported developer path for native mods of the Android version of
LeviLauncher. The public SDK is published in
[LiteLDev/preloader-android](https://github.com/LiteLDev/preloader-android).

For standalone third-party mods, start from the
[Android mod template](https://github.com/QYCottage/levilauncher-android-mod-template).

Use `examples/full-cpp-mod` as the reference implementation. It includes
lifecycle registration, typed config, Mod Menu integration, Android packaging,
and `.levipack` output.

## Build the Example

From the repository root:

```powershell
.\examples\full-cpp-mod\build.ps1 -Clean
```

The example is ready to build in this repository. Standalone mod projects
should start from the template and import the SDK as an external dependency.

Output:

```text
examples\full-cpp-mod\dist\arm64-v8a\full-cpp-mod\
examples\full-cpp-mod\dist\arm64-v8a\full-cpp-mod.levipack
```

Import the `.levipack`, or copy the unpacked mod directory into the launcher
native mod location.

## Package Layout

```text
full-cpp-mod/
├── manifest.json
├── libfull_cpp_mod.so
└── config/
    ├── config.json
    └── config.schema.json
```

The directory name is the runtime mod id. Keep it stable after release because
it is used for paths, Mod Menu ownership, and persisted user state.

## manifest.json

```json
{
  "type": "preload-native",
  "name": "Full C++ Lifecycle Mod Example",
  "author": "LiteLDev",
  "version": "1.0.0",
  "entry": "libfull_cpp_mod.so",
  "minecraft_versions": [],
  "overwrite_files": [],
  "overwrite_folders": []
}
```

| Field | Notes |
| --- | --- |
| `type` | Must be `preload-native`. |
| `entry` | Relative path to the Android `.so` inside the mod directory. |
| `name` | Display name shown by the launcher. |
| `author` | Author text shown by the launcher. |
| `version` | Mod version. |
| `icon` | Optional relative path to an icon. |
| `minecraft_versions` | Exact versions and `*` prefix wildcards are supported. Missing or empty means all versions. |
| `overwrite_files` | Optional relative files that may be replaced when importing over an installed mod. Missing or empty means no extra file replacement. |
| `overwrite_folders` | Optional relative folders whose existing files may be replaced when importing over an installed mod. Missing or empty keeps existing files outside `manifest.json` and `entry`. |

## Lifecycle Shape

```cpp
#include <pl/Mod.hpp>

class FullCppMod {
public:
  static FullCppMod &instance();

  FullCppMod();

  [[nodiscard]] ll::mod::NativeMod &getSelf() const { return mSelf; }

  bool load();
  bool enable();
  bool disable();
  bool unload();

private:
  ll::mod::NativeMod &mSelf;
};

PL_REGISTER_MOD(FullCppMod, FullCppMod::instance())
```

`load()` is required. The other lifecycle methods are optional and default to
success when absent.

Store the loader-provided native mod object in the constructor:

```cpp
FullCppMod::FullCppMod() : mSelf(*ll::mod::NativeMod::current()) {}

bool FullCppMod::load() {
  auto &self = getSelf();
  std::filesystem::create_directories(self.getConfigDir());
  self.getLogger().info("Loaded {}", self.getName());
  return true;
}
```

## SDK Dependency

In a standalone Android native mod project, import `preloader-android` with
`FetchContent` and link your mod library to the `preloader` target:

```cmake
include(FetchContent)

FetchContent_Declare(
    preloader_android
    GIT_REPOSITORY https://github.com/LiteLDev/preloader-android.git
    GIT_TAG 0.2.2)
FetchContent_MakeAvailable(preloader_android)

target_link_libraries(my_mod PRIVATE preloader)
```

Pin `GIT_TAG` to a release tag for reproducible builds.

Common SDK headers:

```cpp
#include <pl/Mod.hpp>
#include <pl/ModMenu.hpp>
#include <pl/Input.hpp>
#include <pl/Config.hpp>
#include <pl/memory/Hook.hpp>
#include <pl/memory/Patch.hpp>
#include <pl/memory/Signature.hpp>
```

Use only public SDK headers from `include/pl`.

## Typed Config

Keep config in mod-owned state. During lifecycle calls, `ConfigFile` can use
the current native mod's `config/config.json` and `config/config.schema.json`
paths by default:

```cpp
struct ExampleConfig {
  int version = 1;
  bool showOverlay = true;
  int opacity = 80;
};

class FullCppMod {
private:
  std::optional<pl::config::ConfigFile<ExampleConfig>> mConfig;
};

bool FullCppMod::load() {
  mConfig.emplace();
  return mConfig->load();
}
```

Package `config.json` and `config.schema.json` with your mod. The full example
build script produces both files before creating the `.levipack`.

## Mod Menu

```cpp
bool FullCppMod::enable() {
  const auto &config = mConfig->value();

  return pl::modmenu::ModuleBuilder("full_cpp_mod.hud",
                                    "Full C++ Config Demo")
      .modId(getSelf().getId())
      .description("Pure C++ lifecycle module with persistent typed config.")
      .defaultEnabled(config.showOverlay)
      .config("opacity", "Opacity", pl::modmenu::ConfigType::SliderInt,
              std::to_string(config.opacity), "0", "100")
      .registerModule();
}
```

Use `ButtonBuilder` for floating buttons:

```cpp
bool registerQuickButton(ll::mod::NativeMod &self) {
  return pl::modmenu::ButtonBuilder("full_cpp_mod.quick_drop",
                                    "Full C++ Quick Drop")
      .moduleId("full_cpp_mod.hud")
      .modId(self.getId())
      .label("Q")
      .androidKeyCode(45)
      .behavior(pl::modmenu::ButtonBehavior::Click)
      .registerButton();
}
```

To draw registered images in the HUD, register raw RGBA pixels and submit an
`Image` draw command with `DrawCommand::imageId`:

```cpp
bool registerLogoImage(std::span<const unsigned char> rgbaPixels) {
  return pl::modmenu::registerImage("full_cpp_mod.logo", rgbaPixels, 64, 64);
}

void submitLogoOverlay() {
  const std::vector<pl::modmenu::DrawCommand> commands = {
      {
          .type = pl::modmenu::DrawCommandType::Image,
          .x = 16.0f,
          .y = 16.0f,
          .w = 32.0f,
          .h = 32.0f,
          .imageId = "full_cpp_mod.logo",
      },
  };
  pl::modmenu::submitDrawCommands("full_cpp_mod.hud", commands);
}
```

Unregister temporary modules/buttons in `disable()`.
For the full API reference, see [Mod Menu API](./api/mod_menu.md).

## Build Options

```powershell
.\examples\full-cpp-mod\build.ps1
.\examples\full-cpp-mod\build.ps1 -Clean
.\examples\full-cpp-mod\build.ps1 -Ndk <path-to-android-ndk>
```

If `-Ndk` is omitted, the script resolves it from `ANDROID_NDK_HOME`,
`ANDROID_NDK_ROOT`, `ANDROID_HOME`, or `ANDROID_SDK_ROOT`.

## Checklist

- Build native mods for `arm64-v8a`.
- Link the `preloader` target and use public SDK headers from `include/pl`.
- Register one long-lived object with `PL_REGISTER_MOD`.
- Keep `ll::mod::NativeMod &mSelf` from `ll::mod::NativeMod::current()`.
- Load config before registering runtime UI.
- Store hook and patch handles in mod-owned state.
- Unregister temporary Mod Menu entries during `disable()`.
- Keep callbacks valid until they are unregistered or the mod unloads.

Continue with the [Mod API Reference](./api/mod.md) and
[Config API Reference](./api/config.md) for the complete API surface.
