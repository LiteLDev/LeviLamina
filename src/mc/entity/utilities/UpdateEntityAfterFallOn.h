#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace UpdateEntityAfterFallOn {
// NOLINTBEGIN
MCAPI void onBounceStarted(class StrictEntityContext const&, class BlockPos const&, class Block const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct BounceComponent> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MinecartFlag>>, struct StateVectorComponent> const&);
// NOLINTEND

}; // namespace UpdateEntityAfterFallOn
