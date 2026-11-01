# Input (Client)

`ll/api/input/`, `ll/api/event/input/` (`src-client/`) · **Client Only**

## Overview

The Input module provides keyboard and mouse input binding for the client. It allows mods to register custom key bindings with callbacks and handle input events.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/input/KeyRegistry.h` | Singleton registry for key bindings |
| `ll/api/input/KeyHandle.h` | Individual key binding handle |
| `ll/api/event/input/KeyInputEvent.h` | Keyboard input event |
| `ll/api/event/input/MouseInputEvent.h` | Mouse input event |

## Key Classes

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

## Input Events

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

## Usage

### Registering a Key Binding

```cpp
#include "ll/api/input/KeyRegistry.h"

void registerKeys() {
    auto& registry = ll::input::KeyRegistry::getInstance();
    
    // Default binding: the K key; the current mod is the default owner
    auto& myKey = registry.getOrCreateKey("toggle", {'K'});
    
    myKey.registerButtonDownHandler([](FocusImpact, IClientInstance&) {
        // Called when key is pressed
    });
    
    myKey.registerButtonUpHandler([](FocusImpact, IClientInstance&) {
        // Called when key is released
    });
}
```

### Listening to Input Events

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/input/KeyInputEvent.h"

void listenToInput() {
    auto& bus = ll::event::EventBus::getInstance();
    
    bus.emplaceListener<ll::event::KeyInputEvent>(
        [](ll::event::KeyInputEvent& event) {
            if (event.keyCode() == 'E' && event.isDown()) {
                // E key pressed
                event.cancel();  // Prevent default action
            }
        }
    );
}
```

### Mouse Input

```cpp
#include "ll/api/event/EventBus.h"
#include "ll/api/event/input/MouseInputEvent.h"

void listenToMouse() {
    auto& bus = ll::event::EventBus::getInstance();
    
    bus.emplaceListener<ll::event::MouseInputEvent>(
        [](ll::event::MouseInputEvent& event) {
            auto x = event.x();
            auto y = event.y();
            // Handle mouse input
        }
    );
}
```

## Platform Notes

- This module is **client-only** and not available in server builds
- Key codes follow Windows virtual key codes
- Input events can be cancelled to prevent default behavior

## Related

- [Event](event.md) — Input events are part of the event system
