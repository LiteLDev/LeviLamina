#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class StrictEntityContext;
struct BounceComponent;
struct MinecartFlagComponent;
struct PlayerComponent;
struct StateVectorComponent;
// clang-format on

namespace UpdateEntityAfterFallOn {
// functions
// NOLINTBEGIN
MCNAPI void onBounceStarted(
    ::StrictEntityContext const&                                                                      entity,
    ::BlockPos const&                                                                                 bounceStartPos,
    ::Block const&                                                                                    block,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::BounceComponent> const&            playerView,
    ::ViewT<::StrictEntityContext, ::Include<::MinecartFlagComponent>, ::StateVectorComponent> const& minecartView
);
// NOLINTEND

} // namespace UpdateEntityAfterFallOn
