#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct MovementAbilitiesComponent;
struct MovementEffectsComponent;
struct StateVectorComponent;
// clang-format on

namespace GeyserBoostSystem {
// functions
// NOLINTBEGIN
MCAPI void registerSystems(::EntitySystems& systems);

MCAPI void tick(
    ::StrictEntityContext const&,
    ::Optional<::MovementAbilitiesComponent const> const maybeMovementAbilitiesComponent,
    ::MovementEffectsComponent const&                    movementEffectsComponent,
    ::AABBShapeComponent const&                          aabbShapeComponent,
    ::StateVectorComponent&                              stateVectorComponent,
    ::IConstBlockSource const&                           region
);
// NOLINTEND

} // namespace GeyserBoostSystem
