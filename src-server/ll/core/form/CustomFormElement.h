#pragma once

#include "ll/api/form/CustomForm.h"
#include "ll/core/form/FormElementBase.h"
#include <string>


namespace ll::form {

class CustomFormElement : public FormElementBase {
public:
    std::string mName{};

    [[nodiscard]] Category                        getCategory() const override { return Category::Custom; }
    [[nodiscard]] virtual CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const = 0;

protected:
    explicit CustomFormElement(std::string name) : FormElementBase(), mName(std::move(name)) {}
    virtual ~CustomFormElement() override = default;
};

} // namespace ll::form
