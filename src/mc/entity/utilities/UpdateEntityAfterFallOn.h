#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class StrictEntityContext;
struct ApplyRestitutionComponent;
struct BounceComponent;
struct MinecartFlagComponent;
struct PlayerComponent;
// clang-format on

namespace UpdateEntityAfterFallOn {
// functions
// NOLINTBEGIN
MCNAPI void applyRestitution(
    ::StrictEntityContext const&                                                           entity,
    ::BlockPos const&                                                                      bounceStartPos,
    ::Block const&                                                                         block,
    float                                                                                  posDeltaY,
    float                                                                                  coefficientOfRestitution,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::BounceComponent> const& playerView,
    ::ViewT<::StrictEntityContext, ::Include<::MinecartFlagComponent>> const&              minecartView,
    ::EntityModifier<::ApplyRestitutionComponent>                                          modifier
);
// NOLINTEND

} // namespace UpdateEntityAfterFallOn
