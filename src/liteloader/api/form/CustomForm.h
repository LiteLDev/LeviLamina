#pragma once

#include "liteloader/api/form/FormBase.h"
#include "liteloader/api/form/FormResult.h"
#include "mc/world/actor/player/Player.h"

namespace ll::form {

class FormElementResult;

class CustomFormElement {
public:
    enum class Type { None = -1, Label, Input, Toggle, Dropdown, Slider, StepSlider };

    std::string mName{};

    [[nodiscard]] virtual Type              getType() const                          = 0;
    [[nodiscard]] virtual FormElementResult parseResult(fifo_json const& data) const = 0;

protected:
    explicit CustomFormElement(std::string name) : mName(std::move(name)) {}
    virtual ~CustomFormElement() = default;

    [[nodiscard]] virtual fifo_json serialize() const = 0;

    friend class CustomForm;
};

class CustomForm : public Form {

    class CustomFormImpl;
    std::unique_ptr<CustomFormImpl> impl{};

public:
    using Callback = std::function<void(Player&, CustomFormResult const&)>;

    LLAPI explicit CustomForm(std::string const& title);

    ~CustomForm() override = default;

    LLAPI CustomForm& setTitle(std::string const& title);

    LLAPI CustomForm& appendLabel(std::string const& text);

    LLAPI CustomForm& appendInput(
        std::string const& name,
        std::string const& text,
        std::string const& placeholder = "",
        std::string const& defaultVal  = ""
    );

    LLAPI CustomForm& appendToggle(std::string const& name, std::string const& text, bool defaultVal = false);

    LLAPI CustomForm& appendDropdown(
        std::string const&              name,
        std::string const&              text,
        std::vector<std::string> const& options,
        size_t                          defaultVal = 0
    );

    LLAPI CustomForm& appendSlider(
        std::string const& name,
        std::string const& text,
        double             min,
        double             max,
        double             step       = 0.0,
        double             defaultVal = 0.0
    );

    LLAPI CustomForm& appendStepSlider(
        std::string const&              name,
        std::string const&              text,
        std::vector<std::string> const& steps,
        size_t                          defaultVal = 0
    );

    LLAPI CustomForm& sendTo(Player& player, Callback callback = {});
};

} // namespace ll::form