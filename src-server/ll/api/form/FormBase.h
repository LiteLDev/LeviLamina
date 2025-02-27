#pragma once

#include "mc/network/packet/ModalFormCancelReason.h"

namespace ll::form {

enum class FormType { None = -1, SimpleForm, ModalForm, CustomForm };

using FormCancelReason = std::optional<ModalFormCancelReason>;

class Form {
protected:
    virtual ~Form() = default;
};

} // namespace ll::form
