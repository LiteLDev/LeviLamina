#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct FallDistanceComponent;
struct MoveInputComponent;
struct PlayerInputModeComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace ScaffoldingActionSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doScaffoldingActionSystem(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::PlayerInputRequestComponent>> moveInputComponent,
    ::MoveInputComponent const&       playerInputModeComponent,
    ::PlayerInputModeComponent const& fallDistanceComponent,
    ::FallDistanceComponent&          stateVectorComponent,
    ::StateVectorComponent&           actorDataFlagComponent,
    ::ActorDataFlagComponent&         dirtyFlagsComponent,
    ::ActorDataDirtyFlagsComponent&
);
// NOLINTEND

} // namespace ScaffoldingActionSystemImpl
