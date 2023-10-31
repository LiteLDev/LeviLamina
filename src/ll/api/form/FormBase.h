#pragma once

#include "nlohmann/json.hpp"

namespace ll::form {

enum class FormType { None = -1, SimpleForm, ModalForm, CustomForm };

class Form {
protected:
    virtual ~Form() = default;
};

class FormImpl {
protected:
    virtual ~FormImpl()                                            = default;
    [[nodiscard]] virtual FormType               getType() const   = 0;
    [[nodiscard]] virtual nlohmann::ordered_json serialize() const = 0;
};

} // namespace ll::form