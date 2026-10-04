# Input（输入系统）

`src-client/ll/api/input/` · **仅客户端**

## 概述

Input 模块覆盖客户端的键盘与鼠标输入：

- 注册自定义按键绑定及回调（`KeyRegistry` / `KeyHandle`）；
- 注册在 gameplay 上下文触发的抽象按钮（`KeyRegistry::registerGameplayKeyboardButton` / `registerInputMappingsKeyboardButton`）；
- 注册可供 JSON UI 界面使用的抽象按钮（`ScreenButtonRegistry`）；
- 原始键盘/鼠标事件（`KeyInputEvent` / `MouseInputEvent`）。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/input/KeyRegistry.h` | 按键绑定与 gameplay 上下文抽象按钮的注册表单例 |
| `ll/api/input/KeyHandle.h` | 单个按键绑定句柄 |
| `ll/api/input/ScreenButtonRegistry.h` | 供 JSON UI `button_mappings` 使用的界面上下文抽象按钮 |
| `ll/api/event/input/KeyInputEvent.h` | 键盘输入事件 |
| `ll/api/event/input/MouseInputEvent.h` | 鼠标输入事件 |

## 输入映射（Input Mappings）

游戏按**输入映射栈**派发按键绑定。任意时刻只有一个映射栈激活：游戏过程中是 `gamePlay*` 系，界面打开时是 `screen*` 系。这就是"菜单打开时 gameplay 按键自然失效"的原生门控（例如聊天栏打开时按 E 不会打开背包）。

gameplay 系内部又按玩家状态细分，按键事件只在当前状态对应的映射激活时产生：

| 映射名 | 玩家状态 |
|--------|----------|
| `gamePlayNormal` | 默认状态——走路/奔跑/跳跃、**鞘翅滑翔**，以及一切不匹配下列状态的情况 |
| `gamePlayFlying` | 创造模式飞行（abilities 飞行位；鞘翅滑翔**不**置此位） |
| `gamePlaySwimming` | 游泳中 |
| `gamePlayInWater` | 在水中但未进入游泳状态（站立/漂浮触水） |
| `gamePlayInScaffolding` | 在脚手架等可攀爬方块内 |
| `gamePlaySpectatorModeName` | 旁观者模式（优先级最高，覆盖以上所有状态） |
| `gamePlayBoating` / `gamePlayRiding` / `gamePlayMinecart` | 乘船 / 骑乘实体 / 乘矿车（由骑乘事件驱动，非逐帧评估） |
| `gamePlayEmote` | 表情轮盘打开期间 |

screen 系由当前界面决定，与玩家状态无关：

| 映射名 | 场景 |
|--------|------|
| `screen` | 普通 UI 界面（背包、暂停菜单、自定义界面等） |
| `screenDeath` | 死亡界面 |
| `screenBed` | 床/睡觉界面 |
| `screenGazeController` | 注视点控制器激活时 |
| `screenEditor` | 仅编辑器模式 |

由于激活的 gameplay 映射随玩家状态切换，自定义 gameplay 按钮必须注册进**所有** `gamePlay*` 映射才能全状态可用——`registerGameplayKeyboardButton` 正是按 `gamePlay` 前缀匹配注入；`registerInputMappingsKeyboardButton` 则注册到显式指定的映射名列表。

`keyCode` 为虚拟键码；负值表示鼠标键，存储格式与重映射布局一致（原始鼠标按键号 - 100，例如左键为 -99），会按原版逻辑路由进鼠标输入映射。

## 原版 `button_mappings`

JSON UI 把一个物理/抽象输入按钮（`from_button_id`，如鼠标左键 `button.menu_select`、Esc `button.menu_cancel`）转换成**命名按钮事件**（`to_button_id`），派发给控件组件与界面控制器。mod 通过同一机制把自定义输入喂给自己的界面。

一条映射的形式：

```json
{
    "from_button_id": "button.menu_tab_right",
    "to_button_id":   "button.mymod_zoom_in",
    "mapping_type":   "global"
}
```

| 键 | 默认值 | 作用 |
|----|--------|------|
| `from_button_id` | 必填 | 源按钮：原版抽象按钮，或经 `ScreenButtonRegistry` 注册的自定义按钮 |
| `to_button_id` | 必填 | 目标命名按钮，随按钮事件派发给界面；由 `JsonScreen::onButtonEvent` 消费 |
| `mapping_type` | `"global"` | `"global"`（无条件触发）、`"pressed"`（带悬停/作用域检查，且派发抬起事件——拖拽跟踪的基础）、`"focused"`（仅控件持焦点时）、`"double_pressed"`（双击） |
| `scope` | `"controller"` | 事件去向：`"controller"`（界面控制器逻辑）、`"view"`（控件树可视反馈）、`"global"`（两者） |
| `consume_event` | `true` | 转换后是否消费原始按钮事件 |
| `button_up_right_of_first_refusal` | `false` | 指针拖出控件范围后仍能收到按钮抬起事件（拖拽手势必需） |
| `input_mode_condition` | 无 | `"gamepad"` / `"not_gamepad"` 设备过滤 |
| `handle_select` / `handle_deselect` | `false` | 控件获得/失去焦点时也触发该映射的按钮事件 |
| `ignore_input_scope` | `false` | 跳过悬停/作用域检查——控件处于可交互状态即触发（原版用于滑块的方向键微调） |
| `alternate_input_scope` | `false` | 用"内容面板悬停"替代常规作用域检查 |

常用原版 `from_button_id`：`button.menu_select`（鼠标左键/手柄 A）、`button.menu_secondary_select`（鼠标右键）、`button.menu_ok`（回车）、`button.menu_cancel`（Esc/手柄 B）、`button.menu_up/down/left/right`（方向键/十字键）、`button.menu_tab_left/right`（LB/RB、PageUp/PageDown）、`button.menu_exit`（界面退出）。

两条值得注意的行为约束：

- **命名按钮事件只在按下边沿派发一次，键盘不重复派发**。原版菜单的"按住方向键连续滚动"由焦点/滚动组件内部状态机完成，不经过按钮事件；需要"按住持续移动"的 mod 须自行轮询按键状态。手柄摇杆的持续方向走另一通道（`ControllerDirectionEvent`），不是按钮事件。
- gameplay 状态判定有优先级：旁观者覆盖一切；载具映射（船/骑乘/矿车）由骑乘事件切换而非逐帧评估；创造飞行（`gamePlayFlying`）与鞘翅滑翔（`gamePlayNormal`）是两个不同状态。

## 核心类

### KeyRegistry

```cpp
namespace ll::input {
class KeyRegistry {
public:
    static KeyRegistry& getInstance();

