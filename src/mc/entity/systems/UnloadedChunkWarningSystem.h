#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct DimensionTypeComponent;
struct DisplayObjectMessageRequestComponent;
struct LocalConstBlockSourceFactoryComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct UnloadedChunkTimerComponent;
// clang-format on

namespace UnloadedChunkWarningSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void tickEntity(
    ::StrictEntityContext const&                                                            entity,
    ::StateVectorComponent const&                                                           stateVector,
    ::ActorRotationComponent const&                                                         actorRotation,
    ::UnloadedChunkTimerComponent&                                                          unloadedChunkTimer,
    ::EntityModifier<::DisplayObjectMessageRequestComponent, ::UnloadedChunkTimerComponent> modifier,
    ::IConstBlockSource const&                                                              region
);

MCAPI void tickView(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::StateVectorComponent const,
        ::ActorRotationComponent const,
        ::UnloadedChunkTimerComponent>                                                      mainView,
    ::ViewT<::StrictEntityContext, ::DimensionTypeComponent const> const&                   dimensionView,
    ::OptionalGlobal<::LocalConstBlockSourceFactoryComponent const>                         factory,
    ::EntityModifier<::DisplayObjectMessageRequestComponent, ::UnloadedChunkTimerComponent> modifier
);
// NOLINTEND

} // namespace UnloadedChunkWarningSystem
