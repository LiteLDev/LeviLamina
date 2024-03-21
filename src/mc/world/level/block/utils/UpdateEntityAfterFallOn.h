#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace UpdateEntityAfterFallOn {
// NOLINTBEGIN
// symbol:
// ?onBounceStarted@UpdateEntityAfterFallOn@@YAXAEBVStrictEntityContext@@AEBVBlockPos@@AEBVBlock@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@UBounceComponent@@@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UMinecartFlag@@@@@@UStateVectorComponent@@@@@Z
MCAPI void onBounceStarted(class StrictEntityContext const&, class BlockPos const&, class Block const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct BounceComponent> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MinecartFlag>>, struct StateVectorComponent> const&);
// NOLINTEND

}; // namespace UpdateEntityAfterFallOn
