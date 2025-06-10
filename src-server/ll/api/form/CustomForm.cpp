
#include "ll/api/form/CustomForm.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/form/CommonFormElements.h"
#include "ll/core/form/CustomFormElement.h"
#include "ll/core/form/FormHandler.h"
#include "ll/core/form/FormImplBase.h"

namespace ll::form {

class Input : public CustomFormElement {

public:
    std::string mPlaceholder{};
    std::string mDefault{};

    Input(
        std::string name,
        std::string text,
        std::string placeholder = {},
        std::string defaultVal  = {},
        std::string tooltip     = {}
    )
    : CustomFormElement(std::move(name), std::move(text), std::move(tooltip)),
      mPlaceholder(std::move(placeholder)),
      mDefault(std::move(defaultVal)) {}
    ~Input() override = default;

    [[nodiscard]] Type getType() const override { return Type::Input; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        auto data = CustomFormElement::serialize();
        data.update({
            {"type", "input"},
        });
        if (!mPlaceholder.empty()) {
            data["placeholder"] = mPlaceholder;
        }
        if (!mDefault.empty()) {
            data["default"] = mDefault;
        }
        return data;
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const override {
        return data.get<std::string>();
    }
};

class Toggle : public CustomFormElement {

public:
    bool mDefault = false;

    Toggle(std::string name, std::string text, bool defaultVal = false, std::string tooltip = {})
    : CustomFormElement(std::move(name), std::move(text), std::move(tooltip)),
      mDefault(defaultVal) {}
    ~Toggle() override = default;

    [[nodiscard]] Type getType() const override { return Type::Toggle; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        auto data = CustomFormElement::serialize();
        data.update({
            {   "type", "toggle"},
            {"default", mDefault}
        });
        return data;
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const override {
        return data.get<bool>();
    }
};

class Dropdown : public CustomFormElement {

public:
    std::vector<std::string> mOptions{};
    size_t                   mDefault{};

    Dropdown(
        std::string              name,
        std::string              text,
        std::vector<std::string> options,
        size_t                   defaultVal = 0,
        std::string              tooltip    = {}
    )
    : CustomFormElement(std::move(name), std::move(text), std::move(tooltip)),
      mOptions(std::move(options)),
      mDefault(defaultVal) {}
    ~Dropdown() override = default;

    [[nodiscard]] Type getType() const override { return Type::Dropdown; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        auto data = CustomFormElement::serialize();
        data.update({
            {   "type", "dropdown"},
            {"options",   mOptions},
            {"default",   mDefault}
        });
        return data;
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const override {
        if (!data.is_number_integer()) {
            return std::string{};
        }
        int index = data.get<int>();
        if (index < 0 || index >= static_cast<int>(mOptions.size())) {
            return std::string{};
        }
        return mOptions[index];
    }
};

class Slider : public CustomFormElement {

public:
    double mMin     = 0.0;
    double mMax     = 0.0;
    double mStep    = 1.0;
    double mDefault = 0.0;

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

    Slider(
        std::string name,
        std::string text,
        double      min,
        double      max,
        double      step,
        double      defaultVal,
        std::string tooltip = {}
    )
    : CustomFormElement(std::move(name), std::move(text), std::move(tooltip)),
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
            ll::getLogger().error("Failed to serialize Slider: invalid data");
            return {};
        }
        auto data = CustomFormElement::serialize();
        data.update({
            {   "type", "slider"},
            {    "min",     mMin},
            {    "max",     mMax},
            {   "step",    mStep},
            {"default", mDefault}
        });
        return data;
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const override {
        return data.get<double>();
    }
};

class StepSlider : public CustomFormElement {

public:
    std::vector<std::string> mSteps{};
    size_t                   mDefault = 0;

    [[nodiscard]] bool isValid() const { return !mSteps.empty() && mDefault < mSteps.size(); }

    void validate() {
        if (mDefault >= mSteps.size()) {
            mDefault = mSteps.size() - 1;
        }
    }

    StepSlider(
        std::string              name,
        std::string              text,
        std::vector<std::string> steps,
        size_t                   defaultVal = 0,
        std::string              tooltip    = {}
    )
    : CustomFormElement(std::move(name), std::move(text), std::move(tooltip)),
      mSteps(std::move(steps)),
      mDefault(defaultVal) {
        validate();
    }
    ~StepSlider() override = default;

