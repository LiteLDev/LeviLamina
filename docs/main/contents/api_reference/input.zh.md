# 输入（客户端）

`src-client/ll/api/input/` · **仅客户端**

## 概述

输入模块允许 mod 在客户端注册自定义输入绑定：键盘按键、鼠标按键、鼠标滚轮滚动以及组合键（chord）。每个绑定都会以抽象按钮（`button.<mod>.<kind>.<name>`）的形式暴露给游戏，从而接入原版输入映射、设置界面的按键绑定页以及 JSON UI 屏幕。

所有注册都通过 `ll::input::KeyRegistry` 单例完成，它返回句柄对象（`KeyHandle`、`WheelHandle`、`ChordHandle`）。句柄拥有该绑定：只需配置一次，注册中心会在输入映射重建和客户端实例重建后持续保持其生效。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/input/KeyRegistry.h` | 所有输入绑定的单例注册中心 |
| `ll/api/input/KeyHandle.h` | 键盘按键绑定 |
| `ll/api/input/WheelHandle.h` | 鼠标滚轮方向绑定 |
| `ll/api/input/ChordHandle.h` | 组合键（修饰键 + 触发键） |
| `ll/api/event/input/KeyInputEvent.h` | 键盘输入事件 |
| `ll/api/event/input/MouseInputEvent.h` | 鼠标输入事件 |

## 概念

### 抽象按钮

每个句柄都会注册为一个抽象按钮，名为 `button.<mod>.<kind>.<name>`（例如 `button.MyMod.key.open`）。`HandleBase::getFullName()` 返回 `button.` 之后的部分。JSON UI 的 `button_mappings` 和组合键的源按钮列表引用的就是这个按钮名。

### 输入映射栈

客户端会根据上下文切换输入映射栈：游玩时激活 `gamePlay***` 映射，打开屏幕时激活 `screen` 映射，等等。每个句柄有一个**映射切换提供器**——一个 `std::function<bool(std::string_view)>`，决定该绑定加入哪些栈。默认接受所有名称以 `gamePlay` 开头的映射，因此绑定在菜单打开时不生效，与原版对背包键等按键的门控方式一致。

对于需要在屏幕内使用的按钮，使用 `[](std::string_view mapping) { return mapping == "screen"; }`。

### allowRemap（仅 KeyHandle）

`allowRemap = true`（默认）时，绑定会出现在原版设置的按键绑定页中，玩家可以自行改键；玩家的选择由游戏保存并在运行时覆盖默认绑定，而 `getKeyCodes()` 始终返回 mod 配置的键码。为 `false` 时绑定固定，且不出现在设置页中。

### suspendable

游戏可以挂起输入（例如在显示某些屏幕时）。每个Handler都会被注册两次——一次可挂起、一次不可挂起——注册Handler时传入的 `suspendable` 标志决定哪一份生效：

- `suspendable = false`（默认）：即使输入被挂起，Handler仍会触发。
- `suspendable = true`：输入被挂起期间Handler被抑制。

### 菜单按钮通道

`setMenuButtonEnabled(true)` 会额外把抽象按钮分发到 UI 场景栈，JSON UI 屏幕因此可以通过 `button_mappings` 消费它（与原版 `button.menu_ok` 同一机制）。自定义屏幕无需 C++ Handler即可响应按键与滚轮。

## KeyRegistry

```cpp
namespace ll::input {
class KeyRegistry {
public:
    static KeyRegistry& getInstance();

    KeyHandle& getOrCreateKey(
        std::string_view                      name,
        std::vector<int>                      defaultKeyCodes,
        bool                                  allowRemap = true,
        std::function<bool(std::string_view)> mappingSwitchProvider = /* gamePlay* */,
        FocusImpact                           focusImpact = FocusImpact::Neutral,
        std::weak_ptr<mod::Mod>               mod = mod::NativeMod::current()
    );

    WheelHandle& getOrCreateWheel(
        std::string_view                      name,
        bool                                  isDown,
        std::function<bool(std::string_view)> mappingSwitchProvider = /* gamePlay* */,
        std::weak_ptr<mod::Mod>               mod = mod::NativeMod::current()
    );

