#pragma once

#include "ll/api/form/FormBase.h"
#include "mc/world/actor/player/Player.h"

namespace ll::form {

using CustomFormElementResult = std::variant<std::monostate, uint64, double, std::string>;
using CustomFormResult        = std::optional<std::unordered_map<std::string, CustomFormElementResult>>;

class CustomForm : public Form {

    class CustomFormImpl;
    std::unique_ptr<CustomFormImpl> impl;

public:
    using Callback = std::function<void(Player&, CustomFormResult const&, FormCancelReason)>;

    LLNDAPI CustomForm();

    LLNDAPI explicit CustomForm(std::string const& title);

    LLAPI ~CustomForm() override;

    LLAPI CustomForm& setTitle(std::string const& title);

    LLAPI CustomForm& setSubmitButton(std::string const& text);

    LLAPI CustomForm& appendHeader(std::string const& text);

    LLAPI CustomForm& appendLabel(std::string const& text);

    LLAPI CustomForm& appendDivider();

    LLAPI CustomForm& appendInput(
        std::string const& name,
        std::string const& text,
        std::string const& placeholder = {},
        std::string const& defaultVal  = {},
        std::string const& tooltip     = {}
    );

    LLAPI CustomForm& appendToggle(
        std::string const& name,
        std::string const& text,
        bool               defaultVal = false,
        std::string const& tooltip    = {}
    );

    LLAPI CustomForm& appendDropdown(
        std::string const&              name,
        std::string const&              text,
        std::vector<std::string> const& options,
        size_t                          defaultVal = 0,
        std::string const&              tooltip    = {}
    );

    LLAPI CustomForm& appendSlider(
        std::string const& name,
        std::string const& text,
        double             min,
        double             max,
        double             step       = 0.0,
        double             defaultVal = 0.0,
        std::string const& tooltip    = {}
    );

    LLAPI CustomForm& appendStepSlider(
        std::string const&              name,
        std::string const&              text,
        std::vector<std::string> const& steps,
        size_t                          defaultVal = 0,
        std::string const&              tooltip    = {}
    );

    LLAPI CustomForm& sendTo(Player& player, Callback callback = {});

    LLAPI CustomForm& sendUpdate(Player& player, Callback callback = {});

    LLAPI std::string getFormData() const;
};

} // namespace ll::form
