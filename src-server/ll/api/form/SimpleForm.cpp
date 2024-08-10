#include "SimpleForm.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/form/FormHandler.h"
#include "ll/core/form/FormImplBase.h"
#include "mc/network/packet/ModalFormRequestPacket.h"

namespace ll::form {

class Button {

public:
    struct ButtonImage {
        std::string data{};
        std::string type{"path"};
    };

    using ButtonCallback = SimpleForm::ButtonCallback;

    std::string                mText{};
    std::optional<ButtonImage> mImage;
    ButtonCallback             mCallback;

    explicit Button(std::string text, ButtonCallback callback = ButtonCallback())
    : mText(std::move(text)),
      mCallback(std::move(callback)) {}

    explicit Button(
        std::string    text,
        std::string    imageData,
        std::string    imageType,
        ButtonCallback callback = ButtonCallback()
    )
    : mText(std::move(text)),
      mImage({std::move(imageData), std::move(imageType)}),
      mCallback(std::move(callback)) {}
    ~Button() = default;

    void callback(Player& player) {
        if (mCallback) {
            mCallback(player);
        }
    }

    [[nodiscard]] nlohmann::ordered_json serialize() const {
        nlohmann::ordered_json button;
        button["text"] = mText;
        if (mImage.has_value()) {
            button["image"] = {
                {"type", mImage->type},
                {"data", mImage->data}
            };
        }
        return button;
    }
};

class SimpleForm::SimpleFormImpl : public FormImpl {
private:
    std::string         mTitle{};
    std::string         mContent{};
    std::vector<Button> mElements{};

public:
    using Callback = SimpleForm::Callback;

    SimpleFormImpl() = default;

    explicit SimpleFormImpl(std::string title, std::string content = {})
    : mTitle(std::move(title)),
      mContent(std::move(content)) {}

    void setTitle(std::string const& title) { mTitle = title; }

    void setContent(std::string const& content) { mContent = content; }

    void appendButton(std::string const& text, Button::ButtonCallback callback = Button::ButtonCallback()) {
        mElements.emplace_back(text, std::move(callback));
    }

    void appendButton(
        std::string const&     text,
        std::string const&     imageData,
        std::string const&     imageType,
        Button::ButtonCallback callback = Button::ButtonCallback()
    ) {
        mElements.emplace_back(text, imageData, imageType, std::move(callback));
    }

    void sendTo(Player& player, Callback callback) {
        std::vector<SimpleForm::ButtonCallback> buttonCallbacks;
        buttonCallbacks.reserve(mElements.size());
        for (auto& e : mElements) {
            buttonCallbacks.push_back(e.mCallback);
        }
        uint id =
            handler::addFormHandler(std::make_unique<handler::SimpleFormHandler>(std::move(callback), buttonCallbacks));
        auto json = serialize();
        ModalFormRequestPacket(id, json.dump()).sendTo(player);
    }

protected:
    [[nodiscard]] FormType getType() const override { return FormType::SimpleForm; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        nlohmann::ordered_json form = {
            {"title",   mTitle                         },
            {"type",    "form"                         },
            {"content", mContent                       },
            {"buttons", nlohmann::ordered_json::array()}
        };
        for (auto& e : mElements) {
            nlohmann::ordered_json element = e.serialize();
            if (!element.empty()) {
                form["buttons"].push_back(element);
            }
        }
        return form;
    }
};

SimpleForm::SimpleForm() : impl(std::make_unique<SimpleFormImpl>()) {}

SimpleForm::SimpleForm(std::string const& title, std::string const& content)
: impl(std::make_unique<SimpleFormImpl>(title, content)) {}

SimpleForm::~SimpleForm() = default;

SimpleForm& SimpleForm::setTitle(std::string const& title) {
    impl->setTitle(title);
    return *this;
}

SimpleForm& SimpleForm::setContent(std::string const& content) {
    impl->setContent(content);
    return *this;
}

SimpleForm& SimpleForm::appendButton(
    std::string const& text,
    std::string const& imageData,
    std::string const& imageType,
    ButtonCallback     callback
) {
    impl->appendButton(text, imageData, imageType, std::move(callback));
    return *this;
}

SimpleForm& SimpleForm::appendButton(std::string const& text, ButtonCallback callback) {
    impl->appendButton(text, std::move(callback));
    return *this;
}

SimpleForm& SimpleForm::sendTo(Player& player, Callback callback) {
    impl->sendTo(player, std::move(callback));
    return *this;
}

} // namespace ll::form
