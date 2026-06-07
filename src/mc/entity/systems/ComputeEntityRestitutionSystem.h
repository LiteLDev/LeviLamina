#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ApplyRestitutionComponent;
struct HorizontalCollisionFlagComponent;
struct MoveRequestComponent;
struct MovementAttributesComponent;
struct StateVectorComponent;
struct VerticalCollisionFlagComponent;
// clang-format on

namespace ComputeEntityRestitutionSystem {
// functions
// NOLINTBEGIN
MCAPI void tick(
    ::StrictEntityContext const&                                context,
    ::Optional<::HorizontalCollisionFlagComponent const> const& maybeHorizontalCollisionFlagComponent,
    ::Optional<::VerticalCollisionFlagComponent const> const&   maybeVerticalCollisionFlagComponent,
    ::Optional<::ActorDataFlagComponent const> const&           maybeActorDataFlagComponent,
    ::MovementAttributesComponent const&                        movementAttributesComponent,
    ::StateVectorComponent const&                               stateVectorComponent,
    ::MoveRequestComponent const&                               moveRequestComponent,
    ::EntityModifier<::ApplyRestitutionComponent>               modifier
);
// NOLINTEND

} // namespace ComputeEntityRestitutionSystem
