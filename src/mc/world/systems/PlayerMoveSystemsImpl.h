#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace PlayerMoveSystemsImpl {
// NOLINTBEGIN
// symbol:
// ?_doLocalPlayerPreMoveJumpSystem@PlayerMoveSystemsImpl@@YAXAEBVStrictEntityContext@@AEAUMoveInputComponent@@V?$Optional@V?$FlagComponent@UAutoJumpingFlag@@@@@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UAutoJumpingFlag@@@@@@@Z
MCAPI void
_doLocalPlayerPreMoveJumpSystem(class StrictEntityContext const&, struct MoveInputComponent&, class Optional<class FlagComponent<struct AutoJumpingFlag>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct AutoJumpingFlag>>&);

// symbol:
// ?_doLocalPlayerPreMoveSystem@PlayerMoveSystemsImpl@@YAXAEBVStrictEntityContext@@AEBUMoveRequestComponent@@AEBUStateVectorComponent@@AEAULocalPlayerLastPosComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UWasOnGroundFlag@@@@@@@Z
MCAPI void _doLocalPlayerPreMoveSystem(class StrictEntityContext const&, struct MoveRequestComponent const&, struct StateVectorComponent const&, struct LocalPlayerLastPosComponent&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasOnGroundFlag>>&);

// symbol:
// ?_doPlayerPostMoveSystem@PlayerMoveSystemsImpl@@YAXAEBVStrictEntityContext@@AEAVActorMovementProxyComponent@@@Z
MCAPI void _doPlayerPostMoveSystem(class StrictEntityContext const&, class ActorMovementProxyComponent&);
// NOLINTEND

}; // namespace PlayerMoveSystemsImpl
