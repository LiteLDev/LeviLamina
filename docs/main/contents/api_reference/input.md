# Input (Client)

`src-client/ll/api/input/` · **Client Only**

## Overview

The Input module covers keyboard and mouse input for the client:

- registering custom key bindings with callbacks (`KeyRegistry` / `KeyHandle`);
- registering custom abstract buttons that fire in gameplay context (`KeyRegistry::registerGameplayKeyboardButton` / `registerInputMappingsKeyboardButton`);
- registering custom abstract buttons usable by JSON UI screens (`ScreenButtonRegistry`);
- raw keyboard/mouse events (`KeyInputEvent` / `MouseInputEvent`).

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/input/KeyRegistry.h` | Singleton registry for key bindings and gameplay-context abstract buttons |
| `ll/api/input/KeyHandle.h` | Individual key binding handle |
| `ll/api/input/ScreenButtonRegistry.h` | Screen-context abstract buttons for JSON UI `button_mappings` |
| `ll/api/event/input/KeyInputEvent.h` | Keyboard input event |
| `ll/api/event/input/MouseInputEvent.h` | Mouse input event |

## Input Mappings

The game dispatches key bindings through named **input mapping stacks**. Exactly one stack is active at a time: a `gamePlay*` stack while playing, a `screen*` stack while a UI screen is active. This is the native gating that keeps gameplay keybindings inert while a menu is open (e.g. why E does not open the inventory while chatting).

The gameplay family is further subdivided by player state, and a button event is only produced while the mapping for the current state is active:

| Mapping | Player state |
|---------|--------------|
| `gamePlayNormal` | Default state — walking, sprinting, jumping, **elytra gliding**, and anything not listed below |
| `gamePlayFlying` | Creative-mode flight (the abilities flying bit; elytra gliding does **not** set it) |
| `gamePlaySwimming` | Swimming |
| `gamePlayInWater` | In water but not swimming (standing/wading) |
| `gamePlayInScaffolding` | Inside climbable blocks (scaffolding, ladders, ...) |
| `gamePlaySpectatorModeName` | Spectator mode (highest priority, overrides all states above) |
| `gamePlayBoating` / `gamePlayRiding` / `gamePlayMinecart` | In a boat / riding an entity / in a minecart (event-driven, not per-frame) |
| `gamePlayEmote` | While the emote wheel is open |

The screen family is selected by the active screen rather than player state:

| Mapping | Context |
|---------|---------|
| `screen` | Regular UI screens (inventory, pause menu, custom screens) |
| `screenDeath` | Death screen |
| `screenBed` | Bed/sleeping screen |
| `screenGazeController` | Gaze controller active |
| `screenEditor` | Editor mode only |

Because the active gameplay mapping changes with player state, a custom gameplay button must be registered into **all** `gamePlay*` mappings to work in every state — `registerGameplayKeyboardButton` does exactly this (prefix match on `gamePlay`); `registerInputMappingsKeyboardButton` registers into an explicit list of mapping names instead.

`keyCode` is a virtual-key code. Negative values denote mouse buttons, stored the way the remapping layout stores them (raw mouse button - 100, e.g. -99 for the left button); they are routed into the mouse input mapping like vanilla does.

## Vanilla `button_mappings`

JSON UI converts a physical/abstract input button (`from_button_id`, e.g. left click `button.menu_select`, Esc `button.menu_cancel`) into a **named button event** (`to_button_id`) that is dispatched to control components and the screen controller. Mods use the same mechanism to feed custom inputs into their screens.

A mapping entry looks like:

```json
{
    "from_button_id": "button.menu_tab_right",
    "to_button_id":   "button.mymod_zoom_in",
    "mapping_type":   "global"
}
```

| Key | Default | Meaning |
|-----|---------|---------|
| `from_button_id` | required | Source button: a vanilla abstract button or a custom button registered through `ScreenButtonRegistry` |
| `to_button_id` | required | Named button event dispatched to the screen; consumed by `JsonScreen::onButtonEvent` |
| `mapping_type` | `"global"` | `"global"` (unconditional), `"pressed"` (hover/scope-checked, also delivers button-up — the basis of drag tracking), `"focused"` (only while the control has focus), `"double_pressed"` (double click) |
| `scope` | `"controller"` | Where the event goes: `"controller"` (screen controller logic), `"view"` (control tree visuals), `"global"` (both) |
| `consume_event` | `true` | Whether the source button is consumed after conversion |
| `button_up_right_of_first_refusal` | `false` | Deliver the button-up even after the pointer leaves the control (required for drag gestures) |
| `input_mode_condition` | none | `"gamepad"` / `"not_gamepad"` device filter |
| `handle_select` / `handle_deselect` | `false` | Also fire the mapped button when the control gains / loses focus |
| `ignore_input_scope` | `false` | Skip the hover/scope check — fire whenever the control is interactable (vanilla uses it for slider arrow-key nudging) |
| `alternate_input_scope` | `false` | Use "content panel hover" instead of the regular scope check |

Common vanilla `from_button_id` values: `button.menu_select` (left click / gamepad A), `button.menu_secondary_select` (right click), `button.menu_ok` (Enter), `button.menu_cancel` (Esc / gamepad B), `button.menu_up/down/left/right` (arrow keys / D-pad), `button.menu_tab_left/right` (LB/RB, PageUp/PageDown), `button.menu_exit` (screen exit).

Two behavioral constraints worth knowing:

- **Named button events fire only on the down edge — there is no key repeat.** Vanilla's "hold arrow keys to keep scrolling" is implemented inside focus/scroll components, not through button events; mods needing continuous movement while a key is held must poll the key state themselves. Sustained gamepad stick directions travel a different channel (`ControllerDirectionEvent`), not button events.
- Gameplay-state evaluation is prioritized: spectator overrides everything; vehicle mappings (boat/ride/minecart) are switched by riding events rather than per-frame evaluation; creative flight (`gamePlayFlying`) and elytra gliding (`gamePlayNormal`) are different states.

## Key Classes

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

    // Abstract button fired in every gameplay state (all gamePlay* mappings);
    // inert while a menu screen is active — the same gating vanilla keybindings get.
    bool registerGameplayKeyboardButton(
        std::string       buttonName,
        int               keyCode,
        ButtonDownHandler handler,
        FocusImpact       focusImpact = FocusImpact::Neutral
    );

    // Same, but scoped to the named input mappings only.
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

Registers custom abstract buttons produced by physical inputs while a UI screen is active, making them usable as `from_button_id` in JSON UI `button_mappings` — the same mechanism vanilla screen buttons (`button.menu_ok`, wheel-driven `button.inventory_left/right`) use.

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
#include "ll/api/input/KeyRegistry.h"
#include "ll/api/mod/NativeMod.h"

void registerKeys() {
    auto& registry = ll::input::KeyRegistry::getInstance();

    auto& myKey = registry.getOrCreateKey("mymod.toggle", {'G'}); // Windows virtual key code

    myKey.registerButtonDownHandler([] {
        // Called when the key is pressed
    });
    myKey.registerButtonUpHandler([] {
        // Called when the key is released
    });
}
```

