# 原生模组快速开始

!!! note "Android，而不是 LeviLamina"
    本部分介绍 **Android 上 Minecraft 基岩版的原生模组**。它们由
    [Android 版 LeviLauncher](https://docs.levimc.org/LeviLauncher/zh-CN/guide/quick-start?platform=android)
    通过 Preloader SDK（[LiteLDev/preloader-android](https://github.com/LiteLDev/preloader-android)）加载，而不是由
    LeviLamina 加载，并使用本部分记录的独立 `pl::` API。

本页面描述 Android 版 LeviLauncher 原生模组的受支持开发路径。公开 SDK 位于
[LiteLDev/preloader-android](https://github.com/LiteLDev/preloader-android)。

独立第三方模组建议从
[Android 模组模板](https://github.com/QYCottage/levilauncher-android-mod-template)
开始。

推荐以 `examples/full-cpp-mod` 作为参考实现。它包含生命周期注册、类型化
配置、Mod Menu 集成、Android 打包和 `.levipack` 输出。

## 构建示例

在仓库根目录运行：

```powershell
.\examples\full-cpp-mod\build.ps1 -Clean
```

这个示例可以在当前仓库直接构建。独立模组工程建议从模板开始，并把 SDK
作为外部依赖引入。

输出：

```text
examples\full-cpp-mod\dist\arm64-v8a\full-cpp-mod\
examples\full-cpp-mod\dist\arm64-v8a\full-cpp-mod.levipack
```

可以导入 `.levipack`，也可以把解包后的模组目录复制到启动器的原生模组位置。

## 包结构

```text
full-cpp-mod/
├── manifest.json
├── libfull_cpp_mod.so
└── config/
    ├── config.json
    └── config.schema.json
```

目录名是运行期模组 id。发布后保持稳定，因为它会用于路径、Mod Menu 归属和用户持久化状态。

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

| 字段 | 说明 |
| --- | --- |
| `type` | 必须是 `preload-native`。 |
| `entry` | 模组目录内 Android `.so` 的相对路径。 |
| `name` | 启动器显示名。 |
| `author` | 作者信息。 |
| `version` | 模组版本。 |
| `icon` | 可选图标相对路径。 |
| `minecraft_versions` | 支持精确版本和 `*` 前缀通配；缺失或为空表示全部版本。 |
| `overwrite_files` | 可选的相对文件列表；重复导入已安装模组时，这些已存在文件允许被替换。缺失或为空时不额外覆盖文件。 |
| `overwrite_folders` | 可选的相对目录列表；重复导入已安装模组时，这些目录内已存在的文件允许被替换。缺失或为空时，除 `manifest.json` 和 `entry` 外不覆盖已有文件。 |

## 生命周期形态

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

`load()` 是必需的。其它生命周期函数可选，缺失时默认成功。

在构造函数中保存 loader 提供的原生模组对象：

```cpp
FullCppMod::FullCppMod() : mSelf(*ll::mod::NativeMod::current()) {}

bool FullCppMod::load() {
  auto &self = getSelf();
  std::filesystem::create_directories(self.getConfigDir());
  self.getLogger().info("Loaded {}", self.getName());
  return true;
}
```

## SDK 依赖

独立 Android 原生模组工程使用 `FetchContent` 引入 `preloader-android`，
并把自己的模组库链接到 `preloader` target：

```cmake
include(FetchContent)

FetchContent_Declare(
    preloader_android
    GIT_REPOSITORY https://github.com/LiteLDev/preloader-android.git
    GIT_TAG 0.2.2)
FetchContent_MakeAvailable(preloader_android)

target_link_libraries(my_mod PRIVATE preloader)
```

实际项目应把 `GIT_TAG` 固定到 release tag，避免构建结果漂移。

常用 SDK 头文件：

```cpp
#include <pl/Mod.hpp>
#include <pl/ModMenu.hpp>
#include <pl/Input.hpp>
#include <pl/Config.hpp>
#include <pl/memory/Hook.hpp>
#include <pl/memory/Patch.hpp>
#include <pl/memory/Signature.hpp>
```

只使用 `include/pl` 下的公开 SDK 头文件。

## 类型化配置

配置应保存在模组自有状态中。生命周期调用期间，`ConfigFile` 默认会使用当前
原生模组的 `config/config.json` 和 `config/config.schema.json` 路径：

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

把 `config.json` 和 `config.schema.json` 随模组一起打包。完整示例的构建脚本会在
生成 `.levipack` 前产出这两个文件。

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

浮动按钮使用 `ButtonBuilder`：

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

要在 HUD 中绘制已注册图片，请先注册原始 RGBA 像素，再提交带
`DrawCommand::imageId` 的 `Image` 绘制命令：

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

如果模块或按钮是临时 UI，请在 `disable()` 中注销。
完整 API 参考见 [Mod Menu API](./api/mod_menu.md)。

## 构建选项

```powershell
.\examples\full-cpp-mod\build.ps1
.\examples\full-cpp-mod\build.ps1 -Clean
.\examples\full-cpp-mod\build.ps1 -Ndk <path-to-android-ndk>
```

省略 `-Ndk` 时，脚本会从 `ANDROID_NDK_HOME`、`ANDROID_NDK_ROOT`、`ANDROID_HOME`
或 `ANDROID_SDK_ROOT` 解析 NDK。

## 检查清单

- 原生模组目标 ABI 为 `arm64-v8a`。
- 链接 `preloader` target，并只使用 `include/pl` 下的公开 SDK 头文件。
- 使用 `PL_REGISTER_MOD` 注册一个长期存活对象。
- 从 `ll::mod::NativeMod::current()` 保存 `ll::mod::NativeMod &mSelf`。
- 注册运行期 UI 前先加载配置。
- hook 和 patch handle 放在模组自有状态中。
- `disable()` 中注销临时 Mod Menu 项。
- callback 在注销或 unload 前必须保持有效。

完整 API 继续阅读 [Mod API 参考](./api/mod.md) 和
[Config API 参考](./api/config.md)。
