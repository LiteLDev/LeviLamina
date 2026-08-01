#include "ll/core/ui/form/CustomFormModel.h"

#include <cmath>
#include <stdexcept>
#include <string>
#include <string_view>
#include <utility>

#include "ll/core/ui/form/FormRuntime.h"
#include "ll/core/ui/form/FormValue.h"

namespace ll::ui::detail {

static std::string componentPath(std::size_t index) { return "layout[" + std::to_string(index) + "]."; }

namespace component {

Button::Button(TextValue value, CustomForm::ButtonCallback action, ButtonOptions settings)
: label(std::move(value)),
  callback(std::move(action)),
  options(std::move(settings)) {}

cereal::DynamicValue Button::serialize() const {
    auto result = cereal::DynamicValue::object();
    result.set("button_visible", true)
        .set("visible", materialize(options.visible, true))
        .set("disabled", materialize(options.disabled, false))
        .set("label", materialize(label))
        .set("tooltip", materialize(options.tooltip))
        .set("onClick", 0.0);
    return result;
}

Expected<> Button::bind(FormRuntime& runtime, std::size_t index) {
    auto path = componentPath(index);
    if (auto result = runtime.bind(path + "label", label); !result) return result;
    if (auto result = runtime.bind(path + "tooltip", options.tooltip); !result) return result;
    if (auto result = runtime.bind(path + "disabled", options.disabled); !result) return result;
    if (auto result = runtime.bind(path + "visible", options.visible); !result) return result;
    return runtime.bindAction(path + "onClick", std::move(callback));
}

Divider::Divider(DividerOptions value) : options(std::move(value)) {}

cereal::DynamicValue Divider::serialize() const {
    auto result = cereal::DynamicValue::object();
    result.set("divider_visible", true).set("visible", materialize(options.visible, true));
    return result;
}

Expected<> Divider::bind(FormRuntime& runtime, std::size_t index) {
    return runtime.bind(componentPath(index) + "visible", options.visible);
}

Dropdown::Dropdown(
    TextValue                     valueLabel,
    ObservableNumber              value,
    std::vector<DropdownItemData> valueItems,
    DropdownOptions               settings
)
: label(std::move(valueLabel)),
  selected(std::move(value)),
  items(std::move(valueItems)),
  options(std::move(settings)) {
    if (!selected.isClientWritable()) {
        throw std::invalid_argument("This DDUI input requires a client-writable Observable");
    }
    (void)materialize(NumberValue{selected});
    for (auto const& item : items) {
        if (!std::isfinite(item.value)) {
            throw std::invalid_argument("DDUI dropdown values must be finite");
        }
    }
}

cereal::DynamicValue Dropdown::serializeItems(std::vector<DropdownItemData> const& items) {
    auto serializedItems = cereal::DynamicValue::object();
    for (std::size_t index = 0; index < items.size(); ++index) {
        auto const& item       = items[index];
        auto        serialized = cereal::DynamicValue::object();
        serialized.set("label", materialize(item.label))
            .set("value", item.value)
            .set("description", materialize(item.description));
        serializedItems.set(std::to_string(index), std::move(serialized));
    }
    serializedItems.set("length", items.size());
    return serializedItems;
}

cereal::DynamicValue Dropdown::serialize() const {
    auto result = cereal::DynamicValue::object();
    result.set("dropdown_visible", true)
        .set("visible", materialize(options.visible, true))
        .set("disabled", materialize(options.disabled, false))
        .set("label", materialize(label))
        .set("description", materialize(options.description))
        .set("value", materialize(NumberValue{selected}))
        .set("items", serializeItems(items));
    return result;
}

Expected<> Dropdown::bind(FormRuntime& runtime, std::size_t index) {
    auto path = componentPath(index);
    if (auto result = runtime.bind(path + "label", label); !result) return result;
    if (auto result = runtime.bind(path + "value", selected); !result) return result;
    if (auto result = runtime.bind(path + "description", options.description); !result) return result;
    if (auto result = runtime.bind(path + "disabled", options.disabled); !result) return result;
    if (auto result = runtime.bind(path + "visible", options.visible); !result) return result;
    auto itemValues = data::Observable<cereal::DynamicValue>{serializeItems(items)};
    bool dynamic = false;
    auto observe = [&](TextValue const& text, std::size_t itemIndex, std::string_view member) {
        std::visit(
            [&](auto const& value) {
                using T = std::remove_cvref_t<decltype(value)>;
                if constexpr (std::same_as<T, ObservableString> || std::same_as<T, ObservableUIRawMessage>) {
                    dynamic = true;
                    runtime.observe(value, [itemValues, itemIndex, member](auto const& current) mutable {
                        auto updated = itemValues.getData();
                        updated[std::to_string(itemIndex)].set(member, materialize(TextValue{current}));
                        itemValues.setData(std::move(updated));
                    });
                }
            },
            text
        );
    };
    for (std::size_t itemIndex = 0; itemIndex < items.size(); ++itemIndex) {
        auto const& item = items[itemIndex];
        observe(item.label, itemIndex, "label");
        if (item.description) {
            observe(*item.description, itemIndex, "description");
        }
    }
    return dynamic ? runtime.bind(path + "items", std::move(itemValues)) : Expected<>{};
}

Header::Header(TextValue value, TextOptions settings) : text(std::move(value)), options(std::move(settings)) {}

cereal::DynamicValue Header::serialize() const {
    auto result = cereal::DynamicValue::object();
    result.set("header_visible", true)
        .set("visible", materialize(options.visible, true))
        .set("text", materialize(text));
    return result;
}

Expected<> Header::bind(FormRuntime& runtime, std::size_t index) {
    auto path = componentPath(index);
    if (auto result = runtime.bind(path + "text", text); !result) return result;
    return runtime.bind(path + "visible", options.visible);
}

Label::Label(TextValue value, TextOptions settings) : text(std::move(value)), options(std::move(settings)) {}

cereal::DynamicValue Label::serialize() const {
    auto result = cereal::DynamicValue::object();
    result.set("label_visible", true).set("visible", materialize(options.visible, true)).set("text", materialize(text));
    return result;
}

Expected<> Label::bind(FormRuntime& runtime, std::size_t index) {
    auto path = componentPath(index);
    if (auto result = runtime.bind(path + "text", text); !result) return result;
    return runtime.bind(path + "visible", options.visible);
}

Slider::Slider(
    TextValue        valueLabel,
    ObservableNumber value,
    NumberValue      minValue,
    NumberValue      maxValue,
    SliderOptions    settings
)
: label(std::move(valueLabel)),
  current(std::move(value)),
  min(std::move(minValue)),
  max(std::move(maxValue)),
  options(std::move(settings)) {
    if (!current.isClientWritable()) {
        throw std::invalid_argument("This DDUI input requires a client-writable Observable");
    }
    (void)materialize(NumberValue{current});
    (void)materialize(min);
    (void)materialize(max);
    if (options.step) {
        (void)materialize(*options.step);
    }
}

cereal::DynamicValue Slider::serialize() const {
    auto result = cereal::DynamicValue::object();
    result.set("slider_visible", true)
        .set("visible", materialize(options.visible, true))
        .set("disabled", materialize(options.disabled, false))
        .set("label", materialize(label))
        .set("description", materialize(options.description))
        .set("value", materialize(NumberValue{current}))
        .set("minValue", materialize(min))
        .set("maxValue", materialize(max))
        .set("step", materialize(options.step, 1.0));
    return result;
}

Expected<> Slider::bind(FormRuntime& runtime, std::size_t index) {
    auto path = componentPath(index);
    if (auto result = runtime.bind(path + "label", label); !result) return result;
    if (auto result = runtime.bind(path + "value", current); !result) return result;
    if (auto result = runtime.bind(path + "minValue", min); !result) return result;
    if (auto result = runtime.bind(path + "maxValue", max); !result) return result;
    if (auto result = runtime.bind(path + "description", options.description); !result) return result;
    if (auto result = runtime.bind(path + "disabled", options.disabled); !result) return result;
    if (auto result = runtime.bind(path + "step", options.step); !result) return result;
    return runtime.bind(path + "visible", options.visible);
}

Spacer::Spacer(SpacingOptions value) : options(std::move(value)) {}

cereal::DynamicValue Spacer::serialize() const {
    auto result = cereal::DynamicValue::object();
    result.set("spacer_visible", true).set("visible", materialize(options.visible, true));
    return result;
}

Expected<> Spacer::bind(FormRuntime& runtime, std::size_t index) {
    return runtime.bind(componentPath(index) + "visible", options.visible);
}

TextField::TextField(TextValue valueLabel, ObservableString value, TextFieldOptions settings)
: label(std::move(valueLabel)),
  text(std::move(value)),
  options(std::move(settings)) {
    if (!text.isClientWritable()) {
        throw std::invalid_argument("This DDUI input requires a client-writable Observable");
    }
}

cereal::DynamicValue TextField::serialize() const {
    auto result = cereal::DynamicValue::object();
    result.set("textfield_visible", true)
        .set("visible", materialize(options.visible, true))
        .set("disabled", materialize(options.disabled, false))
        .set("label", materialize(label))
        .set("description", materialize(options.description))
        .set("text", text.getData());
    return result;
}

Expected<> TextField::bind(FormRuntime& runtime, std::size_t index) {
    auto path = componentPath(index);
    if (auto result = runtime.bind(path + "label", label); !result) return result;
    if (auto result = runtime.bind(path + "text", text); !result) return result;
    if (auto result = runtime.bind(path + "description", options.description); !result) return result;
    if (auto result = runtime.bind(path + "disabled", options.disabled); !result) return result;
    return runtime.bind(path + "visible", options.visible);
}

Toggle::Toggle(TextValue valueLabel, ObservableBoolean value, ToggleOptions settings)
: label(std::move(valueLabel)),
  toggled(std::move(value)),
  options(std::move(settings)) {
    if (!toggled.isClientWritable()) {
        throw std::invalid_argument("This DDUI input requires a client-writable Observable");
    }
}

cereal::DynamicValue Toggle::serialize() const {
    auto result = cereal::DynamicValue::object();
    result.set("toggle_visible", true)
        .set("visible", materialize(options.visible, true))
        .set("disabled", materialize(options.disabled, false))
        .set("label", materialize(label))
        .set("description", materialize(options.description))
        .set("toggled", toggled.getData());
    return result;
}

Expected<> Toggle::bind(FormRuntime& runtime, std::size_t index) {
    auto path = componentPath(index);
    if (auto result = runtime.bind(path + "label", label); !result) return result;
    if (auto result = runtime.bind(path + "toggled", toggled); !result) return result;
    if (auto result = runtime.bind(path + "description", options.description); !result) return result;
    if (auto result = runtime.bind(path + "disabled", options.disabled); !result) return result;
    return runtime.bind(path + "visible", options.visible);
}

} // namespace component

CustomFormModel::CustomFormModel(TextValue value) : title(std::move(value)) {}

void CustomFormModel::showCloseButton() noexcept { closeButtonVisible = true; }

std::size_t CustomFormModel::size() const noexcept { return components.size(); }

cereal::DynamicValue CustomFormModel::serialize() const {
    auto layout = cereal::DynamicValue::object();
    for (std::size_t index = 0; index < components.size(); ++index) {
        layout.set(std::to_string(index), components[index]->serialize());
    }
    layout.set("length", components.size());

    auto closeButton = cereal::DynamicValue::object();
    closeButton.set("button_visible", closeButtonVisible)
        .set("label", materialize(TextValue{UIRawMessage::translate("gui.close")}))
        .set("onClick", 0.0);

    auto result = cereal::DynamicValue::object();
    result.set("title", materialize(title)).set("closeButton", std::move(closeButton)).set("layout", std::move(layout));
    return result;
}

Expected<> CustomFormModel::bind(FormRuntime& runtime) {
    if (auto result = runtime.bind("title", title); !result) return result;
    if (auto result = runtime.bindAction("closeButton.onClick", {}); !result) return result;
    for (std::size_t index = 0; index < components.size(); ++index) {
        if (auto result = components[index]->bind(runtime, index); !result) return result;
    }
    return {};
}

} // namespace ll::ui::detail
