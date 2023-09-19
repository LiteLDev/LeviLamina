#pragma once

#include "liteloader/api/utils/FifoJson.h"

namespace ll::form {

enum class FormType { None = -1, SimpleForm, ModalForm, CustomForm };

class Form {
protected:
    virtual ~Form() = default;
};

class FormImpl {
protected:
    virtual ~FormImpl()                               = default;
    [[nodiscard]] virtual FormType  getType() const   = 0;
    [[nodiscard]] virtual fifo_json serialize() const = 0;
};

} // namespace ll::form