    ChordHandle& getOrCreateChord(
        std::string_view                      name,
        std::string                           triggerButtonName,
        std::vector<std::string>              modifierButtonNames,
        float                                 minHoldTime,
        std::function<bool(std::string_view)> mappingSwitchProvider = /* gamePlay* */,
        std::weak_ptr<mod::Mod>               mod = mod::NativeMod::current()
    );

    bool hasKey(std::string_view name, std::weak_ptr<mod::Mod> const& mod = mod::NativeMod::current());
    bool hasWheel(std::string_view name, std::weak_ptr<mod::Mod> const& mod = mod::NativeMod::current());
    bool hasChord(std::string_view name, std::weak_ptr<mod::Mod> const& mod = mod::NativeMod::current());

    std::vector<std::string> getRegisteredKeys() const;
    std::vector<std::string> getRegisteredWheels() const;
    std::vector<std::string> getRegisteredChords() const;
};
}
```

`getOrCreate*` 是幂等的：以已存在的名称调用会返回已有句柄。句柄由注册中心持有——不要删除它们。mod 被禁用时，其所有句柄会自动失效。

## 通用句柄 API（HandleBase）

```cpp
class HandleBase {
public:
    std::string const& getName() const;
    std::string        getFullName() const;   // "<mod>.<kind>.<name>"

    void setInputMappingStack(std::function<bool(std::string_view)> provider);
    bool containsInputMappingStack(std::string_view stack) const;

    void setMenuButtonEnabled(bool enable, bool suspendable = false);
    bool isMenuButtonEnabled() const;
    void setMenuButtonSuspendable(bool suspendable);

    bool isValid() const;   // 所属 mod 被禁用后为 false
    void enable();
    void disable();
};
```

## KeyHandle

```cpp
class KeyHandle : public HandleBase {
public:
    using ButtonDownHandler = std::function<void(FocusImpact, IClientInstance&)>;
    using ButtonUpHandler   = std::function<void(FocusImpact, IClientInstance&)>;

    std::vector<int> getKeyCodes() const;
    void setKeyCodes(std::vector<int> keyCodes);          // 修改默认绑定
    void remapKeyCodes(std::vector<int> const& keyCodes); // 等同于玩家在设置中改键
    void resetKeyCodes();                                 // 恢复为默认绑定

    bool isAllowRemap() const;
    void setAllowRemap(bool allowRemap);

    FocusImpact getFocusImpact() const;
    void setFocusImpact(FocusImpact focusImpact);

    void setButtonDownHandler(ButtonDownHandler handler, bool suspendable = false);
    void removeButtonDownHandler();
    bool getButtonDownHandlerSuspendable() const;
    void setButtonDownHandlerSuspendable(bool suspendable);

    void setButtonUpHandler(ButtonUpHandler handler, bool suspendable = false);
    void removeButtonUpHandler();
    bool getButtonUpHandlerSuspendable() const;
    void setButtonUpHandlerSuspendable(bool suspendable);
};
```

键码使用 Windows 虚拟键码；鼠标按键使用负值（与原版约定一致）。

## WheelHandle

```cpp
class WheelHandle : public HandleBase {
public:
    using ScrollHandler = std::function<void(FocusImpact, IClientInstance&)>;

    bool isDown() const;  // false = 向上滚，true = 向下滚

    void setScrollHandler(ScrollHandler handler, bool suspendable = false);
    void removeScrollHandler();
    bool getScrollHandlerSuspendable() const;
    void setScrollHandlerSuspendable(bool suspendable);
};
```

每滚动一格产生一对按下+抬起事件：菜单按钮通道会收到两个边沿，滚动Handler在每格的抬起边沿执行一次。

## ChordHandle

```cpp
class ChordHandle : public HandleBase {
public:
    using ButtonDownHandler = std::function<void(FocusImpact, IClientInstance&)>;
    using ButtonUpHandler   = std::function<void(FocusImpact, IClientInstance&)>;

