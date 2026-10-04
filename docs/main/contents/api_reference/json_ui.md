# JSON UI (Client)

`src-client/ll/api/ui/` · **Client Only**

## Overview

The JSON UI module lets mods build interfaces on the game's own JSON UI engine:

- **`JsonScreen`** — push a screen defined by JSON UI onto the scene stack (modal menus, full-screen UIs, non-modal HUD fragments);
- **`OverlayElement`** — inject a custom control into an existing scene's control tree (typically the HUD);
- **`CustomUIRendererRegistry`** — bind custom renderers to JSON `"type": "custom"` controls;
- **`UISceneCreatedEvent`** — published on every UI scene creation.

The base classes contain no rendering code and create no preset controls: layout comes from the subclass's published JSON UI definition, rendering from its own `MinecraftUICustomRenderer` implementation.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/ui/JsonScreen.h` | Base class for screens defined by JSON UI |
| `ll/api/ui/OverlayElement.h` | Base class for non-modal overlay elements injected into existing scenes |
| `ll/api/ui/CustomUIRendererRegistry.h` | Registry binding renderer names to mod renderer factories |
| `ll/api/event/render/UISceneCreatedEvent.h` | Event published after every UI scene creation |

For registering custom input buttons consumed by screen JSON (`button_mappings`), see [Input](input.md) (`ll/api/input/ScreenButtonRegistry.h`).

## Key Classes

### JsonScreen

Base class for screens defined by JSON UI: owns the hosting lifecycle (creating the scene and pushing it onto the scene stack).

```cpp
namespace ll::ui {
class JsonScreen {
public:
    // Namespaced JSON UI screen definition name (e.g. "mymod_screen.my_screen"),
    // published by the subclass as a resource pack.
    virtual std::string getScreenName() const = 0;

    // Button names the subclass wants to receive through onButtonEvent()
    // (the JSON "to_button_id" names). Default: none.
    virtual std::vector<std::string> getHandledButtonIds() const;

    virtual void onOpen();                                              // after opening
    virtual void onClose();                                             // any exit path
    virtual void onTick();                                              // every tick while open
    virtual bool onButtonEvent(std::string const& buttonId, UIPropertyBag* propertyBag);

    void      open();       // create the scene and push it (no-op when already open)
    void      close();      // pop the scene (no-op when not open)
    bool      isOpen() const;
    UIScene*  scene() const;
};
}
```

Behavior notes:

- **The class is modality-agnostic** — behavior is selected by the screen's JSON properties. A modal container-style screen uses `is_modal` / `is_showing_menu` / `absorbs_input`; a chat-like non-modal screen drops them; a HUD-like passive scene additionally sets `render_game_behind`. Input routing (top-of-stack capture), the focus system, the gamepad virtual cursor and mouse grab/release all follow automatically from those properties.
- **Exit path**: the controller overrides `ScreenController::tryExit()` — the virtual the framework routes `button.menu_exit` into — popping exactly this scene and consuming the event, so the vanilla `menu_cancel -> button.menu_exit` JSON mapping works unchanged. `button.menu_cancel` mapped to itself is likewise handled by a default handler. To take over Esc entirely, list `"button.menu_cancel"` in `getHandledButtonIds()` and handle it in `onButtonEvent()`.
- `open()` / `close()` must be called on the client thread (`ll::thread::ClientThreadExecutor` can be used to switch).

```cpp
class MyScreen : public ll::ui::JsonScreen {
public:
    std::string getScreenName() const override { return "mymod_screen.my_screen"; }

    std::vector<std::string> getHandledButtonIds() const override {
        return {"button.mymod_screen_zoom_in", "button.mymod_screen_zoom_out"};
    }

    void onOpen() override  { /* ... */ }
    void onClose() override { /* ... */ }

    bool onButtonEvent(std::string const& name, UIPropertyBag*) override {
        if (name == "button.mymod_screen_zoom_in")  { /* ... */ return true; }
        if (name == "button.mymod_screen_zoom_out") { /* ... */ return true; }
        return false;
    }
};

static MyScreen gMyScreen;
// open: gMyScreen.open();  close: gMyScreen.close();
```

