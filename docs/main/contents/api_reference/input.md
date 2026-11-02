# Input (Client)

`src-client/ll/api/input/` · **Client Only**

## Overview

The Input module lets mods register custom input bindings on the client: keyboard keys, mouse keys, mouse wheel scrolling, and key combinations (chords). Each binding is exposed to the game as an abstract button (`button.<mod>.<kind>.<name>`), so it integrates with vanilla input mappings, the controls settings page, and JSON UI screens.

All registrations go through the `ll::input::KeyRegistry` singleton, which returns handle objects (`KeyHandle`, `WheelHandle`, `ChordHandle`). The handle owns the binding: configure it once, and the registry keeps it applied across input mapping rebuilds and client instance restarts.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/input/KeyRegistry.h` | Singleton registry for all input bindings |
| `ll/api/input/KeyHandle.h` | Keyboard key binding |
| `ll/api/input/WheelHandle.h` | Mouse wheel direction binding |
| `ll/api/input/ChordHandle.h` | Key combination (modifier keys + trigger key) |
| `ll/api/event/input/KeyInputEvent.h` | Keyboard input event |
| `ll/api/event/input/MouseInputEvent.h` | Mouse input event |

## Concepts

### Abstract buttons

Every handle is registered as an abstract button named `button.<mod>.<kind>.<name>` (e.g. `button.MyMod.key.open`). `HandleBase::getFullName()` returns the part after `button.`. The button name is what JSON UI `button_mappings` and chord source lists reference.

### Input mapping stacks

The client switches between input mapping stacks depending on context: `gamePlay***` mappings are active while playing, `screen` mappings while a screen is open, and so on. Each handle has a **mapping switch provider** — a `std::function<bool(std::string_view)>` that decides which stacks the binding joins. The default accepts every mapping whose name starts with `gamePlay`, so bindings are inert while a menu is open, matching how vanilla gates e.g. the inventory key.

Use `[](std::string_view mapping) { return mapping == "screen"; }` for buttons that should work inside a screen.

### allowRemap (KeyHandle only)

With `allowRemap = true` (default) the binding appears on the vanilla controls settings page and players can rebind it; the player's choice is stored by the game and overrides the default at runtime, while `getKeyCodes()` keeps returning the mod-configured codes. With `false` the binding is fixed and hidden from the settings page.

### suspendable

The game can suspend input (e.g. while certain screens are showing). Every handler is registered twice — once suspendable, once not — and the `suspendable` flag you pass with the handler selects which registration is live:

- `suspendable = false` (default): the handler fires even while input is suspended.
- `suspendable = true`: the handler is suppressed while input is suspended.

### Menu button channel

`setMenuButtonEnabled(true)` additionally dispatches the abstract button to the UI scene stack, so a JSON UI screen can consume it through `button_mappings` (the same mechanism vanilla uses for `button.menu_ok`). This is how a custom screen reacts to keys and wheel without a C++ handler.

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

`getOrCreate*` are idempotent: calling with an existing name returns the existing handle. Handles are owned by the registry — never delete them. When a mod is disabled, all of its handles are disabled automatically.

## Common handle API (HandleBase)

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

    bool isValid() const;   // false after the owning mod was disabled
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
    void setKeyCodes(std::vector<int> keyCodes);        // change the default binding
    void remapKeyCodes(std::vector<int> const& keyCodes); // same as the player rebinding in settings
    void resetKeyCodes();                                 // reset to the default binding

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

Key codes are Windows virtual key codes; mouse buttons use negative values (matching vanilla's convention).

## WheelHandle

```cpp
class WheelHandle : public HandleBase {
public:
    using ScrollHandler = std::function<void(FocusImpact, IClientInstance&)>;

    bool isDown() const;  // false = scroll up, true = scroll down

    void setScrollHandler(ScrollHandler handler, bool suspendable = false);
    void removeScrollHandler();
    bool getScrollHandlerSuspendable() const;
    void setScrollHandlerSuspendable(bool suspendable);
};
```

Each wheel notch produces one press+release pair: the menu button channel receives both edges, and the scroll handler runs once per notch on the release edge.

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

    float getMinHoldTime() const;   // seconds the full combination must be held before firing
    void  setMinHoldTime(float minHoldTime);

    void setButtonDownHandler(ButtonDownHandler handler, bool suspendable = false);
    void removeButtonDownHandler();
    void setButtonUpHandler(ButtonUpHandler handler, bool suspendable = false);
    void removeButtonUpHandler();
    // ... plus suspendable getters/setters for both handlers
};
```

A chord references other abstract buttons rather than raw key codes. Vanilla chords are ordered sequences: the modifier buttons must be pressed **before** the trigger button, and while the chord is being completed the trigger's own plain press is suppressed. `triggerButtonName` is the last key of the sequence, `modifierButtonNames` are the preceding ones — e.g. trigger `button.MyMod.key.open` with modifiers `{"button.control"}` gives Ctrl+Open.

## Usage

### A gameplay hotkey

```cpp
#include "ll/api/input/KeyRegistry.h"

void registerKeys() {
    auto& key = ll::input::KeyRegistry::getInstance().getOrCreateKey("open", {'M'});
    key.setButtonDownHandler([](::FocusImpact, ::IClientInstance&) {
        // open the mod's screen
    });
}
```

The key appears on the settings page (`allowRemap` defaults to `true`) and only fires in gameplay.

### Buttons for a custom JSON UI screen

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

### A key combination

```cpp
registry->getOrCreateChord("minimap_toggle", "button.MyMod.key.open", {"button.control"}, 0.0f)
    .setButtonDownHandler([](::FocusImpact, ::IClientInstance&) {
        // Ctrl+Open pressed
    });
```

## Input Events

For raw input instead of abstract buttons, use the event bus:

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
                event.cancel(); // prevent the default action
            }
        }
    );
}
```

## Platform Notes

- This module is **client-only** and not available in server builds.
- Key codes follow Windows virtual key codes.
- Input events can be cancelled to prevent default behavior.

## Related

- [Event](event.md) — Input events are part of the event system
- [Data Driven UI](data_driven_ui.md) — Consume menu buttons from JSON UI screens
