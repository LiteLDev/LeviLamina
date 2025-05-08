#pragma once

#include "ll/api/form/CustomForm.h"
#include "ll/core/form/FormElementBase.h"

namespace ll::form {

class CustomFormElement : public FormElementBase {
public:
    std::string mName{};
    std::string mText{};

    [[nodiscard]] Category                        getCategory() const override { return Category::Custom; }
    [[nodiscard]] virtual CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const = 0;

protected:
    explicit CustomFormElement(std::string name, std::string text)
    : FormElementBase(),
      mName(std::move(name)),
      mText(std::move(text)) {}
    virtual ~CustomFormElement() override = default;

    [[nodiscard]] inline nlohmann::ordered_json serialize() const override {
        nlohmann::ordered_json data{
            {"text", mText}
        };
        return data;
    }
};

} // namespace ll::form
