# Mod Menu API

## 作用

Mod Menu API 用于注册原生模组拥有的运行期 UI：菜单模块、配置项、浮动按钮
和 HUD 覆盖层绘制命令。

通常在 `enable()` 中注册；如果这些 UI 只应该在启用状态存在，请在 `disable()`
中清理。

## 头文件

```cpp
#include <pl/ModMenu.hpp>
```

## 模块注册

可以使用 `pl::modmenu::ModuleBuilder`，也可以直接填充
`pl::modmenu::ModuleInfo`。

```cpp
#include <pl/Mod.hpp>
#include <pl/ModMenu.hpp>

namespace {
constexpr const char *ModuleId = "example.speed_meter";

void onToggle(std::string_view moduleId, bool enabled) {
  (void)moduleId;
  (void)enabled;
}
} // namespace

bool MyMod::enable() {
  return pl::modmenu::ModuleBuilder(ModuleId, "Speed Meter")
      .modId(getSelf().getId())
      .description("Shows a small movement speed overlay.")
      .defaultEnabled(true)
      .onToggle(onToggle)
      .config("refreshRate", "Refresh Rate",
              pl::modmenu::ConfigType::SliderInt, "20", "1", "60")
      .registerModule();
}
```

配置项类型：

| 类型 | 用途 |
| --- | --- |
| `ConfigType::Toggle` | 布尔开关。 |
| `ConfigType::SliderInt` | 整数滑块。 |
| `ConfigType::SliderFloat` | 浮点数滑块。 |
| `ConfigType::Radio` | 多选一字符串值。 |
| `ConfigType::Color` | 颜色值。 |

## 浮动按钮

使用 `pl::modmenu::ButtonBuilder` 注册屏幕浮动按钮。按钮可以把 click、hold、
toggle 和指针事件派发到 C++ callback。

```cpp
bool registerQuickButton() {
  return pl::modmenu::ButtonBuilder("example.quick_drop", "Quick Drop")
      .modId(getSelf().getId())
      .moduleId(ModuleId)
      .label("Drop")
      .androidKeyCode(0)
      .behavior(pl::modmenu::ButtonBehavior::Click)
      .onEvent([](std::string_view buttonId,
                  pl::modmenu::ButtonEvent event, float value) {
        (void)buttonId;
        (void)event;
        (void)value;
      })
      .registerButton();
}
```

按钮图标可以通过 `ButtonBuilder::pngIcon()`、`webpIcon()`、`svgIcon()` 或通用
`icon()` helper 传入 PNG、WebP 或 SVG 数据。

## 覆盖层绘制

使用 `pl::modmenu::submitDrawCommands()` 替换某个模块当前的 HUD 覆盖层绘制
命令。文本命令可以使用 `registerFont()` 注册的字体；图片命令使用
`registerImage()` 注册的原始 RGBA 像素。

| API | 用途 |
| --- | --- |
| `registerFont(fontId, ttfData)` | 为文本命令注册 TrueType 字体。 |
| `registerImage(imageId, imageData, width, height)` | 为图片命令注册原始 RGBA 图片像素。 |
| `submitDrawCommands(moduleId, commands)` | 替换模块当前的覆盖层绘制命令列表。 |

`registerImage()` 要求 `imageData.size()` 必须等于 `width * height * 4`。
对 `DrawCommandType::Text`，请把 `DrawCommand::fontId` 设置为已注册的 font id。
对 `DrawCommandType::Image`，请把 `DrawCommand::imageId` 设置为已注册的 image id。

```cpp
std::vector<unsigned char> logoRgba = loadLogoPixels();
const int logoWidth = 64;
const int logoHeight = 64;

bool MyMod::enable() {
  if (!pl::modmenu::registerImage("example.logo", logoRgba,
                                  logoWidth, logoHeight)) {
    return false;
  }

  return pl::modmenu::ModuleBuilder(ModuleId, "Speed Meter")
      .modId(getSelf().getId())
      .defaultEnabled(true)
      .registerModule();
}

void submitOverlay() {
  const std::vector<pl::modmenu::DrawCommand> commands = {
      {
          .type = pl::modmenu::DrawCommandType::Image,
          .x = 12.0f,
          .y = 12.0f,
          .w = 32.0f,
          .h = 32.0f,
          .imageId = "example.logo",
      },
  };
  pl::modmenu::submitDrawCommands(ModuleId, commands);
}
```

## 清理

如果注册的 UI 是临时的，或只应该绑定到启用状态，请在 `disable()` 中调用
`pl::modmenu::unregisterModule()` 和 `unregisterButton()`。从原生模组生命周期
中注册的模块和按钮也会关联 `modId` 归属。
