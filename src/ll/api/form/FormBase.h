#pragma once

namespace ll::form {

enum class FormType { None = -1, SimpleForm, ModalForm, CustomForm };

class Form {
protected:
    virtual ~Form() = default;
};

} // namespace ll::form
