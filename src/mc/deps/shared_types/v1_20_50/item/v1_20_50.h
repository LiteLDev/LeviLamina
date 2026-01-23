#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/DiggerItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/RepairableItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {
// functions
// NOLINTBEGIN
MCAPI void bindItemComponentTypes(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::SharedTypes::v1_20_50::DiggerItemComponent::BlockInfo const& __P0,
    ::SharedTypes::v1_20_50::DiggerItemComponent::BlockInfo const& __P1
);

MCAPI bool operator==(
    ::SharedTypes::v1_20_50::RepairableItemComponent::RepairItemEntry const& __P0,
    ::SharedTypes::v1_20_50::RepairableItemComponent::RepairItemEntry const& __P1
);
// NOLINTEND

} // namespace SharedTypes::v1_20_50
