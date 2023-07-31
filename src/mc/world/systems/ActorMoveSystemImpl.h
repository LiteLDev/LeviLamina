#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
template<typename... T0> struct Include;
// clang-format on

namespace ActorMoveSystemImpl {
// NOLINTBEGIN
/**
 * @symbol
 * ?doActorMoveSystem\@ActorMoveSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUOnewayPhysicsBlocksComponent\@\@AEAUMoveRequestComponent\@\@AEAUAABBShapeComponent\@\@AEAUSubBBsComponent\@\@AEBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UIsStuckItemFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UUsesOneWayCollisionFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@$$CBV?$FlagComponent\@UIsStuckInColliderFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@$$CBV?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UIsStuckInColliderFlag\@\@\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@V?$FlagComponent\@UMoveTowardsClosestSpaceFlag\@\@\@\@\@\@\@Z
 */
MCAPI void doActorMoveSystem(class StrictEntityContext&, struct OnewayPhysicsBlocksComponent const&, struct MoveRequestComponent&, struct AABBShapeComponent&, struct SubBBsComponent&, struct SynchedActorDataComponent const&, class Optional<class FlagComponent<struct IsStuckItemFlag> const>, class Optional<class FlagComponent<struct UsesOneWayCollisionFlag> const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct IsStuckInColliderFlag> const>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct WasPenetratingLastFrameFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct IsStuckInColliderFlag>, class FlagComponent<struct WasPenetratingLastFrameFlag>, class FlagComponent<struct MoveTowardsClosestSpaceFlag>>);
/**
 * @symbol
 * ?updateHitboxSystem\@ActorMoveSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAVHitboxComponent\@\@\@Z
 */
MCAPI void
updateHitboxSystem(class StrictEntityContext const&, struct StateVectorComponent const&, class HitboxComponent&);
// NOLINTEND

}; // namespace ActorMoveSystemImpl
