# Input (Client)

`src-client/ll/api/` · **Client Only**

## Overview

The Input module provides keyboard and mouse input binding for the client. It allows mods to register custom key bindings with callbacks and handle input events.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/KeyRegistry.h` | Singleton registry for key bindings |
| `ll/api/KeyHandle.h` | Individual key binding handle |
| `ll/api/event/input/KeyInputEvent.h` | Keyboard input event |
| `ll/api/event/input/MouseInputEvent.h` | Mouse input event |

## Key Classes

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

## Input Events

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

## Usage

### Registering a Key Binding

```cpp
#include "ll/api/KeyRegistry.h"
#include "ll/api/mod/NativeMod.h"

void registerKeys() {
    auto& registry = ll::KeyRegistry::getInstance();
    
    auto& myKey = registry.getOrCreateKey("mymod.toggle", ll::mod::NativeMod::current());
    
    myKey.registerButtonDownHandler([] {
        // Called when key is pressed
    });
    
    myKey.registerButtonUpHandler([] {
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
