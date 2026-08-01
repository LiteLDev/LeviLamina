#include "ll/core/ui/form/FormValue.h"

#include <cmath>
#include <stdexcept>
#include <variant>

#include "ll/core/ui/base/UIRawMessage.h"

namespace ll::ui::detail {

cereal::DynamicValue materialize(TextValue const& value) {
    return std::visit(
        [](auto const& item) -> cereal::DynamicValue {
            using T = std::remove_cvref_t<decltype(item)>;
            if constexpr (std::same_as<T, std::string>) {
                return item;
            } else if constexpr (std::same_as<T, UIRawMessage>) {
                return UIRawMessageAccess::toDynamicValue(item);
            } else if constexpr (std::same_as<T, ObservableString>) {
                return item.getData();
            } else {
                return UIRawMessageAccess::toDynamicValue(item.getData());
            }
        },
        value
    );
}

cereal::DynamicValue materialize(std::optional<TextValue> const& value) {
    return value ? materialize(*value) : cereal::DynamicValue{std::string{}};
}

bool materialize(BooleanValue const& value) {
    return std::visit(
        [](auto const& item) {
            using T = std::remove_cvref_t<decltype(item)>;
            if constexpr (std::same_as<T, bool>) {
                return item;
            } else {
                return item.getData();
            }
        },
        value
    );
}

bool materialize(std::optional<BooleanValue> const& value, bool fallback) {
    return value ? materialize(*value) : fallback;
}

double materialize(NumberValue const& value) {
    auto result = std::visit(
        [](auto const& item) {
            using T = std::remove_cvref_t<decltype(item)>;
            if constexpr (std::same_as<T, double>) {
                return item;
            } else {
                return item.getData();
            }
        },
        value
    );
    if (!std::isfinite(result)) {
        throw std::invalid_argument("DDUI numbers must be finite");
    }
    return result;
}

double materialize(std::optional<NumberValue> const& value, double fallback) {
    return value ? materialize(*value) : fallback;
}

} // namespace ll::ui::detail
