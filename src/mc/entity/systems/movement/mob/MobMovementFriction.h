#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class NavigationComponent;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct FrictionModifierComponent;
struct MobTravelComponent;
struct MovementAbilitiesComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VexFlagComponent;
// clang-format on

namespace MobMovementFriction {
// functions
// NOLINTBEGIN
MCAPI void
applyFriction(bool isVex, ::StateVectorComponent& stateVector, float finalFriction, bool doesVerticalFriction);

MCAPI void forSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI void tickLavaWalkFriction(
    ::StrictEntityContext const&,
    ::NavigationComponent const& navigationComponent,
    ::Optional<::MovementAbilitiesComponent const>,
    ::Optional<::VexFlagComponent const> vexFlagComponent,
    ::FrictionModifierComponent const&   frictionModifierComponent,
    ::ActorDataFlagComponent const&,
    ::StateVectorComponent& stateVectorComponent
);

MCAPI void tickNormalFriction(
    ::StrictEntityContext const&,
    ::MobTravelComponent const& mobTravelComponent,
    ::Optional<::MovementAbilitiesComponent const>,
    ::Optional<::VexFlagComponent const> vexFlagComponent,
    ::FrictionModifierComponent const&   frictionModifierComponent,
    ::ActorDataFlagComponent const&,
    ::StateVectorComponent& stateVectorComponent
);
// NOLINTEND

} // namespace MobMovementFriction
