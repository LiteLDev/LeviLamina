#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ApplyRestitutionComponent;
struct BounceComponent;
struct MoveRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace ComputeBlockRestitutionSystem {
// functions
// NOLINTBEGIN
MCAPI void tick(
    ::StrictEntityContext const&                  context,
    ::Optional<::BounceComponent> const&          maybeBounceComponent,
    ::StateVectorComponent const&                 stateVectorComponent,
    ::AABBShapeComponent const&                   aabbShapeComponent,
    ::MoveRequestComponent const&                 moveRequestComponent,
    ::ActorDataFlagComponent const&               actorDataFlagComponent,
    ::EntityModifier<::ApplyRestitutionComponent> modifier,
    ::IConstBlockSource const&                    region
);
// NOLINTEND

} // namespace ComputeBlockRestitutionSystem
