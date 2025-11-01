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
struct PlayerInputModeComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VexFlagComponent;
// clang-format on

namespace MobMovementFriction {
// functions
// NOLINTBEGIN
MCNAPI void forSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCNAPI void tickLavaWalkFriction(::StrictEntityContext const&, ::NavigationComponent const& navigationComponent, ::Optional<::MovementAbilitiesComponent const>, ::Optional<::PlayerInputModeComponent const>, ::Optional<::VexFlagComponent const> vexFlagComponent, ::FrictionModifierComponent const& frictionModifierComponent, ::ActorDataFlagComponent const&, ::StateVectorComponent& stateVectorComponent);

MCNAPI void tickNormalFriction(::StrictEntityContext const&, ::MobTravelComponent const& mobTravelComponent, ::Optional<::MovementAbilitiesComponent const>, ::Optional<::PlayerInputModeComponent const>, ::Optional<::VexFlagComponent const> vexFlagComponent, ::FrictionModifierComponent const& frictionModifierComponent, ::ActorDataFlagComponent const&, ::StateVectorComponent& stateVectorComponent);
// NOLINTEND

}
