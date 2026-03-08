# Input（输入系统）

`src-client/ll/api/` · **仅客户端**

## 概述

Input 模块为客户端提供键盘和鼠标输入绑定。允许模组注册自定义按键绑定及回调，并处理输入事件。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/KeyRegistry.h` | 按键绑定注册表单例 |
| `ll/api/KeyHandle.h` | 单个按键绑定句柄 |
| `ll/api/event/input/KeyInputEvent.h` | 键盘输入事件 |
| `ll/api/event/input/MouseInputEvent.h` | 鼠标输入事件 |

## 核心类

### KeyRegistry

```cpp
namespace ll {
class KeyRegistry {
public:
    static KeyRegistry& getInstance();
    
    KeyHandle& getOrCreateKey(std::string const& name, std::weak_ptr<mod::Mod> mod);
    bool hasKey(std::string const& name) const;
    std::vector<std::string> getRegisteredKeys() const;
    
    void triggerKeyDownCallback(std::string const& name);
    void triggerKeyUpCallback(std::string const& name);
};
}
```

### KeyHandle

```cpp
namespace ll {
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
#include "ll/api/KeyRegistry.h"
#include "ll/api/mod/NativeMod.h"

void registerKeys() {
    auto& registry = ll::KeyRegistry::getInstance();
    
    auto& myKey = registry.getOrCreateKey("mymod.toggle", ll::mod::NativeMod::current());
    
    myKey.registerButtonDownHandler([] {
        // 按键按下时调用
    });
    
    myKey.registerButtonUpHandler([] {
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