    KeyHandle& getOrCreateKey(
        std::string_view        name,
        std::vector<int> const& defaultKeyCodes,
        bool                    allowRemap = true,
        std::weak_ptr<mod::Mod> mod        = mod::NativeMod::current()
    );
    bool                     hasKey(std::string_view name);
    std::vector<std::string> getRegisteredKeys() const;

    // 注册在全部 gameplay 状态（所有 gamePlay* 映射）下触发的抽象按钮；
    // 菜单打开时不激活——与原版按键绑定的门控方式一致。
    bool registerGameplayKeyboardButton(
        std::string       buttonName,
        int               keyCode,
        ButtonDownHandler handler,
        FocusImpact       focusImpact = FocusImpact::Neutral
    );

    // 同上，但只注册到显式指定的输入映射。
    bool registerInputMappingsKeyboardButton(
        std::string              buttonName,
        int                      keyCode,
        std::vector<std::string> mappingNames,
        ButtonDownHandler        handler,
        FocusImpact              focusImpact = FocusImpact::Neutral
    );

    bool unregisterMappingKeyboardButton(std::string_view buttonName);
};
}
```

### KeyHandle

```cpp
namespace ll::input {
class KeyHandle {
public:
    std::string const& getName() const;
    std::weak_ptr<mod::Mod> getMod() const;
    std::vector<int> getKeyCodes() const;

    KeyHandle& setAllowRemap(bool allow);
    KeyHandle& registerButtonDownHandler(std::function<void()> callback);
    KeyHandle& registerButtonUpHandler(std::function<void()> callback);
};
}
```

### ScreenButtonRegistry

注册由物理输入产生、在 UI 界面激活期间触发的自定义抽象按钮，使其可用作 JSON UI `button_mappings` 的 `from_button_id`——原版界面按钮（`button.menu_ok`、滚轮驱动的 `button.inventory_left/right`）走的正是同一机制。

```cpp
namespace ll::input {
class ScreenButtonRegistry {
public:
    static ScreenButtonRegistry& getInstance();

    bool registerKeyboardButton(
        std::string buttonName,
        int         keyCode,
        FocusImpact focusImpact = FocusImpact::Neutral
    );
    bool unregisterKeyboardButton(std::string_view buttonName);

