#include "ModalForm.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/form/FormHandler.h"
#include "ll/core/form/FormImplBase.h"
#include "mc/network/packet/ModalFormRequestPacket.h"

namespace ll::form {

class ModalForm::ModalFormImpl : public FormImpl {
public:
    using Callback = ModalForm::Callback;

    std::string mTitle{};
    std::string mContent{};
    std::string mUpperButton{};
    std::string mLowerButton{};
    Callback    mCallback{};

    ModalFormImpl() = default;

    ModalFormImpl(
        std::string title,
        std::string content,
        std::string upperButton,
        std::string lowerButton,
        Callback    callback = Callback()
    )
    : mTitle(std::move(title)),
      mContent(std::move(content)),
      mUpperButton(std::move(upperButton)),
      mLowerButton(std::move(lowerButton)),
      mCallback(std::move(callback)) {}
    ~ModalFormImpl() override = default;

    void setTitle(std::string const& title) { mTitle = title; }

    void setContent(std::string const& content) { mContent = content; }

    void setUpperButton(std::string const& upperButton) { mUpperButton = upperButton; }

    void setLowerButton(std::string const& lowerButton) { mLowerButton = lowerButton; }

    void setCallback(Callback callback) { mCallback = std::move(callback); }

    bool sendTo(Player& player, Callback callback) {
        callback = callback ? std::move(callback) : mCallback;
        if (!callback) {
            ll::logger.error("ModalForm callback is null");
            return false;
        }
        uint id   = handler::addFormHandler(std::make_unique<handler::ModalFormHandler>(std::move(callback)));
        auto json = serialize();
        if (json.is_null()) {
            return false;
        }
        ModalFormRequestPacket(id, json.dump()).sendTo(player);
        return true;
    }

protected:
    [[nodiscard]] FormType getType() const override { return FormType::ModalForm; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        try {
            return {
                {"type",    "modal"     },
                {"title",   mTitle      },
                {"content", mContent    },
                {"button1", mUpperButton},
                {"button2", mLowerButton}
            };
        } catch (...) {
            ll::logger.error("Failed to serialize ModalForm");
            return nlohmann::ordered_json{};
        }
    }
};

ModalForm::ModalForm() : impl(std::make_unique<ModalFormImpl>()) {}

ModalForm::ModalForm(
    std::string title,
    std::string content,
    std::string upperButton,
    std::string lowerButton,
    Callback    callback
)
: impl(std::make_unique<ModalFormImpl>(
    std::move(title),
    std::move(content),
    std::move(upperButton),
    std::move(lowerButton),
    std::move(callback)
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

ModalForm& ModalForm::setCallback(Callback callback) {
    impl->setCallback(std::move(callback));
    return *this;
}

bool ModalForm::sendTo(Player& player, Callback callback) { return impl->sendTo(player, std::move(callback)); }

} // namespace ll::form