### OverlayElement

Base class for non-modal overlay elements: attaches a custom control to the control tree of an existing scene (the HUD by default), following the host scene's visibility/alpha propagation (HUD hide via F1 included) and rebuild lifecycle — when the host scene is (re)created, the control is (re)injected automatically.

```cpp
namespace ll::ui {
class OverlayElement {
public:
    // Renderer name (the JSON "renderer" property value, e.g. "mymod_hud_renderer").
    virtual std::string getRendererName() const = 0;
    // Namespaced control definition to inject (e.g. "mymod_hud.example");
    // the definition references getRendererName().
    virtual std::string getControlDefName() const = 0;
    // Creates the renderer instance. Each host control receives its own instance.
    virtual std::shared_ptr<MinecraftUICustomRenderer> createRenderer() = 0;

    // Host scene name. Default: "hud.hud_screen".
    virtual std::string_view getTargetSceneName() const;
    // Name of the parent control inside the host scene
    // (e.g. "not_centered_gui_elements").
    virtual std::string_view getTargetParentControlName() const = 0;

    virtual void onAttach(UIControl& control); // default: no-op
    virtual void onDetach();                   // default: no-op

    void enable();          // register the renderer, watch for the host scene, inject
    void disable();         // detach and unregister
    bool isAttached() const;
};
}
```

```cpp
class MyHudOverlay : public ll::ui::OverlayElement {
public:
    std::string      getRendererName() const override   { return "mymod_hud_renderer"; }
    std::string      getControlDefName() const override { return "mymod_hud.example"; }
    std::string_view getTargetParentControlName() const override {
        return "not_centered_gui_elements";
    }
    std::shared_ptr<MinecraftUICustomRenderer> createRenderer() override {
        return std::make_shared<MyHudRenderer>();
    }
};

static MyHudOverlay gMyHud;
// mod enable: gMyHud.enable();  mod disable: gMyHud.disable();
```

The underlying primitive `attachCustomControl` (`ll/api/ui/CustomControlInjection.h`) remains available for manual control-tree surgery, but `OverlayElement` covers the regular use cases.

### CustomUIRendererRegistry

Binds renderer names (JSON `"renderer"` property values) to mod renderer factories. The game hardcodes its own renderer names (`heart_renderer`, `hotbar_renderer`, ...); registering a colliding name fails. Every control using the name receives its own renderer instance (clone semantics).

```cpp
namespace ll::ui {
class CustomUIRendererRegistry {
public:
    static Expected<> registerRenderer(std::string name, Factory factory);
    static Expected<> registerRenderer(std::string name, std::shared_ptr<UICustomRenderer> prototype);
    static bool       unregisterRenderer(std::string_view name);
    static bool       isRegistered(std::string_view name);
};
}
```

Renderers subclass `MinecraftUICustomRenderer` and override `clone()`, `update()`, `frameUpdate()` and `render()`. `JsonScreen` subclasses typically do not call this directly when they also use `OverlayElement` (which registers on `enable()`); standalone screens register their renderer before `open()`.


### UISceneCreatedEvent

Published after any JSON UI scene has been created (HUD, inventory, custom screens — everything passes through). Scenes served from the cache are not re-published, but scene rebuilds (resource pack reload, resolution change, dimension change) re-create the scene and re-publish.

```cpp
namespace ll::event {
class UISceneCreatedEvent : public RenderEvent {
public:
    std::string const&          getScreenName() const; // e.g. "hud.hud_screen"
    std::shared_ptr<UIScene> const& scene() const;
    UIScene*                    tryGetUIScene() const;
};
}
```

## JSON Definition Keys

Screens and overlay controls are ordinary JSON UI definitions published in the mod's resource pack. Below are the keys the game actually parses for the definition types mods use most.

### `"type": "screen"` — screen settings

