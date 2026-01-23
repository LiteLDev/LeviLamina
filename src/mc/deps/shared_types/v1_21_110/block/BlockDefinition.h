#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/block/PlacementDirection.h"
#include "mc/deps/shared_types/v1_21_110/block/PlacementPosition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {
// functions
// NOLINTBEGIN
MCAPI void bindBlockRenderLayer(::cereal::ReflectionCtx& ctx);

MCAPI void bindEnum(::cereal::ReflectionCtx& ctx);

MCAPI void bindTintMethod(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::SharedTypes::v1_21_110::BlockDefinition::PlacementDirection const& __P0,
    ::SharedTypes::v1_21_110::BlockDefinition::PlacementDirection const& __P1
);

MCFOLD bool operator==(
    ::SharedTypes::v1_21_110::BlockDefinition::PlacementPosition const& __P0,
    ::SharedTypes::v1_21_110::BlockDefinition::PlacementPosition const& __P1
);
// NOLINTEND

} // namespace SharedTypes::v1_21_110::BlockDefinition
