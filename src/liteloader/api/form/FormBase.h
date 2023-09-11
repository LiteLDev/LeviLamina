#pragma once

#include "liteloader/api/types/FifoJson.h"

namespace ll::form {

enum class FormType {
    None = -1,
    SimpleForm,
    ModalForm,
    CustomForm
};

class FormImpl {
protected:
    virtual ~FormImpl() = default;
    virtual FormType getType() const = 0;
    virtual fifo_json serialize() = 0;
};

} // namespace ll::form