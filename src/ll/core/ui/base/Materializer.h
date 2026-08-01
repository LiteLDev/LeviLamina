#pragma once

#include <optional>

#include "ll/api/ui/base/Observable.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace ll::ui::detail {

[[nodiscard]] cereal::DynamicValue materialize(TextValue const& value);
[[nodiscard]] cereal::DynamicValue materialize(std::optional<TextValue> const& value);
[[nodiscard]] bool                 materialize(BooleanValue const& value);
[[nodiscard]] bool                 materialize(std::optional<BooleanValue> const& value, bool fallback);
[[nodiscard]] double               materialize(NumberValue const& value);
[[nodiscard]] double               materialize(std::optional<NumberValue> const& value, double fallback);

} // namespace ll::ui::detail
