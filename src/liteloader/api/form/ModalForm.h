#pragma once

#include "FormBase.h"
#include "mc/world/actor/player/Player.h"


namespace ll::form {

class ModalForm : public Form {

    class ModalFormImpl;
    std::unique_ptr<ModalFormImpl> impl{};

public:
    using Callback = std::function<void(Player&, bool)>;

    LLAPI ModalForm(
        std::string title,
        std::string content,
        std::string buttonLeft,
        std::string buttonRight,
        Callback    callback = Callback()
    );
    ~ModalForm() override = default;

    LLAPI ModalForm& setTitle(const std::string& title);

    LLAPI ModalForm& setContent(const std::string& content);

    LLAPI ModalForm& setButtonLeft(const std::string& buttonLeft);

    LLAPI ModalForm& setButtonRight(const std::string& buttonRight);

    LLAPI ModalForm& setCallback(Callback callback);

    LLAPI bool sendTo(Player& player, Callback callback = Callback());

    static constexpr bool BUTTON_LEFT  = false;
    static constexpr bool BUTTON_RIGHT = true;
};

} // namespace ll::form