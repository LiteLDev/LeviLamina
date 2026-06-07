#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/movement/mob/mob_movement_friction/ModifierType.h"

// auto generated forward declare list
// clang-format off
struct ActorDataFlagComponent;
struct FrictionModifierOverrideComponent;
struct MovementAttributesComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementFriction {
// functions
// NOLINTBEGIN
MCAPI void applyFrictionAndDrag(
    ::ActorDataFlagComponent const&            actorDataFlagComponent,
    ::MovementAttributesComponent const&       movementAttributesComponent,
    ::FrictionModifierOverrideComponent const* frictionModifierOverrideComponent,
    float                                      friction,
    float                                      drag,
    ::MobMovementFriction::ModifierType        modifierToUseForFriction,
    bool                                       isVex,
    bool                                       doesVerticalFriction,
    ::StateVectorComponent&                    stateVectorComponent
);

MCAPI void forSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);
// NOLINTEND

} // namespace MobMovementFriction
