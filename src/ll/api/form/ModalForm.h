#pragma once

#include "FormBase.h"
#include "mc/world/actor/player/Player.h"


namespace ll::form {

enum class ModalFormSelectedButton : bool {
    Upper = true,
    Lower = false,
};

using ModalFormResult = std::optional<ModalFormSelectedButton>;

class ModalForm : public Form {

    class ModalFormImpl;
    std::unique_ptr<ModalFormImpl> impl;

public:
    using Callback = std::function<void(Player&, ModalFormResult, FormCancelReason)>;

    LLNDAPI ModalForm();

    LLNDAPI ModalForm(std::string title, std::string content, std::string upperButton, std::string lowerButton);

    LLAPI ~ModalForm() override;

    LLAPI ModalForm& setTitle(std::string const& title);

    LLAPI ModalForm& setContent(std::string const& content);

    LLAPI ModalForm& setUpperButton(std::string const& upperButton);

    LLAPI ModalForm& setLowerButton(std::string const& lowerButton);

    LLAPI bool sendTo(Player& player, Callback callback = {});
};

} // namespace ll::form
