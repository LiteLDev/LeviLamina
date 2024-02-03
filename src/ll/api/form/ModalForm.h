#pragma once

#include "FormBase.h"
#include "mc/world/actor/player/Player.h"


namespace ll::form {

class ModalForm : public Form {

    class ModalFormImpl;
    std::unique_ptr<ModalFormImpl> impl;

public:
    using Callback = std::function<void(Player&, bool)>;

    LLNDAPI ModalForm();

    LLNDAPI ModalForm(
        std::string title,
        std::string content,
        std::string buttonLeft,
        std::string buttonRight,
        Callback    callback = Callback()
    );
    LLAPI ~ModalForm() override;

    LLAPI ModalForm& setTitle(std::string const& title);

    LLAPI ModalForm& setContent(std::string const& content);

    LLAPI ModalForm& setButtonLeft(std::string const& buttonLeft);

    LLAPI ModalForm& setButtonRight(std::string const& buttonRight);

    LLAPI ModalForm& setCallback(Callback callback);

    LLAPI bool sendTo(Player& player, Callback callback = Callback());

    static constexpr bool BUTTON_LEFT  = false;
    static constexpr bool BUTTON_RIGHT = true;
};

} // namespace ll::form
