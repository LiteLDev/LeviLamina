#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/OnConsumeTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_30 {

struct ItemDeprecatedComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnConsumeTriggerItemComponent>>
        legacyOnConsumeTriggerItemComponent;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_30
