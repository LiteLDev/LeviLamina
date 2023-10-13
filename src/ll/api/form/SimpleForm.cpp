#include "SimpleForm.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/form/FormHandler.h"
#include "mc/network/packet/ModalFormRequestPacket.h"

namespace ll::form {

class SimpleFormElement {
protected:
    virtual ~SimpleFormElement()  = default;
    virtual fifo_json serialize() = 0;
    friend class SimpleForm;
};

class Button : public SimpleFormElement {

public:
    using ButtonCallback = SimpleForm::ButtonCallback;

    std::string    mText;
    std::string    mImage;
    ButtonCallback mCallback;

    explicit Button(std::string text, std::string image = "", ButtonCallback callback = ButtonCallback())
    : mText(std::move(text)),
      mImage(std::move(image)),
      mCallback(std::move(callback)) {}
    ~Button() override = default;

    void callback(Player& player) {
        if (mCallback) { mCallback(player); }
    }

protected:
    fifo_json serialize() override {
        try {
            fifo_json button;
            button["text"] = mText;
            if (!mImage.empty()) {
                button["image"] = {
                    {"type", mImage.find("textures/") == 0 ? "path" : "url"},
                    {"data", mImage                                        }
                };
            }
            return button;
        } catch (...) {
            ll::logger.error("Failed to serialize Button");
            return fifo_json{};
        }
    }
};

class SimpleForm::SimpleFormImpl : public FormImpl {

public:
    using Callback = SimpleForm::Callback;

    std::string                                     mTitle;
    std::string                                     mContent;
    std::vector<std::shared_ptr<SimpleFormElement>> mElements{};
    Callback                                        mCallback;

    explicit SimpleFormImpl(std::string title, std::string content = "")
    : mTitle(std::move(title)),
      mContent(std::move(content)) {}

    void setTitle(std::string const& title) { mTitle = title; }

    void setContent(std::string const& content) { mContent = content; }

    void append(const std::shared_ptr<SimpleFormElement>& element) { mElements.push_back(element); }

    void appendButton(
        std::string const&     text,
        std::string const&     image    = "",
        Button::ButtonCallback callback = Button::ButtonCallback()
    ) {
        append(std::make_shared<Button>(text, image, std::move(callback)));
    }

    bool sendTo(Player& player, Callback callback) {
        callback = callback ? std::move(callback) : mCallback;
        if (!callback) {
            ll::logger.error("SimpleForm callback is null");
            return false;
        }
        std::vector<SimpleForm::ButtonCallback> buttonCallbacks;
        buttonCallbacks.reserve(mElements.size());
        for (auto& e : mElements) {
            // Currently, SimpleFormElement can only be Button
            buttonCallbacks.push_back(((Button*)e.get())->mCallback);
        }
        uint id =
            handler::addFormHandler(std::make_unique<handler::SimpleFormHandler>(std::move(callback), buttonCallbacks));
        auto json = serialize();
        if (json.is_null()) { return false; }
        ModalFormRequestPacket(id, json.dump()).sendTo(player);
        return true;
    }

protected:
    [[nodiscard]] FormType getType() const override { return FormType::SimpleForm; }

    [[nodiscard]] fifo_json serialize() const override {
        try {
            fifo_json form = {
                {"title",   mTitle            },
                {"type",    "form"            },
                {"content", mContent          },
                {"buttons", fifo_json::array()}
            };
            for (auto& e : mElements) {
                fifo_json element = e->serialize();
                if (!element.empty()) { form["buttons"].push_back(element); }
            }
            return form.dump();
        } catch (fifo_json::exception const&) {
            ll::logger.error("Failed to serialize SimpleForm");
            return fifo_json{};
        }
    }
};

SimpleForm::SimpleForm(std::string const& title, std::string const& content)
: impl(std::make_unique<SimpleFormImpl>(title, content)) {}

SimpleForm& SimpleForm::setTitle(std::string const& title) {
    impl->setTitle(title);
    return *this;
}

SimpleForm& SimpleForm::setContent(std::string const& content) {
    impl->setContent(content);
    return *this;
}

SimpleForm& SimpleForm::appendButton(std::string const& text, std::string const& image, ButtonCallback callback) {
    impl->appendButton(text, image, std::move(callback));
    return *this;
}

SimpleForm& SimpleForm::sendTo(Player& player, Callback callback) {
    impl->sendTo(player, std::move(callback));
    return *this;
}

} // namespace ll::form