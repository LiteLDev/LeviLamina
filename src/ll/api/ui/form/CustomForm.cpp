#include "ll/api/ui/form/CustomForm.h"

#include <utility>

#include "ll/core/ui/form/CustomFormModel.h"
#include "ll/core/ui/form/FormRuntime.h"

namespace ll::ui {

struct CustomForm::Impl final : detail::FormRuntime {
    detail::CustomFormModel model;
    bool                    prepared{false};

    Impl(Player& player, TextValue title)
    : FormRuntime(player, "minecraft:custom_form", "custom_form_data_"),
      model(std::move(title)) {}

    Expected<> prepare() try {
        if (prepared) {
            return {};
        }
        prepared = true;
        lockStructure();

        auto data = model.serialize();
        if (auto result = createProperty(data); !result) {
            abortPreparation();
            return result;
        }
        if (auto result = model.bind(*this); !result) {
            abortPreparation();
            return result;
        }
        return {};
    } catch (...) {
        abortPreparation();
        return makeExceptionError();
    }
};

CustomForm::CustomForm(Player& player, TextValue title) : impl(std::make_shared<Impl>(player, std::move(title))) {}
CustomForm::~CustomForm()                                = default;
CustomForm::CustomForm(CustomForm&&) noexcept            = default;
CustomForm& CustomForm::operator=(CustomForm&&) noexcept = default;

CustomForm& CustomForm::button(TextValue label, ButtonCallback callback, ButtonOptions options) {
    impl->ensureMutable();
    impl->model.emplace<detail::component::Button>(std::move(label), std::move(callback), std::move(options));
    return *this;
}

CustomForm& CustomForm::closeButton() {
    impl->ensureMutable();
    impl->model.showCloseButton();
    return *this;
}

CustomForm& CustomForm::divider(DividerOptions options) {
    impl->ensureMutable();
    impl->model.emplace<detail::component::Divider>(std::move(options));
    return *this;
}

CustomForm& CustomForm::dropdown(
    TextValue                     label,
    ObservableNumber              value,
    std::vector<DropdownItemData> items,
    DropdownOptions               options
) {
    impl->ensureMutable();
    impl->model
        .emplace<detail::component::Dropdown>(std::move(label), std::move(value), std::move(items), std::move(options));
    return *this;
}

CustomForm& CustomForm::header(TextValue text, TextOptions options) {
    impl->ensureMutable();
    impl->model.emplace<detail::component::Header>(std::move(text), std::move(options));
    return *this;
}

CustomForm& CustomForm::label(TextValue text, TextOptions options) {
    impl->ensureMutable();
    impl->model.emplace<detail::component::Label>(std::move(text), std::move(options));
    return *this;
}

CustomForm&
CustomForm::slider(TextValue label, ObservableNumber value, NumberValue min, NumberValue max, SliderOptions options) {
    impl->ensureMutable();
    impl->model.emplace<detail::component::Slider>(
        std::move(label),
        std::move(value),
        std::move(min),
        std::move(max),
        std::move(options)
    );
    return *this;
}

CustomForm& CustomForm::spacer(SpacingOptions options) {
    impl->ensureMutable();
    impl->model.emplace<detail::component::Spacer>(std::move(options));
    return *this;
}

CustomForm& CustomForm::textField(TextValue label, ObservableString text, TextFieldOptions options) {
    impl->ensureMutable();
    impl->model.emplace<detail::component::TextField>(std::move(label), std::move(text), std::move(options));
    return *this;
}

CustomForm& CustomForm::toggle(TextValue label, ObservableBoolean toggled, ToggleOptions options) {
    impl->ensureMutable();
    impl->model.emplace<detail::component::Toggle>(std::move(label), std::move(toggled), std::move(options));
    return *this;
}

Expected<> CustomForm::show(Callback callback) {
    if (auto result = impl->prepare(); !result) {
        return result;
    }
    return impl->show(std::move(callback));
}

coro::CoroTask<CustomForm::Result> CustomForm::showAsync() {
    if (auto result = impl->prepare(); !result) {
        return [](Unexpected error) -> coro::CoroTask<Result> {
            co_return std::move(error);
        }(forwardError(result.error()));
    }
    return impl->showAsync();
}

Expected<> CustomForm::close() { return impl->close(); }

bool CustomForm::isShowing() const noexcept { return impl && impl->isShowing(); }

} // namespace ll::ui
