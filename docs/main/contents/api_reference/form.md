# Form

`ll/api/form/` · **Common**

## Overview

The Form module provides three types of interactive UI forms that can be sent to players: SimpleForm (button list), ModalForm (two-button dialog), and CustomForm (multi-field input form).

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/form/SimpleForm.h` | Button list form |
| `ll/api/form/ModalForm.h` | Two-button confirmation dialog |
| `ll/api/form/CustomForm.h` | Multi-field input form |
| `ll/api/form/FormBase.h` | Base form class |

## SimpleForm

A form with a title, optional content text, and a list of buttons.

```cpp
namespace ll::form {
class SimpleForm : public Form {
public:
    using Callback       = std::function<void(Player&, int, FormCancelReason)>;
    using ButtonCallback = std::function<void(Player&)>;

    SimpleForm();
    SimpleForm(std::string const& title, std::string const& content = {});

    SimpleForm& setTitle(std::string const& title);
    SimpleForm& setContent(std::string const& content);
    SimpleForm& appendHeader(std::string const& text);
    SimpleForm& appendLabel(std::string const& text);
    SimpleForm& appendDivider();

    SimpleForm& appendButton(std::string const& text, ButtonCallback callback = {});
    SimpleForm& appendButton(std::string const& text, std::string const& imageData,
                             std::string const& imageType, ButtonCallback callback = {});

    SimpleForm& sendTo(Player& player, Callback callback = {});
    SimpleForm& sendUpdate(Player& player, Callback callback = {});
};
}
```

### Example

```cpp
#include "ll/api/form/SimpleForm.h"
#include "mc/world/actor/player/Player.h"

void showMenu(Player& player) {
    ll::form::SimpleForm form("Main Menu", "Choose an option:");

    form.appendButton("Teleport Home", [](Player& p) {
        // Teleport player home
    });

    form.appendButton("Check Balance", [](Player& p) {
        // Show balance
    });

    form.appendButton("Settings", "textures/ui/settings_glyph_color_2x", "path",
        [](Player& p) {
            // Open settings
        }
    );

    form.sendTo(player);
}
```

## ModalForm

A two-button confirmation dialog.

```cpp
namespace ll::form {
enum class ModalFormSelectedButton : bool { Upper = true, Lower = false };
using ModalFormResult = std::optional<ModalFormSelectedButton>;

class ModalForm : public Form {
public:
    using Callback = std::function<void(Player&, ModalFormResult, FormCancelReason)>;

    ModalForm();
    ModalForm(std::string title, std::string content, std::string upperButton, std::string lowerButton);

    ModalForm& setTitle(std::string const& title);
    ModalForm& setContent(std::string const& content);
    ModalForm& setUpperButton(std::string const& upperButton);
    ModalForm& setLowerButton(std::string const& lowerButton);

    bool sendTo(Player& player, Callback callback = {});
    bool sendUpdate(Player& player, Callback callback = {});
};
}
```

### Example

```cpp
#include "ll/api/form/ModalForm.h"

void confirmAction(Player& player) {
    ll::form::ModalForm form(
        "Confirm",
        "Are you sure you want to reset your data?",
        "Yes, reset",
        "Cancel"
    );

    form.sendTo(player, [](Player& p, ll::form::ModalFormResult result, ll::form::FormCancelReason) {
        if (result == ll::form::ModalFormSelectedButton::Upper) {
            // User clicked "Yes, reset"
        } else {
            // User clicked "Cancel" or closed the form
        }
    });
}
```

## CustomForm

A form with multiple input elements: text input, toggles, dropdowns, sliders, and step sliders.

```cpp
namespace ll::form {
using CustomFormElementResult = std::variant<std::monostate, uint64, double, std::string>;
using CustomFormResult = std::optional<std::unordered_map<std::string, CustomFormElementResult>>;

class CustomForm : public Form {
public:
    using Callback = std::function<void(Player&, CustomFormResult const&, FormCancelReason)>;

    CustomForm();
    CustomForm(std::string const& title);

    CustomForm& setTitle(std::string const& title);
    CustomForm& setSubmitButton(std::string const& text);
    CustomForm& appendHeader(std::string const& text);
    CustomForm& appendLabel(std::string const& text);
    CustomForm& appendDivider();

    CustomForm& appendInput(std::string const& name, std::string const& text,
                            std::string const& placeholder = {},
                            std::string const& defaultVal = {},
                            std::string const& tooltip = {});

    CustomForm& appendToggle(std::string const& name, std::string const& text,
                             bool defaultVal = false, std::string const& tooltip = {});

    CustomForm& appendDropdown(std::string const& name, std::string const& text,
                               std::vector<std::string> const& options,
                               size_t defaultVal = 0, std::string const& tooltip = {});

    CustomForm& appendSlider(std::string const& name, std::string const& text,
                             double min, double max, double step = 0.0,
                             double defaultVal = 0.0, std::string const& tooltip = {});

    CustomForm& appendStepSlider(std::string const& name, std::string const& text,
                                 std::vector<std::string> const& steps,
                                 size_t defaultVal = 0, std::string const& tooltip = {});

    CustomForm& sendTo(Player& player, Callback callback = {});
    CustomForm& sendUpdate(Player& player, Callback callback = {});
};
}
```

### Example

```cpp
#include "ll/api/form/CustomForm.h"

void showSettings(Player& player) {
    ll::form::CustomForm form("Server Settings");

    form.appendInput("motd", "Server MOTD", "Enter MOTD...", "A Minecraft Server");
    form.appendToggle("pvp", "Enable PvP", true);
    form.appendSlider("renderDistance", "Render Distance", 2, 32, 1, 10);
    form.appendDropdown("difficulty", "Difficulty", {"Peaceful", "Easy", "Normal", "Hard"}, 2);
    form.appendStepSlider("gamemode", "Default Gamemode", {"Survival", "Creative", "Adventure"}, 0);

    form.sendTo(player, [](Player& p, ll::form::CustomFormResult const& result, ll::form::FormCancelReason) {
        if (!result) return; // Form was cancelled

        auto& data = *result;
        auto motd = std::get<std::string>(data.at("motd"));
        auto pvp = std::get<uint64>(data.at("pvp"));            // 0 or 1
        auto renderDist = std::get<double>(data.at("renderDistance"));
        auto difficulty = std::get<uint64>(data.at("difficulty")); // index
    });
}
```

## Related

- [How-to Guide: Forms](../developer_guides/how_to_guides/form_guide.md) — Step-by-step tutorial
