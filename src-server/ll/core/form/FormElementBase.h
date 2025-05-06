#pragma once

#include "nlohmann/json.hpp"

namespace ll::form {

class FormElementBase {
public:
    enum class Category { None = -1, Common, Custom, Simple };
    enum class Type { None = -1, Label, Input, Toggle, Dropdown, Slider, StepSlider, Button, Header, Divider };

    [[nodiscard]] virtual Type     getType() const     = 0;
    [[nodiscard]] virtual Category getCategory() const = 0;

protected:
    explicit FormElementBase()                                     = default;
    virtual ~FormElementBase()                                     = default;
    [[nodiscard]] virtual nlohmann::ordered_json serialize() const = 0;

    friend class CustomForm;
    friend class SimpleForm;
};

} // namespace ll::form