### Registering a Gameplay Button (e.g. "press M to open a screen")

The handler is invoked directly on button down, in every gameplay state, and goes inert while a menu is open:

```cpp
ll::input::KeyRegistry::getInstance().registerGameplayKeyboardButton(
    "button.mymod_open",
    'M',
    [](FocusImpact, IClientInstance&) {
        // Open the screen...
    }
);
```

To restrict the button to specific states, use `registerInputMappingsKeyboardButton`:

```cpp
registry.registerInputMappingsKeyboardButton(
    "button.mymod_open",
    'M',
    {"gamePlayNormal", "gamePlayFlying"}, // not while swimming, boating, ...
    [](FocusImpact, IClientInstance&) { /* ... */ }
);
```

### Registering a Screen Button for JSON UI

Register the abstract button in C++, then reference it from your screen's JSON `button_mappings`:

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

The `to_button_id` event reaches the screen controller — with `ll::ui::JsonScreen`, it is delivered to `onButtonEvent()` (see [JSON UI](json_ui.md)).

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
                event.cancel(); // Prevent default action
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

- This module is **client-only** and not available in server builds.
- Key codes follow Windows virtual key codes.
- Input events can be cancelled to prevent default behavior.
- Registered buttons are re-applied automatically whenever the game rebuilds the input mappings; `unregister*` takes effect on the next rebuild.

## Related

- [Event](event.md) — Input events are part of the event system
- [JSON UI](json_ui.md) — Consuming registered buttons in custom screens
