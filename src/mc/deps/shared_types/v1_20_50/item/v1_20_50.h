#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/DiggerItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/RepairableItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_50 { struct ComponentItemComponentData; }
namespace SharedTypes::v1_20_50 { struct ShooterItemComponent; }
namespace SharedTypes::v1_20_50 { struct TagsItemComponent; }
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
    ::SharedTypes::v1_20_50::ComponentItemComponentData const& __P0,
    ::SharedTypes::v1_20_50::ComponentItemComponentData const& __P1
);

MCAPI bool operator==(
    ::SharedTypes::v1_20_50::RepairableItemComponent::RepairItemEntry const& __P0,
    ::SharedTypes::v1_20_50::RepairableItemComponent::RepairItemEntry const& __P1
);

MCAPI bool operator==(
    ::SharedTypes::v1_20_50::ShooterItemComponent const& __P0,
    ::SharedTypes::v1_20_50::ShooterItemComponent const& __P1
);

MCFOLD bool operator==(
    ::SharedTypes::v1_20_50::TagsItemComponent const& __P0,
    ::SharedTypes::v1_20_50::TagsItemComponent const& __P1
);
// NOLINTEND

} // namespace SharedTypes::v1_20_50
