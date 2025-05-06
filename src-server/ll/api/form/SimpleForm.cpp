#include "ll/api/form/SimpleForm.h"
#include "ll/core/form/CommonFormElements.h"
#include "ll/core/form/FormHandler.h"
#include "ll/core/form/FormImplBase.h"
#include "mc/network/packet/ModalFormRequestPacket.h"
#include <utility>

namespace ll::form {

class Button : public FormElementBase {

public:
    using ButtonCallback = SimpleForm::ButtonCallback;

    std::string                mText{};
    std::optional<ButtonImage> mImage;
    ButtonCallback             mCallback;

    explicit Button(std::string text, ButtonCallback callback = ButtonCallback())
    : FormElementBase(),
      mText(std::move(text)),
      mCallback(std::move(callback)) {}

    explicit Button(
        std::string    text,
        std::string    imageData,
        std::string    imageType,
        ButtonCallback callback = ButtonCallback()
    )
    : FormElementBase(),
      mText(std::move(text)),
      mImage({std::move(imageData), std::move(imageType)}),
      mCallback(std::move(callback)) {}
    ~Button() override = default;

    [[nodiscard]] Type     getType() const override { return Type::Button; }
    [[nodiscard]] Category getCategory() const override { return Category::Simple; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        nlohmann::ordered_json button{
            {"type", "button"},
            {"text",    mText}
        };
        if (mImage.has_value()) {
            button["image"] = {
                {"type", mImage->type},
                {"data", mImage->data}
            };
        }
        return button;
    }

    void callback(Player& player) {
        if (mCallback) {
            mCallback(player);
        }
    }
};

class SimpleForm::SimpleFormImpl : public FormImpl {
private:
    std::string                                   mTitle{};
    std::string                                   mContent{};
    std::vector<std::shared_ptr<FormElementBase>> mElements{};

public:
    using Callback = SimpleForm::Callback;

    SimpleFormImpl() = default;

    explicit SimpleFormImpl(std::string title, std::string content = {})
    : mTitle(std::move(title)),
      mContent(std::move(content)) {}

    void setTitle(std::string const& title) { mTitle = title; }

    void setContent(std::string const& content) { mContent = content; }

    void append(std::shared_ptr<FormElementBase> const& element) { mElements.push_back(element); }

    void sendTo(Player& player, Callback callback) {
        std::vector<SimpleForm::ButtonCallback> buttonCallbacks;
        buttonCallbacks.reserve(mElements.size());
        for (auto& element : mElements) {
            if (element->getCategory() == FormElementBase::Category::Simple)
                buttonCallbacks.push_back(reinterpret_cast<Button*>(element.get())->mCallback);
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
            {   "title",                          mTitle},
            {    "type",                          "form"},
            { "content",                        mContent},
            {"elements", nlohmann::ordered_json::array()}
        };
        for (auto& e : mElements) {
            nlohmann::ordered_json element = e->serialize();
            if (!element.empty()) {
                form["elements"].push_back(element);
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

SimpleForm& SimpleForm::appendHeader(std::string const& text) {
    impl->append(std::make_shared<Header>(text));
    return *this;
}

SimpleForm& SimpleForm::appendLabel(std::string const& text) {
    impl->append(std::make_shared<Label>(text));
    return *this;
}

SimpleForm& SimpleForm::appendDivider() {
    impl->append(std::make_shared<Divider>());
    return *this;
}

SimpleForm& SimpleForm::appendButton(
    std::string const& text,
    std::string const& imageData,
    std::string const& imageType,
    ButtonCallback     callback
) {
    impl->append(std::make_shared<Button>(text, imageData, imageType, std::move(callback)));
    return *this;
}

SimpleForm& SimpleForm::appendButton(std::string const& text, ButtonCallback callback) {
    impl->append(std::make_shared<Button>(text, std::move(callback)));
    return *this;
}

SimpleForm& SimpleForm::sendTo(Player& player, Callback callback) {
    impl->sendTo(player, std::move(callback));
    return *this;
}

} // namespace ll::form
