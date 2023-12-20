#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace ActorMoveSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doActorMoveSystem@ActorMoveSystemImpl@@YAXAEAVStrictEntityContext@@AEBUOnewayPhysicsBlocksComponent@@AEAUMoveRequestComponent@@AEAUAABBShapeComponent@@AEAUSubBBsComponent@@AEBUSynchedActorDataComponent@@V?$Optional@$$CBV?$FlagComponent@UIsStuckItemFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UUsesOneWayCollisionFlag@@@@@@V?$ViewT@VStrictEntityContext@@U?$Include@$$CBV?$FlagComponent@UIsStuckInColliderFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@U?$Include@$$CBV?$FlagComponent@UWasPenetratingLastFrameFlag@@@@@@@@V?$EntityModifier@V?$FlagComponent@UIsStuckInColliderFlag@@@@V?$FlagComponent@UWasPenetratingLastFrameFlag@@@@V?$FlagComponent@UMoveTowardsClosestSpaceFlag@@@@@@@Z
MCAPI void doActorMoveSystem(class StrictEntityContext&, struct OnewayPhysicsBlocksComponent const&, struct MoveRequestComponent&, struct AABBShapeComponent&, struct SubBBsComponent&, struct SynchedActorDataComponent const&, class Optional<class FlagComponent<struct IsStuckItemFlag> const>, class Optional<class FlagComponent<struct UsesOneWayCollisionFlag> const>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct IsStuckInColliderFlag> const>>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct WasPenetratingLastFrameFlag> const>>, class EntityModifier<class FlagComponent<struct IsStuckInColliderFlag>, class FlagComponent<struct WasPenetratingLastFrameFlag>, class FlagComponent<struct MoveTowardsClosestSpaceFlag>>);

// symbol:
// ?updateHitboxSystem@ActorMoveSystemImpl@@YAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAVHitboxComponent@@@Z
MCAPI void
updateHitboxSystem(class StrictEntityContext const&, struct StateVectorComponent const&, class HitboxComponent&);
// NOLINTEND

}; // namespace ActorMoveSystemImpl