    bool registerMouseWheelButton(std::string wheelUpButtonName, std::string wheelDownButtonName);
    bool unregisterMouseWheelButton(std::string_view wheelUpButtonName, std::string_view wheelDownButtonName);
};
}
```

## 输入事件

### KeyInputEvent

```cpp
namespace ll::event {
class KeyInputEvent : public Cancellable<InputEvent> {
public:
    ClientInstance& controller() const;
    int keyCode() const;
    int action() const;
    bool isDown() const;
};
}
```

### MouseInputEvent

```cpp
namespace ll::event {
class MouseInputEvent : public Cancellable<InputEvent> {
public:
    int actionButtonId() const;
    int buttonData() const;
    float x() const;
    float y() const;
    float dx() const;
    float dy() const;
};
}
```

## 使用方法

### 注册按键绑定

```cpp
#include "ll/api/input/KeyRegistry.h"
#include "ll/api/mod/NativeMod.h"

void registerKeys() {
    auto& registry = ll::input::KeyRegistry::getInstance();

    auto& myKey = registry.getOrCreateKey("mymod.toggle", {'G'}); // Windows 虚拟键码

    myKey.registerButtonDownHandler([] {
        // 按键按下时调用
    });
    myKey.registerButtonUpHandler([] {
        // 按键释放时调用
    });
}
```

### 注册 gameplay 按钮（如"按 M 打开界面"）

handler 在按钮按下时直接回调，全 gameplay 状态有效，菜单打开时自动失效：

```cpp
ll::input::KeyRegistry::getInstance().registerGameplayKeyboardButton(
    "button.mymod_open",
    'M',
    [](FocusImpact, IClientInstance&) {
        // 打开界面……
    }
);
```

需要限定状态时改用 `registerInputMappingsKeyboardButton`：

```cpp
registry.registerInputMappingsKeyboardButton(
    "button.mymod_open",
    'M',
    {"gamePlayNormal", "gamePlayFlying"}, // 游泳、乘船等状态下不触发
    [](FocusImpact, IClientInstance&) { /* ... */ }
);
```

### 注册供 JSON UI 使用的界面按钮

C++ 侧注册抽象按钮，再在界面 JSON 的 `button_mappings` 里引用：

```cpp
auto& buttons = ll::input::ScreenButtonRegistry::getInstance();
buttons.registerKeyboardButton("button.mymod_zoom_in", VK_OEM_PLUS);
buttons.registerMouseWheelButton("button.mymod_scroll_up", "button.mymod_scroll_down");
```

```json
"button_mappings": [
    { "from_button_id": "button.mymod_scroll_up", "to_button_id": "button.mymod_zoom_in", "mapping_type": "global" },
    { "from_button_id": "button.mymod_zoom_in",   "to_button_id": "button.mymod_zoom_in", "mapping_type": "global" }
]
```

`to_button_id` 事件会送达界面控制器——使用 `ll::ui::JsonScreen` 时由 `onButtonEvent()` 接收（见 [JSON UI](json_ui.zh.md)）。

### 监听输入事件

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/input/KeyInputEvent.h"

void listenToInput() {
    auto& bus = ll::event::EventBus::getInstance();

    bus.emplaceListener<ll::event::KeyInputEvent>(
        [](ll::event::KeyInputEvent& event) {
            if (event.keyCode() == 'E' && event.isDown()) {
                // E 键按下
                event.cancel(); // 阻止默认行为
            }
        }
    );
}
```

### 鼠标输入

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/input/MouseInputEvent.h"

void listenToMouse() {
    auto& bus = ll::event::EventBus::getInstance();

    bus.emplaceListener<ll::event::MouseInputEvent>(
        [](ll::event::MouseInputEvent& event) {
            auto x = event.x();
            auto y = event.y();
            // 处理鼠标输入
        }
    );
}
```

## 平台说明

- 此模块**仅限客户端**，在服务端构建中不可用；
- 按键代码遵循 Windows 虚拟键码；
- 输入事件可以被取消以阻止默认行为；
- 已注册的按钮会在游戏重建输入映射时自动重新注入；`unregister*` 在下一次重建时生效。

## 相关模块

- [Event（事件系统）](event.zh.md) — 输入事件是事件系统的一部分
- [JSON UI](json_ui.zh.md) — 在自定义界面中消费注册的按钮
