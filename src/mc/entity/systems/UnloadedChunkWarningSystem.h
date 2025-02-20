#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct ActorRotationComponent;
struct DisplayObjectMessageRequestComponent;
struct StateVectorComponent;
struct UnloadedChunkTimerComponent;
// clang-format on

namespace UnloadedChunkWarningSystem {
// functions
// NOLINTBEGIN
MCAPI void tickEntity(
    ::StrictEntityContext const&                                                            entity,
    ::StateVectorComponent const&                                                           stateVector,
    ::ActorRotationComponent const&                                                         actorRotation,
    ::UnloadedChunkTimerComponent&                                                          unloadedChunkTimer,
    ::EntityModifier<::DisplayObjectMessageRequestComponent, ::UnloadedChunkTimerComponent> modifier,
    ::IConstBlockSource const&                                                              region
);
// NOLINTEND

} // namespace UnloadedChunkWarningSystem