| Key | Default | Effect |
|-----|---------|--------|
| `is_showing_menu` | `true` | Marks the scene as a menu; while any menu is on the stack, the per-tick gameplay mouse grab is suppressed (the cursor stays released). HUD-like screens declare `false` |
| `absorbs_input` | `true` | The scene absorbs input instead of passing it to scenes below / the game |
| `render_game_behind` | `true` | Render the game world / lower scenes behind this scene. Full-screen menus set `false` |
| `is_modal` | `false` | Draws a modal boundary in the focus/input system |
| `should_steal_mouse` | `false` | Grab the mouse **for gameplay** (not "release the cursor for UI"). Menus must not declare it; only gameplay-state screens like the crosshair use `true` |
| `load_screen_immediately` | `false` | Load the JSON synchronously at scene creation (default: async). Use `true` for screens that must be complete on open |
| `render_only_when_topmost` | `true` | Render only while topmost on the stack |
| `low_frequency_rendering` | `false` | Render at a reduced rate (the HUD uses `true` to save power) |
| `send_telemetry` | `true` | Screen usage telemetry. Mod screens should set `false` |
| `cache_screen` | `false` | Cache the scene; reopening does not rebuild it |
| `screen_not_flushable` | `false` | Survive stack flushes (resource reload) |
| `screen_draws_last` | `false` | Force this scene to draw on top of other scenes |
| `force_render_below` | `false` | Force this scene to render below |
| `close_on_player_hurt` | `false` | Close automatically when the player is hurt |
| `gamepad_cursor` | `false` | Enable the gamepad virtual cursor |
| `always_accepts_input` | `false` | Receive input regardless of focus/stack position |
| `vertical_scroll_delta` | `20.0` | Vertical scroll step (float) |
| `controls` | — | The screen's content control tree (usually a single `content@namespace.def`) |
| `button_mappings` | — | Screen-level button mappings (see [Input](input.md#vanilla-button_mappings)) |

### `"type": "input_panel"` — input handling

| Key | Effect |
|-----|--------|
| `button_mappings` | Button mapping array (`from_button_id` / `to_button_id` / `mapping_type` / `scope` / `consume_event` / `button_up_right_of_first_refusal` / `input_mode_condition` / ...) |
| `gesture_tracking_button` | Gesture tracking button: while it is held, pointer-move deltas are written into the control's property bag (`#gesture_mouse_delta_x/y`), for the renderer to consume each frame — the basis of drag panning |
| `always_handle_controller_direction` | Turn gamepad stick directions into `ControllerDirectionEvent`s (stick dragging) |
| `always_handle_pointer` | Handle pointer events even outside the control's bounds |
| `always_listen_to_input` | Receive input without focus |
| `hover_enabled` | Enable hover events |
| `consume_hover_events` | Consume hover events (not passed to lower controls) |
| `prevent_touch_input` | Disable touch input on this control |
| `focus_enabled` / `focus_identifier` | Participate in the focus system |

### `"type": "custom"` — custom-rendered control

| Key | Effect |
|-----|--------|
| `renderer` | Renderer name — a vanilla hardcoded one, or a mod name registered through `CustomUIRendererRegistry::registerRenderer` |

### Common control properties

Available on every control type: `size` (absolute, `"100%"`, `"fill"`, `"cm"`), `offset`, `anchor_from` / `anchor_to` (nine-grid anchoring), `layer` (draw order among siblings), `alpha` (propagates down the tree — F1 HUD hide works through it), `controls`, `bindings` (data bindings driving visibility/text), `animations`, `ignored`, `variables` / `$xxx`, `inherits` (`"name@namespace.base"`).

## Authoring the Resource Pack

JSON UI definitions ship in the mod's `resource_packs/` directory. LeviLamina registers every mod's `resource_packs/` as a resource pack source at startup — no in-game import step. Do **not** import the same pack manually in the game: the duplicate UUID makes the game reject it with a "duplicate pack" error and the pack silently goes missing.

Directory layout:

```text
MyMod/                                  (the mod package)
├── manifest.json                       mod manifest
└── resource_packs/
    └── MyModUI/                        one or more packs per mod
        ├── manifest.json               pack manifest
        ├── textures/                   optional custom textures
        └── ui/
            ├── _ui_defs.json           lists the pack's UI definition files
            └── my_mod.json             the definitions themselves
```

### Pack `manifest.json`

A standard resource-pack manifest; generate fresh UUIDs per pack:

```json
{
    "format_version": 2,
    "header": {
        "name": "MyMod UI",
        "description": "MyMod HUD overlay controls",
        "uuid": "7f3a2c10-9b6e-4c4a-9d21-3c2c7a5f8101",
        "version": [1, 0, 0],
        "min_engine_version": [1, 21, 0]
    },
    "modules": [
        {
            "type": "resources",
            "uuid": "5c1e9a20-4f7b-4e2c-8a3d-9b0c6d1e2f42",
            "version": [1, 0, 0]
        }
    ]
}
```

### `ui/_ui_defs.json`

Registers the pack's UI definition files — every custom UI JSON must be listed here or the game never parses it:

```json
{
    "ui_defs": [
        "ui/my_mod.json"
    ]
}
```

### `ui/my_mod.json`

One file carries a `"namespace"` and any number of definitions under it; definitions are referenced as `namespace.name` from C++ and from other JSON (`inherits`, `controls` entries):

```json
{
    "namespace": "my_mod",

    "example": {
        "type": "custom",
        "renderer": "my_mod_hud_renderer",
        "size": ["100%", "100%"]
    },

    "my_screen": {
        "type": "screen",
        "is_showing_menu": true,
        "render_game_behind": false,
        "send_telemetry": false,
        "load_screen_immediately": true,
        "controls": [
            { "content@my_mod.my_screen_content": {} }
        ],
        "button_mappings": [
            {
                "from_button_id": "button.menu_cancel",
                "to_button_id": "button.menu_exit",
                "mapping_type": "global"
            }
        ]
    },

    "my_screen_content": {
        "type": "input_panel",
        "size": ["100%", "100%"],
        "gesture_tracking_button": "button.my_mod_drag",
        "button_mappings": [
            {
                "from_button_id": "button.menu_select",
                "to_button_id": "button.my_mod_drag",
                "mapping_type": "pressed",
                "button_up_right_of_first_refusal": true
            }
        ]
    }
}
```

### Wiring it up from C++

- `JsonScreen::getScreenName()` returns `"my_mod.my_screen"`;
- `OverlayElement::getControlDefName()` returns `"my_mod.example"`, `getRendererName()` returns `"my_mod_hud_renderer"`;
- custom button names in `button_mappings` (e.g. `button.my_mod_drag`) are registered via `ScreenButtonRegistry` (see [Input](input.md)) and handled in `JsonScreen::onButtonEvent()`;
- custom textures live under the pack's `textures/` directory and are referenced by their `textures/...` path from JSON (`"texture": "textures/ui/my_icon"`).

### Notes

- Namespace everything (`my_mod.*`, `my_mod_*_renderer`, `button.my_mod_*`) to avoid colliding with vanilla and other mods.
- Content-log property warnings (e.g. `load_screen_immediately` on a bare screen definition) are informational whitelist checks; parsing still applies the key.
- Scene rebuilds (resource-pack reload, resolution change) re-parse these definitions and re-publish `UISceneCreatedEvent`; `OverlayElement` re-attaches automatically.

## Platform Notes

- This module is **client-only** and not available in server builds.
- Scene lifecycle is engine-managed: scenes are destroyed on world exit and rebuilt on resource-pack reload or resolution change; `OverlayElement` re-attaches automatically, `JsonScreen` scenes are re-opened by the mod.
- Property-whitelist warnings in the content log (e.g. for `load_screen_immediately` on a bare screen definition) are informational; parsing still applies the key.

## Related

- [Input](input.md) — Registering custom buttons (`ScreenButtonRegistry`) and `button_mappings` semantics
- [Event](event.md) — `UISceneCreatedEvent` is part of the event system
