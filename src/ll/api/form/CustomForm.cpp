
#include <utility>

#include "ll/api/form/CustomForm.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/form/CustomFormElement.h"
#include "ll/core/form/FormHandler.h"
#include "ll/core/form/FormImplBase.h"
#include "mc/network/packet/ModalFormRequestPacket.h"

namespace ll::form {

class Label : public CustomFormElement {

public:
    std::string mText{};

    explicit Label(std::string text) : CustomFormElement({}), mText(std::move(text)) {}
    ~Label() override = default;

    [[nodiscard]] Type getType() const override { return Type::Label; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        return {
            {"type", "label"},
            {"text", mText  }
        };
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const&) const override { return {}; }
};

class Input : public CustomFormElement {

public:
    std::string mText{};
    std::string mPlaceholder{};
    std::string mDefault{};

    Input(std::string name, std::string text, std::string placeholder = {}, std::string defaultVal = {})
    : CustomFormElement(std::move(name)),
      mText(std::move(text)),
      mPlaceholder(std::move(placeholder)),
      mDefault(std::move(defaultVal)) {}
    ~Input() override = default;

    [[nodiscard]] Type getType() const override { return Type::Input; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        nlohmann::ordered_json input = {
            {"type", "input"},
            {"text", mText  }
        };
        if (!mPlaceholder.empty()) {
            input["placeholder"] = mPlaceholder;
        }
        if (!mDefault.empty()) {
            input["default"] = mDefault;
        }
        return input;
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const override {
        return data.get<std::string>();
    }
};

class Toggle : public CustomFormElement {

public:
    std::string mText{};
    bool        mDefault = false;

    Toggle(std::string name, std::string text, bool defaultVal = false)
    : CustomFormElement(std::move(name)),
      mText(std::move(text)),
      mDefault(defaultVal) {}
    ~Toggle() override = default;

    [[nodiscard]] Type getType() const override { return Type::Toggle; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        return {
            {"type",    "toggle"},
            {"text",    mText   },
            {"default", mDefault}
        };
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const override {
        return data.get<bool>();
    }
};

class Dropdown : public CustomFormElement {

public:
    std::string              mText{};
    std::vector<std::string> mOptions{};
    size_t                   mDefault{};

    Dropdown(std::string name, std::string text, std::vector<std::string> options, size_t defaultVal = 0)
    : CustomFormElement(std::move(name)),
      mText(std::move(text)),
      mOptions(std::move(options)),
      mDefault(defaultVal) {}
    ~Dropdown() override = default;

    [[nodiscard]] Type getType() const override { return Type::Dropdown; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        return {
            {"type",    "dropdown"},
            {"text",    mText     },
            {"options", mOptions  },
            {"default", mDefault  }
        };
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const override {
        return mOptions[data.get<int>()];
    }
};

class Slider : public CustomFormElement {

public:
    std::string mText{};
    double      mMin     = 0.0;
    double      mMax     = 0.0;
    double      mStep    = 1.0;
    double      mDefault = 0.0;

    [[nodiscard]] bool isValid() const { return mMin <= mMax && mStep > 0.0 && mDefault >= mMin && mDefault <= mMax; }

    void validate() {
        if (mMin > mMax) {
            std::swap(mMin, mMax);
        }
        if (mStep <= 0.0) {
            mStep = 1.0;
        }
        if (mDefault < mMin) {
            mDefault = mMin;
        } else if (mDefault > mMax) {
            mDefault = mMax;
        }
    }

    Slider(std::string name, std::string text, double min, double max, double step, double defaultVal)
    : CustomFormElement(std::move(name)),
      mText(std::move(text)),
      mMin(min),
      mMax(max),
      mStep(step),
      mDefault(defaultVal) {
        validate();
    }
    ~Slider() override = default;

    [[nodiscard]] Type getType() const override { return Type::Slider; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        if (!isValid()) {
            ll::logger.error("Failed to serialize Slider: invalid data");
            return {};
        }
        return {
            {"type",    "slider"},
            {"text",    mText   },
            {"min",     mMin    },
            {"max",     mMax    },
            {"step",    mStep   },
            {"default", mDefault}
        };
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const override {
        return data.get<double>();
    }
};

class StepSlider : public CustomFormElement {

public:
    std::string              mText{};
    std::vector<std::string> mSteps{};
    size_t                   mDefault = 0;

