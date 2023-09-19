#include "SimpleForm.h"
#include <liteloader/core/LiteLoader.h>

namespace ll::form {

class SimpleFormElement {
protected:
    virtual ~SimpleFormElement()  = default;
    virtual fifo_json serialize() = 0;
    friend class SimpleForm;
};

class Button : public SimpleFormElement {

public:
    using ButtonCallback = std::function<void(Player&)>;

    std::string    mText;
    std::string    mImage;
    ButtonCallback mCallback;

    explicit Button(std::string text, std::string image = "", ButtonCallback callback = ButtonCallback())
    : mText(std::move(text)), mImage(std::move(image)), mCallback(std::move(callback)) {}
    ~Button() override = default;

    void callback(Player& player) {
        if (mCallback) {
            mCallback(player);
        }
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
    using Callback = std::function<void(Player&, int)>;

    std::string                                     mTitle;
    std::string                                     mContent;
    std::vector<std::shared_ptr<SimpleFormElement>> mElements{};
    Callback                                        mCallback;

    const Callback defaultCallback = [&](Player& player, int selected) {
        if (selected >= 0 && selected < static_cast<int>(mElements.size())) {
            auto& e = mElements[selected];
            if (e /* && e->getType() == SimpleFormElement::Type::Button */) {
                auto* button = reinterpret_cast<Button*>(e.get());
                button->callback(player);
            }
        }
    };

    explicit SimpleFormImpl(std::string title, std::string content = "")
    : mTitle(std::move(title)), mContent(std::move(content)) {}

    void setTitle(const std::string& title) { mTitle = title; }

    void setContent(const std::string& content) { mContent = content; }

    void append(const std::shared_ptr<SimpleFormElement>& element) { mElements.push_back(element); }

    void appendButton(
        const std::string&     text,
        const std::string&     image    = "",
        Button::ButtonCallback callback = Button::ButtonCallback()
    ) {
        append(std::make_shared<Button>(text, image, std::move(callback)));
    }

    bool sendTo(Player& player, Callback callback) { // NOLINT
        // TODO
        return false;
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
                if (!element.empty()) {
                    form["buttons"].push_back(element);
                }
            }
            return form.dump();
        } catch (const fifo_json::exception&) {
            ll::logger.error("Failed to serialize SimpleForm");
            return fifo_json{};
        }
    }
};

SimpleForm::SimpleForm(const std::string& title, const std::string& content) {
    impl = std::make_unique<SimpleFormImpl>(title, content);
}

SimpleForm& SimpleForm::setTitle(const std::string& title) {
    impl->setTitle(title);
    return *this;
}

SimpleForm& SimpleForm::setContent(const std::string& content) {
    impl->setContent(content);
    return *this;
}

SimpleForm& SimpleForm::appendButton(const std::string& text, const std::string& image, ButtonCallback callback) {
    impl->appendButton(text, image, std::move(callback));
    return *this;
}

SimpleForm& SimpleForm::sendTo(Player& player, Callback callback) {
    if (!callback) {
        callback = impl->defaultCallback;
    }
    impl->sendTo(player, std::move(callback));
    return *this;
}

} // namespace ll::form