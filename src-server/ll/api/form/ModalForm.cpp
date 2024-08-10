#include "ModalForm.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/form/FormHandler.h"
#include "ll/core/form/FormImplBase.h"
#include "mc/network/packet/ModalFormRequestPacket.h"

namespace ll::form {

class ModalForm::ModalFormImpl : public FormImpl {
private:
    std::string mTitle{};
    std::string mContent{};
    std::string mUpperButton{};
    std::string mLowerButton{};

public:
    using Callback = ModalForm::Callback;

    ModalFormImpl() = default;

    ModalFormImpl(std::string title, std::string content, std::string upperButton, std::string lowerButton)
    : mTitle(std::move(title)),
      mContent(std::move(content)),
      mUpperButton(std::move(upperButton)),
      mLowerButton(std::move(lowerButton)) {}

    ~ModalFormImpl() override = default;

    void setTitle(std::string const& title) { mTitle = title; }

    void setContent(std::string const& content) { mContent = content; }

    void setUpperButton(std::string const& upperButton) { mUpperButton = upperButton; }

    void setLowerButton(std::string const& lowerButton) { mLowerButton = lowerButton; }

    bool sendTo(Player& player, Callback callback) {
        uint id   = handler::addFormHandler(std::make_unique<handler::ModalFormHandler>(std::move(callback)));
        auto json = serialize();
        ModalFormRequestPacket(id, json.dump()).sendTo(player);
        return true;
    }

protected:
    [[nodiscard]] FormType getType() const override { return FormType::ModalForm; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        return {
            {"type",    "modal"     },
            {"title",   mTitle      },
            {"content", mContent    },
            {"button1", mUpperButton},
            {"button2", mLowerButton}
        };
    }
};

ModalForm::ModalForm() : impl(std::make_unique<ModalFormImpl>()) {}

ModalForm::ModalForm(std::string title, std::string content, std::string upperButton, std::string lowerButton)
: impl(std::make_unique<ModalFormImpl>(
      std::move(title),
      std::move(content),
      std::move(upperButton),
      std::move(lowerButton)
  )) {}

ModalForm::~ModalForm() = default;

ModalForm& ModalForm::setTitle(std::string const& title) {
    impl->setTitle(title);
    return *this;
}

ModalForm& ModalForm::setContent(std::string const& content) {
    impl->setContent(content);
    return *this;
}

ModalForm& ModalForm::setUpperButton(std::string const& upperButton) {
    impl->setUpperButton(upperButton);
    return *this;
}

ModalForm& ModalForm::setLowerButton(std::string const& lowerButton) {
    impl->setLowerButton(lowerButton);
    return *this;
}

bool ModalForm::sendTo(Player& player, Callback callback) { return impl->sendTo(player, std::move(callback)); }

} // namespace ll::form
