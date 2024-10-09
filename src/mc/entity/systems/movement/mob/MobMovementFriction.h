#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/entity/components/FlagComponent.h"

namespace MobMovementFriction {
// NOLINTBEGIN
MCAPI void applyFriction(
    struct CurrentLocalMoveVelocityComponent const* currentLocalMoveVelocityComponent,
    class FlagComponent<struct VexFlag> const*      vexFlagComponent,
    struct MovementAbilitiesComponent const*        abilities,
    struct PlayerInputModeComponent const*          playerInputMode,
    struct ActorDataFlagComponent const&            synchedActorData,
    struct StateVectorComponent&                    stateVector,
    float                                           finalFriction,
    bool                                            usingModifiedFriction
);

MCAPI void forSystems(std::function<void(struct TickingSystemWithInfo&&)> const& func);

MCAPI void tickLavaWalkFriction(
    class StrictEntityContext const&,
    class NavigationComponent const&                               navigationComponent,
    class Optional<struct MovementAbilitiesComponent const>        abilitiesComponent,
    class Optional<struct CurrentLocalMoveVelocityComponent const> currentLocalMoveVelocityComponent,
    class Optional<struct PlayerInputModeComponent const>          playerInputModeComponent,
    class Optional<class FlagComponent<struct VexFlag> const>      vexFlagComponent,
    struct FrictionModifierComponent const&                        frictionModifierComponent,
    struct ActorDataFlagComponent const&                           synchedActorDataComponent,
    struct StateVectorComponent&                                   stateVectorComponent
);

MCAPI void tickNormalFriction(
    class StrictEntityContext const&,
    struct MobTravelComponent const&                               mobTravelComponent,
    class Optional<struct MovementAbilitiesComponent const>        abilitiesComponent,
    class Optional<struct CurrentLocalMoveVelocityComponent const> currentLocalMoveVelocityComponent,
    class Optional<struct PlayerInputModeComponent const>          playerInputModeComponent,
    class Optional<class FlagComponent<struct VexFlag> const>      vexFlagComponent,
    struct FrictionModifierComponent const&                        frictionModifierComponent,
    struct ActorDataFlagComponent const&                           synchedActorDataComponent,
    struct StateVectorComponent&                                   stateVectorComponent
);
// NOLINTEND

}; // namespace MobMovementFriction