    [[nodiscard]] Type getType() const override { return Type::StepSlider; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        if (!isValid()) {
            ll::getLogger().error("Failed to serialize StepSlider: invalid data");
            return {};
        }
        auto data = CustomFormElement::serialize();
        data.update({
            {   "type", "step_slider"},
            {  "steps",        mSteps},
            {"default",      mDefault}
        });
        return data;
    }

    [[nodiscard]] CustomFormElementResult parseResult(nlohmann::ordered_json const& data) const override {
        if (!data.is_number_integer()) {
            return std::string{};
        }
        int index = data.get<int>();
        if (index < 0 || index >= static_cast<int>(mSteps.size())) {
            return std::string{};
        }
        return mSteps[index];
    }
};

class CustomForm::CustomFormImpl : public FormImpl {
private:
    std::string                                   mTitle{};
    std::optional<std::string>                    mSubmit{};
    std::optional<ButtonImage>                    mIcon{};
    std::vector<std::shared_ptr<FormElementBase>> mElements{};

public:
    using Callback = CustomForm::Callback;

    CustomFormImpl() = default;

    explicit CustomFormImpl(std::string title) : mTitle(std::move(title)) {}

    void setTitle(std::string const& title) { mTitle = title; }

    void setSubmitButton(std::string const& text) { mSubmit = text; }

    void setIcon(std::string const& imageData, std::string const& imageType) { mIcon = {imageData, imageType}; }

    void append(std::shared_ptr<FormElementBase> const& element) { mElements.push_back(element); }

    bool sendTo(Player& player, Callback callback, bool update = false) {
        auto handler = std::make_unique<handler::CustomFormHandler>(std::move(callback), mElements);
        return sendImpl(player, serialize(), std::move(handler), update);
    }

protected:
    [[nodiscard]] FormType getType() const override { return FormType::CustomForm; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        nlohmann::ordered_json form = {
            {  "title",                          mTitle},
            {   "type",                   "custom_form"},
            {"content", nlohmann::ordered_json::array()}
        };
        if (mSubmit) {
            form["submit"] = *mSubmit;
        }
        if (mIcon) {
            form["icon"] = {
                {"type", mIcon->type},
                {"data", mIcon->data},
            };
        }
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

CustomForm& CustomForm::setSubmitButton(std::string const& text) {
    impl->setSubmitButton(text);
    return *this;
}

CustomForm& CustomForm::appendHeader(std::string const& text) {
    impl->append(std::make_shared<Header>(text));
    return *this;
}

CustomForm& CustomForm::appendLabel(std::string const& text) {
    impl->append(std::make_shared<Label>(text));
    return *this;
}

CustomForm& CustomForm::appendDivider() {
    impl->append(std::make_shared<Divider>());
    return *this;
}

CustomForm& CustomForm::appendInput(
    std::string const& name,
    std::string const& text,
    std::string const& placeholder,
    std::string const& defaultVal,
    std::string const& tooltip
) {
    impl->append(std::make_shared<Input>(name, text, placeholder, defaultVal, tooltip));
    return *this;
}

CustomForm& CustomForm::appendToggle(
    std::string const& name,
    std::string const& text,
    bool               defaultVal,
    std::string const& tooltip
) {
    impl->append(std::make_shared<Toggle>(name, text, defaultVal, tooltip));
    return *this;
}

CustomForm& CustomForm::appendDropdown(
    std::string const&              name,
    std::string const&              text,
    std::vector<std::string> const& options,
    size_t                          defaultVal,
    std::string const&              tooltip
) {
    impl->append(std::make_shared<Dropdown>(name, text, options, defaultVal, tooltip));
    return *this;
}

CustomForm& CustomForm::appendSlider(
    std::string const& name,
    std::string const& text,
    double             min,
    double             max,
    double             step,
    double             defaultVal,
    std::string const& tooltip
) {
    impl->append(std::make_shared<Slider>(name, text, min, max, step, defaultVal, tooltip));
    return *this;
}

CustomForm& CustomForm::appendStepSlider(
    std::string const&              name,
    std::string const&              text,
    std::vector<std::string> const& steps,
    size_t                          defaultVal,
    std::string const&              tooltip
) {
    impl->append(std::make_shared<StepSlider>(name, text, steps, defaultVal, tooltip));
    return *this;
}

CustomForm& CustomForm::sendTo(Player& player, Callback callback) {
    impl->sendTo(player, std::move(callback), false);
    return *this;
}

CustomForm& CustomForm::sendUpdate(Player& player, Callback callback) {
    impl->sendTo(player, std::move(callback), true);
    return *this;
}

std::string CustomForm::getFormData() const { return impl->getFormData(); }

} // namespace ll::form