    [[nodiscard]] bool isValid() const { return !mSteps.empty() && mDefault < mSteps.size(); }

    void validate() {
        if (mDefault >= mSteps.size()) {
            mDefault = mSteps.size() - 1;
        }
    }

    StepSlider(std::string name, std::string text, std::vector<std::string> steps, size_t defaultVal = 0)
    : CustomFormElement(std::move(name)),
      mText(std::move(text)),
      mSteps(std::move(steps)),
      mDefault(defaultVal) {
        validate();
    }
    ~StepSlider() override = default;

    [[nodiscard]] Type getType() const override { return Type::StepSlider; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        if (!isValid()) {
            ll::logger.error("Failed to serialize StepSlider: invalid data");
            return {};
        }
        return {
            {"type",    "step_slider"},
            {"text",    mText        },
            {"steps",   mSteps       },
            {"default", mDefault     }
        };
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const override {
        return mSteps[data.get<int>()];
    }
};

class CustomForm::CustomFormImpl : public FormImpl {
private:
    std::string                                     mTitle{};
    std::vector<std::shared_ptr<CustomFormElement>> mElements{};

public:
    using Callback = CustomForm::Callback;

    CustomFormImpl() = default;

    explicit CustomFormImpl(std::string title) : mTitle(std::move(title)) {}

    void setTitle(std::string const& title) { mTitle = title; }

    void append(const std::shared_ptr<CustomFormElement>& element) { mElements.push_back(element); }

    void sendTo(Player& player, Callback callback) {
        uint id = handler::addFormHandler(std::make_unique<handler::CustomFormHandler>(std::move(callback), mElements));
        auto json = serialize();
        ModalFormRequestPacket(id, json.dump()).sendTo(player);
    }

protected:
    [[nodiscard]] FormType getType() const override { return FormType::CustomForm; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        nlohmann::ordered_json form = {
            {"title",   mTitle                         },
            {"type",    "custom_form"                  },
            {"content", nlohmann::ordered_json::array()}
        };
        for (auto& e : mElements) {
            nlohmann::ordered_json element = e->serialize();
            if (!element.empty()) {
                form["content"].push_back(element);
            }
        }
        return form;
    }
};

CustomForm::CustomForm() : impl(std::make_unique<CustomFormImpl>()) {}

CustomForm::CustomForm(std::string const& title) : impl(std::make_unique<CustomFormImpl>(title)) {}

CustomForm::~CustomForm() = default;

CustomForm& CustomForm::setTitle(std::string const& title) {
    impl->setTitle(title);
    return *this;
}

CustomForm& CustomForm::appendLabel(std::string const& text) {
    impl->append(std::make_shared<Label>(text));
    return *this;
}

CustomForm& CustomForm::appendInput(
    std::string const& name,
    std::string const& text,
    std::string const& placeholder,
    std::string const& defaultVal
) {
    impl->append(std::make_shared<Input>(name, text, placeholder, defaultVal));
    return *this;
}

CustomForm& CustomForm::appendToggle(std::string const& name, std::string const& text, bool defaultVal) {
    impl->append(std::make_shared<Toggle>(name, text, defaultVal));
    return *this;
}

CustomForm& CustomForm::appendDropdown(
    std::string const&              name,
    std::string const&              text,
    std::vector<std::string> const& options,
    size_t                          defaultVal
) {
    impl->append(std::make_shared<Dropdown>(name, text, options, defaultVal));
    return *this;
}

CustomForm& CustomForm::appendSlider(
    std::string const& name,
    std::string const& text,
    double             min,
    double             max,
    double             step,
    double             defaultVal
) {
    impl->append(std::make_shared<Slider>(name, text, min, max, step, defaultVal));
    return *this;
}

CustomForm& CustomForm::appendStepSlider(
    std::string const&              name,
    std::string const&              text,
    std::vector<std::string> const& steps,
    size_t                          defaultVal
) {
    impl->append(std::make_shared<StepSlider>(name, text, steps, defaultVal));
    return *this;
}

CustomForm& CustomForm::sendTo(Player& player, Callback callback) {
    impl->sendTo(player, std::move(callback));
    return *this;
}

} // namespace ll::form
