# Mod 设置（客户端）

`src-client/ll/api/ui/ModSettings.h` · **仅客户端**

## 概述

Mod 设置模块在原版设置界面中为每个 mod 提供专属设置页。原版设置界面会多出一个 "Mods" 标签页，每个 mod 一个分组，与原版分组（可访问性、键盘和鼠标……）并列展示。

- **不需要资源包或 JSON UI**——设置页完全由游戏自带的 OreUI 设置组件构建，手柄导航、内置标签本地化、UI 缩放全部自动生效。
- 通过 `ll::mod::Mod::getSettings()` 访问；注册调用可链式书写（`addToggle(...).addDropdown(...)`）。
- 条目按注册顺序显示，且可以随时注册——已经打开的设置页会原地刷新。
- 取值持久化到 `<mod 数据目录>/settings.json`，每次变更即写入；变更回调在客户端主线程执行。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/ui/ModSettings.h` | mod 设置页构建器 |
| `ll/api/mod/Mod.h` | `Mod::getSettings()` 访问入口 |

## 条目类型

| 方法 | 控件 | 取值 |
|------|------|------|
| `addToggle(key, displayName, defaultValue, onChange, description)` | 开关 | `bool` |
| `addDropdown(key, displayName, valueNames, defaultIndex, onChange, description)` | 字符串列表下拉框 | `int` 下标 |
| `addButton(key, displayName, buttonLabel, onClick, description)` | 操作按钮 | — |
| `addText(key, displayName, description)` | 静态文本行 | — |
| `addIntSlider(key, displayName, minValue, maxValue, step, defaultValue, onChange, description)` | 带步进刻度的整数滑条 | `int` |
| `addFloatSlider(key, displayName, minValue, maxValue, step, defaultValue, onChange, description)` | 连续滑条 | `float` |
| `addTextInput(key, displayName, defaultValue, placeholder, maxLength, onChange, description)` | OreUI 文本输入框 | `std::string` |
| `addBanner(key, displayName, description)` | 横幅块（`displayName` 为标题，`description` 为正文） | — |
| `addKeybind(key, displayName, action, defaultKey, onChange, description, showReset)` | 可改绑的键位条目 | `int` 键码 |

所有 `onChange` / `onClick` 回调均可选（`addButton` 的 `onClick` 除外），只在需要响应变更时提供；仅读取取值时使用 getter 即可。`description` 是条目下方的灰色小字说明。`key` 在同一个 mod 的页面内必须唯一。

## 示例

```cpp
#include "ll/api/mod/Mod.h"
#include "ll/api/ui/ModSettings.h"

ll::mod::NativeMod& self = /* ... */;

self.getSettings()
    .addToggle("show", "显示叠加层", true, [](bool on) { /* ... */ })
    .addDropdown("mode", "模式", {"模式 A", "模式 B"}, 0, [](int index) { /* ... */ })
    .addFloatSlider("scale", "缩放", 0.5f, 4.0f, 0.1f, 1.0f)
    .addTextInput("name", "自定义名称", "默认", "名称", 32)
    .addKeybind("toggle", "切换叠加层", "key.mymod_toggle", 'M', [](int key) { /* ... */ })
    .addBanner("info", "MyMod", "示例横幅文本。")
    .addButton("refresh", "缓存", "刷新缓存", [] { /* ... */ });
```

## 键位条目

键位条目的行为与原版键位设置页一致：

- `action` 是输入映射的动作名；请加上命名空间（`key.<mod>_<名称>`）以避免与原版或其他 mod 冲突。
- `defaultKey` 使用游戏键码（`'M'` = 77）。鼠标按键为负数：鼠标原始键号 − 100，即 −99 表示左键。
- 条目显示本地化后的键名；点击进入捕获状态（`>_<`）；按 **Esc** 取消指派；绑定了已被其他动作占用的按键时会清掉原绑定（与原版一致）；改动即时作用于游戏操作。
- `showReset = true`（默认）在条目下方附带一个原版样式的"重置"按钮；键值等于默认值时该按钮自动隐藏。
- mod 键位不会出现在原版"键盘和鼠标"页中——只在 Mods 标签页内编辑。
- 改绑结果跨重启持久化。

## 条目状态

任何条目都可以通过状态提供器动态隐藏或禁用：

```cpp
using EntryState = ll::ui::ModSettings::EntryState; // Hidden / Disabled / Enabled

self.getSettings().setEntryStateProvider("name", [](EntryState current) {
    return gFeatureEnabled ? current : EntryState::Hidden;
});
```

- 提供器的入参是游戏本来要用的状态；原样返回即保持默认行为。
- 条目（重）构建时求值；条件变化后调用 `refreshEntry(key)` 让已打开的设置页重新求值（比如在另一个条目的 `onChange` 里）。
- 传入空提供器恢复默认行为。提供器会替换条目已有的状态覆盖。
- `setEntryStateProvider` 对已打开的设置页立即生效；隐藏键位条目时其重置按钮会连带隐藏。

条目的名称和描述也可以用同样的方式动态计算：

```cpp
self.getSettings().setEntryNameProvider("name", []() -> std::optional<std::string> {
    return "数量: " + std::to_string(gCount);
});
self.getSettings().setEntryDescriptionProvider("name", []() -> std::optional<std::string> {
    return std::nullopt; // 保留注册时声明的描述
});
```

- 文本提供器返回要显示的文本，返回 `std::nullopt` 则保留注册时声明的文本。
- 求值规则与状态提供器相同：（重）构建时以及 `refreshEntry(key)` 之后。

## 读取取值

`getToggleValue` / `getDropdownValue` / `getIntSliderValue` / `getFloatSliderValue` / `getTextInputValue` / `getKeybindValue` 返回条目当前取值（首次变更前为默认值），即使设置界面从未打开过也可使用。

```cpp
bool enabled = self.getSettings().getToggleValue("show");
int  key     = self.getSettings().getKeybindValue("toggle");
```

## 行为说明

- 持久化的值在注册时读回；滑条取值越界时会被钳制到声明的范围内。
- 开关、下拉框和滑条由动态分配的游戏 Option 承载；文本输入框和键位分别由 LeviLamina 自有存储与键盘重映射布局承载。
- "Mods" 标签页会注入游戏构建的每一个设置 registry（主菜单与游戏内都一样）；世界进出、界面重建后无需重新注册。

## 平台说明

- 本模块**仅客户端**可用，服务端构建中不存在。
- 注册与 getter 调用均线程安全，但回调始终在客户端主线程执行。

## 相关

- [Mod](mod.zh.md) —— `Mod::getSettings()` 访问入口
- [Input（输入系统）](input.zh.md) —— 用于游戏内按键/鼠标按钮直接注册的 `KeyRegistry`
- [JSON UI](json_ui.zh.md) —— 完全自定义的界面与 HUD 叠加元素
