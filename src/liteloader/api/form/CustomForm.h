#pragma once

#include "liteloader/api/form/FormBase.h"
#include "liteloader/api/form/FormResult.h"
#include "mc/world/actor/player/Player.h"

namespace ll::form {

class CustomFormElement {
public:
    enum class Type { None = -1, Label, Input, Toggle, Dropdown, Slider, StepSlider };

protected:
    std::string name{};

    explicit CustomFormElement(std::string name) : name(std::move(name)) {}
    virtual ~CustomFormElement()      = default;
    virtual Type      getType() const = 0;
    virtual fifo_json serialize()     = 0;
    friend class CustomForm;
};

class CustomForm {

    class CustomFormImpl;
    std::unique_ptr<CustomFormImpl> impl{};

public:
    using Callback = std::function<void(Player&, const CustomFormResult&)>;

    LLAPI explicit CustomForm(const std::string& title);

    LLAPI CustomForm& setTitle(const std::string& title);

    LLAPI CustomForm& appendLabel(const std::string& text);

    LLAPI CustomForm& appendInput(
        const std::string& name,
        const std::string& text,
        const std::string& placeholder = "",
        const std::string& defaultVal         = ""
    );

    LLAPI CustomForm& appendToggle(const std::string& name, const std::string& text, bool defaultVal = false);

    LLAPI CustomForm& appendDropdown(
        const std::string&              name,
        const std::string&              text,
        const std::vector<std::string>& options,
        size_t                          defaultVal = 0
    );

    LLAPI CustomForm& appendSlider(
        const std::string& name,
        const std::string& text,
        double             min,
        double             max,
        double             step = 0.0,
        double             defaultVal  = 0.0
    );

    LLAPI CustomForm& appendStepSlider(
        const std::string&              name,
        const std::string&              text,
        const std::vector<std::string>& steps,
        size_t                          defaultVal = 0
    );

    LLAPI CustomForm& sendTo(Player& player, Callback callback = {});
};

} // namespace ll::form