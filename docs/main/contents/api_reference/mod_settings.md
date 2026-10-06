# Mod Settings (Client)

`src-client/ll/api/ui/ModSettings.h` · **Client Only**

## Overview

The Mod Settings module adds a per-mod settings page to the game's own settings screen. The vanilla settings screen gains a "Mods" tab, with one group per mod listed alongside the vanilla groups (Accessibility, Keyboard & Mouse, ...).

- **No resource pack or JSON UI work needed** — the page is built from the game's own OreUI settings components, so gamepad navigation, localization of built-in labels and UI scaling come for free.
- Access it through `ll::mod::Mod::getSettings()`; registration calls chain (`addToggle(...).addDropdown(...)`).
- Entries appear in registration order and can be added at any time — a settings page that is already open refreshes in place.
- Values persist to `<mod data dir>/settings.json`, written on every change; change callbacks run on the client main thread.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/ui/ModSettings.h` | Per-mod settings page builder |
| `ll/api/mod/Mod.h` | `Mod::getSettings()` accessor |

## Entry Types

| Method | Control | Value |
|--------|---------|-------|
| `addToggle(key, displayName, defaultValue, onChange, description)` | On/off switch | `bool` |
| `addDropdown(key, displayName, valueNames, defaultIndex, onChange, description)` | Dropdown from a string list | `int` index |
| `addButton(key, displayName, buttonLabel, onClick, description)` | Action button | — |
| `addText(key, displayName, description)` | Static text row | — |
| `addIntSlider(key, displayName, minValue, maxValue, step, defaultValue, onChange, description)` | Integer slider; `step` enables tick marks and snapping, `nullopt` shows neither | `int` |
| `addFloatSlider(key, displayName, minValue, maxValue, step, defaultValue, onChange, description)` | Float slider; snaps to `step` increments when set, continuous with `nullopt` | `float` |
| `addTextInput(key, displayName, defaultValue, placeholder, maxLength, onChange, description)` | OreUI text field | `std::string` |
| `addBanner(key, displayName, description)` | Banner block (`displayName` is the title, `description` the body) | — |
| `addKeybind(key, displayName, action, defaultKey, onChange, description, showReset)` | Rebindable key entry | `int` key code |

All `onChange` / `onClick` callbacks are optional (except `addButton`'s `onClick`) and may be left empty when the value is only read through the getters. `description` is the small gray sub-text under the row. `key` must be unique within the mod's page.

## Example

```cpp
#include "ll/api/mod/Mod.h"
#include "ll/api/ui/ModSettings.h"

ll::mod::NativeMod& self = /* ... */;

self.getSettings()
    .addToggle("show", "Show Overlay", true, [](bool on) { /* ... */ })
    .addDropdown("mode", "Mode", {"Mode A", "Mode B"}, 0, [](int index) { /* ... */ })
    .addFloatSlider("scale", "Scale", 0.5f, 4.0f, 0.1f, 1.0f)
    .addTextInput("name", "Custom Name", "Default", "name", 32)
    .addKeybind("toggle", "Toggle Overlay", "key.mymod_toggle", 'M', [](int key) { /* ... */ })
    .addBanner("info", "MyMod", "Example banner text.")
    .addButton("refresh", "Cache", "Refresh Cache", [] { /* ... */ });
```

## Keybind Entries

Keybind rows behave like the vanilla keyboard settings page:

- `action` is the input-mapping action name; namespace it (`key.<mod>_<name>`) to avoid colliding with vanilla or other mods.
- `defaultKey` uses the game's key codes (`'M'` = 77). Mouse buttons are negative: raw mouse button − 100, so −99 is the left button.
- The row shows the localized key name; clicking it enters capture mode (`>_<`); pressing **Esc** unassigns the binding; binding a key already used by another action unassigns it there (vanilla behavior); changes apply to gameplay immediately.
- `showReset = true` (the default) adds a vanilla-style reset-to-default button under the row; the button hides itself while the binding equals the default key.
- Mod keybinds are hidden from the vanilla "Keyboard & Mouse" page — they are edited under the Mods tab only.
- Rebinds persist across restarts.

## Entry State

Any entry can be hidden or disabled dynamically through a state provider:

```cpp
using EntryState = ll::ui::ModSettings::EntryState; // Hidden / Disabled / Enabled

self.getSettings().setEntryStateProvider("name", [](EntryState current) {
    return gFeatureEnabled ? current : EntryState::Hidden;
});
```

- The provider receives the state the game would use; return the argument unchanged to keep the default behavior.
- It is evaluated when the entry is (re)built; after the condition changes, call `refreshEntry(key)` to re-evaluate an already-open settings page (e.g. from another entry's `onChange`).
- Passing an empty provider restores the default behavior. The provider replaces any state override the entry already had.
- `setEntryStateProvider` applies to an already-open settings page immediately; hiding a keybind entry also hides its reset button.

Entry names and descriptions can be computed dynamically the same way:

```cpp
self.getSettings().setEntryNameProvider("name", []() -> std::optional<std::string> {
    return "Count: " + std::to_string(gCount);
});
self.getSettings().setEntryDescriptionProvider("name", []() -> std::optional<std::string> {
    return std::nullopt; // keep the declared description
});
```

- Text providers return the text to display, or `std::nullopt` to keep the declared one.
- Same evaluation rules as the state provider: on (re)build and after `refreshEntry(key)`.

## Reading Values

`getToggleValue` / `getDropdownValue` / `getIntSliderValue` / `getFloatSliderValue` / `getTextInputValue` / `getKeybindValue` return the current value of an entry (the default until the first change), and work even if the settings screen was never opened.

```cpp
bool enabled = self.getSettings().getToggleValue("show");
int  key     = self.getSettings().getKeybindValue("toggle");
```

## Behavior Notes

- Stored values are read back at registration time; out-of-range slider values are clamped to the declared range.
- Toggles, dropdowns and sliders are backed by dynamically allocated game options; text inputs and keybinds are backed by LeviLamina's own storage and the keyboard remapping layout respectively.
- The "Mods" tab is injected into every settings registry the game builds (main menu and in-game alike); no re-registration is needed after world joins or screen rebuilds.

## Platform Notes

- This module is **client-only** and not available in server builds.
- All registration and getter calls are thread-safe, but callbacks always run on the client main thread.

## Related

- [Mod](mod.md) — `Mod::getSettings()` accessor
- [Input](input.md) — `KeyRegistry` for raw gameplay key/mouse button registration
- [JSON UI](json_ui.md) — fully custom screens and HUD overlays
