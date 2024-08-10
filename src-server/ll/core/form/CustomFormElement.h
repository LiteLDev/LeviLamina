#pragma once

#include "ll/api/form/CustomForm.h"
#include "nlohmann/json.hpp"
#include <string>


namespace ll::form {
class CustomFormElement {
public:
    enum class Type { None = -1, Label, Input, Toggle, Dropdown, Slider, StepSlider };

    std::string mName{};

    [[nodiscard]] virtual Type                    getType() const                                       = 0;
    [[nodiscard]] virtual CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const = 0;

protected:
    explicit CustomFormElement(std::string name) : mName(std::move(name)) {}
    virtual ~CustomFormElement() = default;

    [[nodiscard]] virtual nlohmann::ordered_json serialize() const = 0;

    friend class CustomForm;
};
} // namespace ll::form
