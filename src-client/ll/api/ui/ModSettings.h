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

class ModSettings {
public:
    enum class EntryState { Hidden = 0, Disabled = 1, Enabled = 2 };

    using EntryStateProvider = std::function<EntryState(EntryState current)>;

    using EntryTextProvider = std::function<std::optional<std::string>()>;

    LLAPI ModSettings& addToggle(
        std::string                key,
        std::string                displayName,
        bool                       defaultValue,
        std::function<void(bool)>  onChange    = {},
        std::optional<std::string> description = std::nullopt
    );

    LLAPI ModSettings& addDropdown(
        std::string                key,
        std::string                displayName,
        std::vector<std::string>   valueNames,
        int                        defaultIndex,
        std::function<void(int)>   onChange    = {},
        std::optional<std::string> description = std::nullopt
    );

    LLAPI ModSettings& addButton(
        std::string                key,
        std::string                displayName,
        std::string                buttonLabel,
        std::function<void()>      onClick,
        std::optional<std::string> description = std::nullopt
    );

    LLAPI ModSettings&
    addText(std::string key, std::string displayName, std::optional<std::string> description = std::nullopt);

    LLAPI ModSettings& addIntSlider(
        std::string                key,
        std::string                displayName,
        int                        minValue,
        int                        maxValue,
        std::optional<int>         step,
        int                        defaultValue,
        std::function<void(int)>   onChange    = {},
        std::optional<std::string> description = std::nullopt
    );

    LLAPI ModSettings& addFloatSlider(
        std::string                key,
        std::string                displayName,
        float                      minValue,
        float                      maxValue,
        std::optional<float>       step,
        float                      defaultValue,
        std::function<void(float)> onChange    = {},
        std::optional<std::string> description = std::nullopt
    );

    LLAPI ModSettings& addTextInput(
        std::string                             key,
        std::string                             displayName,
        std::string                             defaultValue,
        std::optional<std::string>              placeholder = std::nullopt,
        std::optional<int>                      maxLength   = std::nullopt,
        std::function<void(std::string const&)> onChange    = {},
        std::optional<std::string>              description = std::nullopt
    );

    LLAPI ModSettings&
    addBanner(std::string key, std::string displayName, std::optional<std::string> description = std::nullopt);

    LLAPI ModSettings& addKeybind(
        std::string                key,
        std::string                displayName,
        std::string                action,
        int                        defaultKey,
        std::function<void(int)>   onChange    = {},
        std::optional<std::string> description = std::nullopt,
        bool                       showReset   = true
    );

    LLNDAPI int getKeybindValue(std::string_view key) const;

    LLAPI ModSettings& setEntryStateProvider(std::string key, EntryStateProvider provider);

    LLAPI ModSettings& setEntryNameProvider(std::string key, EntryTextProvider provider);

    LLAPI ModSettings& setEntryDescriptionProvider(std::string key, EntryTextProvider provider);

    LLAPI ModSettings& refreshEntry(std::string_view key);

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
