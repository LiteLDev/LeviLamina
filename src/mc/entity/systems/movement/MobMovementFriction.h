#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace MobMovementFriction {
// NOLINTBEGIN
MCAPI void applyFriction(
    struct CurrentLocalMoveVelocityComponent const*,
    class FlagComponent<struct VexFlag> const*,
    struct MovementAbilitiesComponent const*,
    struct PlayerInputModeComponent const*,
    struct ActorDataFlagComponent const&,
    struct StateVectorComponent&,
    float,
    bool
);

MCAPI void forSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

MCAPI void tickLavaWalkFriction(class StrictEntityContext const&, class NavigationComponent const&, class Optional<struct MovementAbilitiesComponent const>, class Optional<struct CurrentLocalMoveVelocityComponent const>, class Optional<struct PlayerInputModeComponent const>, class Optional<class FlagComponent<struct VexFlag> const>, struct FrictionModifierComponent const&, struct ActorDataFlagComponent const&, struct StateVectorComponent&);

MCAPI void
tickNormalFriction(class StrictEntityContext const&, struct MobTravelComponent const&, class Optional<struct MovementAbilitiesComponent const>, class Optional<struct CurrentLocalMoveVelocityComponent const>, class Optional<struct PlayerInputModeComponent const>, class Optional<class FlagComponent<struct VexFlag> const>, struct FrictionModifierComponent const&, struct ActorDataFlagComponent const&, struct StateVectorComponent&);
// NOLINTEND

}; // namespace MobMovementFriction