    std::string getTriggerButtonName() const;
    void        setTriggerButtonName(std::string triggerButtonName);

    std::vector<std::string> getModifierButtonNames() const;
    void                     setModifierButtonNames(std::vector<std::string> modifierButtonNames);

    float getMinHoldTime() const;   // 全部按键需按住多少秒后才触发
    void  setMinHoldTime(float minHoldTime);

    void setButtonDownHandler(ButtonDownHandler handler, bool suspendable = false);
    void removeButtonDownHandler();
    void setButtonUpHandler(ButtonUpHandler handler, bool suspendable = false);
    void removeButtonUpHandler();
    // …以及两个Handler各自的 suspendable 访问器
};
```

组合键引用的是其他抽象按钮，而不是原始键码。原版组合键是**有序序列**：必须先按下修饰按钮、再按下触发按钮；在组合键完成期间，触发键自身的普通按下会被抑制。`triggerButtonName` 是序列中最后按下的键，`modifierButtonNames` 是之前按下的键——例如触发键 `button.MyMod.key.open` 加修饰键 `{"button.control"}` 即为 Ctrl+Open。

## 用法

### 游戏内快捷键

```cpp
#include "ll/api/input/KeyRegistry.h"

void registerKeys() {
    auto& key = ll::input::KeyRegistry::getInstance().getOrCreateKey("open", {'M'});
    key.setButtonDownHandler([](::FocusImpact, ::IClientInstance&) {
        // 打开 mod 的界面
    });
}
```

该键会出现在设置页中（`allowRemap` 默认为 `true`），且仅在游玩时触发。

### 自定义 JSON UI 屏幕的按钮

```cpp
auto  registry      = &ll::input::KeyRegistry::getInstance();
auto  screenMapping = [](std::string_view mapping) { return mapping == "screen"; };

registry->getOrCreateWheel("scroll_up", false, screenMapping).setMenuButtonEnabled(true);
registry->getOrCreateWheel("scroll_down", true, screenMapping).setMenuButtonEnabled(true);
registry->getOrCreateKey("zoom_in", {VK_OEM_PLUS}, false, screenMapping).setMenuButtonEnabled(true);
```

```jsonc
// ui/my_screen.json
"button_mappings": [
    { "from_button_id": "button.MyMod.wheel.scroll_up", "to_button_id": "button.my_zoom_in", "mapping_type": "global" }
]
```

### 组合键

```cpp
registry->getOrCreateChord("minimap_toggle", "button.MyMod.key.open", {"button.control"}, 0.0f)
    .setButtonDownHandler([](::FocusImpact, ::IClientInstance&) {
        // 按下了 Ctrl+Open
    });
```

## 输入事件

如果需要原始输入而不是抽象按钮，可以使用事件总线：

### KeyInputEvent

```cpp
namespace ll::event {
class KeyInputEvent : public Cancellable<InputEvent> {
public:
    HIDController& controller() const;
    int&           keyCode() const;
    Action         action() const;
    bool           isDown() const;
};
}
```

### MouseInputEvent

```cpp
namespace ll::event {
class MouseInputEvent : public Cancellable<InputEvent> {
public:
    char&  actionButtonId() const;
    schar& buttonData() const;
    short& x() const;
    short& y() const;
    short& dx() const;
    short& dy() const;
};
}
```

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/input/KeyInputEvent.h"

void listenToInput() {
    ll::event::EventBus::getInstance().emplaceListener<ll::event::KeyInputEvent>(
        [](ll::event::KeyInputEvent& event) {
            if (event.keyCode() == 'E' && event.isDown()) {
                event.cancel(); // 阻止默认行为
            }
        }
    );
}
```

## 平台说明

- 本模块**仅客户端**可用，服务器构建中不可用。
- 键码遵循 Windows 虚拟键码。
- 输入事件可以取消，以阻止默认行为。

## 相关

- [事件](event.zh.md) —— 输入事件是事件系统的一部分
- [数据驱动 UI](data_driven_ui.zh.md) —— 在 JSON UI 屏幕中消费菜单按钮
