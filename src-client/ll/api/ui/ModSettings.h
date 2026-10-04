#pragma once

#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>

#include "ll/api/base/Macro.h"

namespace ll::mod {
class Mod;
}

namespace ll::ui {

/// Per-mod settings page under the "Mods" tab of the vanilla settings screen.
///
/// Entries are declared declaratively (usually in onLoad/onEnable); LeviLamina builds the
/// native components every time the game (re)builds its settings registry, so mods do not
/// need to care about the registry lifecycle. displayName / description / valueNames are
/// localization keys and are shown as-is when no translation exists.
///
/// Values are persisted by LeviLamina to `<mod data dir>/settings.json` and restored on
/// startup.
class ModSettings {
public:
    /// Adds a boolean toggle. onChange runs on the client main thread when the value changes.
    LLAPI ModSettings& addToggle(
        std::string                key,
        std::string                displayName,
        bool                       defaultValue,
        std::function<void(bool)>  onChange    = {},
        std::optional<std::string> description = std::nullopt
    );

    /// Adds a dropdown. valueNames[i] is the display text of value i.
    LLAPI ModSettings& addDropdown(
        std::string                key,
        std::string                displayName,
        std::vector<std::string>   valueNames,
        int                        defaultIndex,
        std::function<void(int)>   onChange    = {},
        std::optional<std::string> description = std::nullopt
    );

    /// Adds a button. onClick runs on the client main thread.
    LLAPI ModSettings& addButton(
        std::string                key,
        std::string                displayName,
        std::string                buttonLabel,
        std::function<void()>      onClick,
        std::optional<std::string> description = std::nullopt
    );

    /// Adds a read-only text line.
    LLAPI ModSettings&
    addText(std::string key, std::string displayName, std::optional<std::string> description = std::nullopt);

    /// Adds an integer slider. step controls the tick marks (1 shows a tick per integer).
    LLAPI ModSettings& addIntSlider(
        std::string                key,
        std::string                displayName,
        int                        minValue,
        int                        maxValue,
        int                        step,
        int                        defaultValue,
        std::function<void(int)>   onChange    = {},
        std::optional<std::string> description = std::nullopt
    );

    /// Adds a float slider. step is the drag increment.
    LLAPI ModSettings& addFloatSlider(
        std::string                key,
        std::string                displayName,
        float                      minValue,
        float                      maxValue,
        float                      step,
        float                      defaultValue,
        std::function<void(float)> onChange    = {},
        std::optional<std::string> description = std::nullopt
    );

    /// Adds a single-line text input. The value is stored by LeviLamina (no OptionID slot
    /// is consumed). maxLength defaults to no effective limit (a missing maxLength makes
    /// the OreUI text field always show the placeholder, so one is forced internally).
    LLAPI ModSettings& addTextInput(
        std::string                             key,
        std::string                             displayName,
        std::string                             defaultValue,
        std::optional<std::string>              placeholder = std::nullopt,
        std::optional<int>                      maxLength   = std::nullopt,
        std::function<void(std::string const&)> onChange    = {},
        std::optional<std::string>              description = std::nullopt
    );

    /// Adds a banner (static title + body text).
    LLAPI ModSettings&
    addBanner(std::string key, std::string displayName, std::optional<std::string> description = std::nullopt);

    /// Adds a rebindable key entry (same interaction as vanilla key bindings: click to
    /// capture a new key, conflicted bindings are unassigned by the game; ESC while
    /// capturing resets the binding without firing onChange).
    /// `action` is the keymapping action id (e.g. "key.mymod.open"); register the same id
    /// for gameplay through ll::input::KeyRegistry. The current binding is persisted to
    /// settings.json, restored on startup, and applied to gameplay input right away. Mods
    /// using KeyRegistry::registerGameplayKeyboardButton (fixed key code) must re-register
    /// their button from onChange for the new key to take effect.
    /// `showReset` controls whether the reset-to-default button row is shown.
    LLAPI ModSettings& addKeybind(
        std::string                key,
        std::string                displayName,
        std::string                action,
        int                        defaultKey,
        std::function<void(int)>   onChange    = {},
        std::optional<std::string> description = std::nullopt,
        bool                       showReset   = true
    );

    /// Current bound key of a keybind entry (the default until first rebind).
    LLNDAPI int getKeybindValue(std::string_view key) const;

    /// Current value of a toggle/dropdown entry (the default until first change).
    LLNDAPI bool getToggleValue(std::string_view key) const;

    LLNDAPI int getDropdownValue(std::string_view key) const;

    LLNDAPI int getIntSliderValue(std::string_view key) const;

    LLNDAPI float getFloatSliderValue(std::string_view key) const;

    LLNDAPI std::string getTextInputValue(std::string_view key) const;

    ModSettings(ModSettings const&)            = delete;
    ModSettings& operator=(ModSettings const&) = delete;

    ~ModSettings();

private:
    friend mod::Mod;

    struct Impl;

    static ModSettings& forMod(mod::Mod const& mod);

    explicit ModSettings(std::unique_ptr<Impl> impl);

    std::unique_ptr<Impl> mImpl;
};

} // namespace ll::ui
