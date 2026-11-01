# Input（输入系统 · 客户端）

`ll/api/input/`、`ll/api/event/input/`（`src-client/`）· **仅客户端**

## 概述

Input 模块为客户端提供键盘和鼠标输入绑定。允许模组注册自定义按键绑定及回调，并处理输入事件。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/input/KeyRegistry.h` | 按键绑定注册表单例 |
| `ll/api/input/KeyHandle.h` | 单个按键绑定句柄 |
| `ll/api/event/input/KeyInputEvent.h` | 键盘输入事件 |
| `ll/api/event/input/MouseInputEvent.h` | 鼠标输入事件 |

## 核心类

### KeyRegistry

```cpp
namespace ll::input {
class KeyRegistry {
public:
    using ButtonDownHandler = KeyHandle::ButtonDownHandler;
    using ButtonUpHandler   = KeyHandle::ButtonUpHandler;

    static KeyRegistry& getInstance();

    KeyHandle& getOrCreateKey(
        std::string_view        name,
        std::vector<int> const& defaultKeyCodes,
        bool                    allowRemap = true,
        std::weak_ptr<mod::Mod> mod        = mod::NativeMod::current()
    );
    bool hasKey(std::string_view name);
    std::vector<std::string> getRegisteredKeys() const;
};
}
```

### KeyHandle

```cpp
namespace ll::input {
class KeyHandle {
public:
    using ButtonDownHandler = std::function<void(::FocusImpact, ::IClientInstance&)>;
    using ButtonUpHandler   = std::function<void(::FocusImpact, ::IClientInstance&)>;

    std::string const& getName() const;
    std::shared_ptr<mod::Mod> getMod() const;
    std::string getFullName() const;
    std::vector<int> const& getKeyCodes() const;
    bool isValid() const;

    bool isAllowRemap() const;
    void setAllowRemap(bool allowRemap);
    void registerButtonDownHandler(ButtonDownHandler handler, bool suspendable = false);
    void registerButtonUpHandler(ButtonUpHandler handler, bool suspendable = false);
    void setInputMappingStack(std::vector<std::string> stacks);
    bool containsInputMappingStack(std::string_view stack) const;
};
}
```

## 输入事件

### KeyInputEvent

```cpp
namespace ll::event::inline input {
class KeyInputEvent final : public Cancellable<InputEvent> {
public:
    enum class Action : int { Up = 0, Down = 1 };

    HIDController& controller() const;
    int&           keyCode() const;
    Action         action() const;
    bool           isDown() const;
};
}
```

### MouseInputEvent

```cpp
namespace ll::event::inline input {
class MouseInputEvent final : public Cancellable<InputEvent> {
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

## 使用方法

### 注册按键绑定

```cpp
#include "ll/api/input/KeyRegistry.h"

void registerKeys() {
    auto& registry = ll::input::KeyRegistry::getInstance();
    
    // 默认绑定 K 键；所属模组默认为当前模组
    auto& myKey = registry.getOrCreateKey("toggle", {'K'});
    
    myKey.registerButtonDownHandler([](FocusImpact, IClientInstance&) {
        // 按键按下时调用
    });
    
    myKey.registerButtonUpHandler([](FocusImpact, IClientInstance&) {
        // 按键释放时调用
    });
}
```

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
                event.cancel();  // 阻止默认行为
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

- 此模块**仅限客户端**，在服务端构建中不可用
- 按键代码遵循 Windows 虚拟键代码
- 输入事件可以被取消以阻止默认行为

## 相关模块

- [Event（事件系统）](event.zh.md) — 输入事件是事件系统的一部分
