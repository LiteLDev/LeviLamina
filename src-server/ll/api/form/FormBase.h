#pragma once

#include "mc/network/packet/ModalFormCancelReason.h"
#include "mc/world/actor/player/Player.h"

namespace ll::form {

enum class FormType { None = -1, SimpleForm, ModalForm, CustomForm };

using FormCancelReason = std::optional<ModalFormCancelReason>;

class Form {
protected:
    virtual ~Form() = default;

public:
    using RawFormCallback = std::function<void(Player&, std::optional<std::string>, FormCancelReason)>;

    LLAPI static bool sendRawTo(Player& player, std::string const& formData, RawFormCallback callback = {});

    LLAPI static bool sendRawUpdate(Player& player, std::string const& formData, RawFormCallback callback = {});
};

} // namespace ll::form
