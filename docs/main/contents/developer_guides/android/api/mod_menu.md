# Mod Menu API

## Purpose

The Mod Menu API registers runtime UI owned by native mods: menu modules,
configuration entries, floating buttons, and HUD overlay draw commands.

Use it from lifecycle methods such as `enable()` and clean up temporary entries
from `disable()` when the UI should not survive the enabled state.

## Header

```cpp
#include <pl/ModMenu.hpp>
```

## Module Registration

Use `pl::modmenu::ModuleBuilder` or fill `pl::modmenu::ModuleInfo` directly.

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

Configuration entry kinds:

| Type | Purpose |
| --- | --- |
| `ConfigType::Toggle` | Boolean on/off value. |
| `ConfigType::SliderInt` | Integer slider. |
| `ConfigType::SliderFloat` | Floating-point slider. |
| `ConfigType::Radio` | One-of-many string value. |
| `ConfigType::Color` | Color value. |

## Floating Buttons

Use `pl::modmenu::ButtonBuilder` for on-screen buttons. Buttons may dispatch
click, hold, toggle, and pointer events to a C++ callback.

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

Button icons can be supplied as PNG, WebP, or SVG data through
`ButtonBuilder::pngIcon()`, `webpIcon()`, `svgIcon()`, or the generic
`icon()` helper.

## Overlay Drawing

Use `pl::modmenu::submitDrawCommands()` to replace a module's current HUD
overlay commands. Text commands can use a font registered with
`registerFont()`, while image commands use raw RGBA pixels registered with
`registerImage()`.

| API | Purpose |
| --- | --- |
| `registerFont(fontId, ttfData)` | Registers a TrueType font for text commands. |
| `registerImage(imageId, imageData, width, height)` | Registers raw RGBA image pixels for image commands. |
| `submitDrawCommands(moduleId, commands)` | Replaces the module's current overlay draw command list. |

`registerImage()` expects `imageData.size()` to be exactly
`width * height * 4`. For `DrawCommandType::Text`, set `DrawCommand::fontId`
to the registered font id. For `DrawCommandType::Image`, set
`DrawCommand::imageId` to the registered image id.

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

## Cleanup

Call `pl::modmenu::unregisterModule()` and `unregisterButton()` during
`disable()` when the registered UI is temporary or tied to the enabled state.
Registered modules and buttons are also associated with `modId` ownership when
they are registered from a native mod lifecycle.
