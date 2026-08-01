#include "ll/core/ui/form/MessageBoxModel.h"

#include <utility>

#include "ll/core/ui/base/Materializer.h"
#include "ll/core/ui/form/FormRuntime.h"

namespace ll::ui::detail {

MessageBoxModel::MessageBoxModel(TextValue value) : title(std::move(value)) {}

void MessageBoxModel::body(TextValue value) { bodyValue = std::move(value); }

void MessageBoxModel::button1(TextValue label, std::optional<TextValue> tooltip) {
    button1Label   = std::move(label);
    button1Tooltip = std::move(tooltip);
}

void MessageBoxModel::button2(TextValue label, std::optional<TextValue> tooltip) {
    button2Label   = std::move(label);
    button2Tooltip = std::move(tooltip);
}

std::optional<std::uint32_t> MessageBoxModel::selection() const noexcept { return selected; }

cereal::DynamicValue MessageBoxModel::serialize() const {
    auto first = cereal::DynamicValue::object();
    first.set("label", materialize(button1Label)).set("tooltip", materialize(button1Tooltip)).set("onClick", 0.0);

    auto second = cereal::DynamicValue::object();
    second.set("label", materialize(button2Label)).set("tooltip", materialize(button2Tooltip)).set("onClick", 0.0);

    auto result = cereal::DynamicValue::object();
    result.set("title", materialize(title))
        .set("body", materialize(bodyValue))
        .set("button1", std::move(first))
        .set("button2", std::move(second));
    return result;
}

Expected<> MessageBoxModel::bind(FormRuntime& runtime) {
    if (auto result = runtime.bind("title", title); !result) return result;
    if (auto result = runtime.bind("body", bodyValue); !result) return result;
    if (auto result = runtime.bind("button1.label", button1Label); !result) return result;
    if (auto result = runtime.bind("button1.tooltip", button1Tooltip); !result) return result;
    if (auto result = runtime.bind("button2.label", button2Label); !result) return result;
    if (auto result = runtime.bind("button2.tooltip", button2Tooltip); !result) return result;
    if (auto result = runtime.bindAction("button1.onClick", [this] { selected = 1; }); !result) {
        return result;
    }
    return runtime.bindAction("button2.onClick", [this] { selected = 2; });
}

} // namespace ll::ui::detail
