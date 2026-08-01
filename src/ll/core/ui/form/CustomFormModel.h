#pragma once

#include <concepts>
#include <memory>
#include <utility>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/ui/form/CustomForm.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace ll::ui::detail {

class FormRuntime;

namespace component {

class Base {
public:
    virtual ~Base() = default;

    [[nodiscard]] virtual cereal::DynamicValue serialize() const               = 0;
    virtual Expected<>                         bind(FormRuntime&, std::size_t) = 0;
};

class Button final : public Base {
    TextValue                  label;
    CustomForm::ButtonCallback callback;
    ButtonOptions              options;

public:
    Button(TextValue label, CustomForm::ButtonCallback callback, ButtonOptions options);

    [[nodiscard]] cereal::DynamicValue serialize() const override;
    Expected<>                         bind(FormRuntime&, std::size_t) override;
};

class Divider final : public Base {
    DividerOptions options;

public:
    explicit Divider(DividerOptions options);

    [[nodiscard]] cereal::DynamicValue serialize() const override;
    Expected<>                         bind(FormRuntime&, std::size_t) override;
};

class Dropdown final : public Base {
    TextValue                     label;
    ObservableNumber              selected;
    std::vector<DropdownItemData> items;
    DropdownOptions               options;

    [[nodiscard]] static cereal::DynamicValue serializeItems(std::vector<DropdownItemData> const&);

public:
    Dropdown(TextValue label, ObservableNumber selected, std::vector<DropdownItemData> items, DropdownOptions options);

    [[nodiscard]] cereal::DynamicValue serialize() const override;
    Expected<>                         bind(FormRuntime&, std::size_t) override;
};

class Header final : public Base {
    TextValue   text;
    TextOptions options;

public:
    Header(TextValue text, TextOptions options);

    [[nodiscard]] cereal::DynamicValue serialize() const override;
    Expected<>                         bind(FormRuntime&, std::size_t) override;
};

class Label final : public Base {
    TextValue   text;
    TextOptions options;

public:
    Label(TextValue text, TextOptions options);

    [[nodiscard]] cereal::DynamicValue serialize() const override;
    Expected<>                         bind(FormRuntime&, std::size_t) override;
};

class Slider final : public Base {
    TextValue        label;
    ObservableNumber current;
    NumberValue      min;
    NumberValue      max;
    SliderOptions    options;

public:
    Slider(TextValue label, ObservableNumber current, NumberValue min, NumberValue max, SliderOptions options);

    [[nodiscard]] cereal::DynamicValue serialize() const override;
    Expected<>                         bind(FormRuntime&, std::size_t) override;
};

class Spacer final : public Base {
    SpacingOptions options;

public:
    explicit Spacer(SpacingOptions options);

    [[nodiscard]] cereal::DynamicValue serialize() const override;
    Expected<>                         bind(FormRuntime&, std::size_t) override;
};

class TextField final : public Base {
    TextValue        label;
    ObservableString text;
    TextFieldOptions options;

public:
    TextField(TextValue label, ObservableString text, TextFieldOptions options);

    [[nodiscard]] cereal::DynamicValue serialize() const override;
    Expected<>                         bind(FormRuntime&, std::size_t) override;
};

class Toggle final : public Base {
    TextValue         label;
    ObservableBoolean toggled;
    ToggleOptions     options;

public:
    Toggle(TextValue label, ObservableBoolean toggled, ToggleOptions options);

    [[nodiscard]] cereal::DynamicValue serialize() const override;
    Expected<>                         bind(FormRuntime&, std::size_t) override;
};

} // namespace component

class CustomFormModel {
    TextValue                                     title;
    std::vector<std::unique_ptr<component::Base>> components;
    bool                                          closeButtonVisible{false};

public:
    explicit CustomFormModel(TextValue title);

    template <std::derived_from<component::Base> T, class... Args>
    T& emplace(Args&&... args) {
        auto  component = std::make_unique<T>(std::forward<Args>(args)...);
        auto& result    = *component;
        components.emplace_back(std::move(component));
        return result;
    }

    void showCloseButton() noexcept;

    [[nodiscard]] std::size_t          size() const noexcept;
    [[nodiscard]] cereal::DynamicValue serialize() const;
    Expected<>                         bind(FormRuntime&);
};

} // namespace ll::ui::detail
