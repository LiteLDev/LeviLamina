#pragma once

#include "ll/api/Expected.h"
#include "ll/api/ui/base/UIRawMessage.h"
#include <cstddef>

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace ll::ui::detail {

class UIRawMessageAccess {
public:
    static cereal::DynamicValue   toDynamicValue(UIRawMessage const& value);
    static Expected<UIRawMessage> fromDynamicValue(cereal::DynamicValue const& value);

private:
    static Expected<UIRawMessage> fromDynamicValueImpl(cereal::DynamicValue const& value, std::size_t depth);
};

} // namespace ll::ui::detail
