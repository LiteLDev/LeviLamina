#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class ReplayStateComponent;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct IsNearDolphinsFlagComponent;
struct MovementEffectsComponent;
struct RuntimeIDComponent;
struct ScanForDolphinFlagComponent;
struct ScanForDolphinTimerComponent;
struct SendPacketsComponent;
// clang-format on

namespace DolphinBoostSystem {
// functions
// NOLINTBEGIN
MCAPI void _addDolphinBoostEffectServer(
    ::entt::type_list<::Include<::IsNearDolphinsFlagComponent, ::ScanForDolphinFlagComponent>> context,
    ::StrictEntityContext const&                                                               runtimeID,
    ::RuntimeIDComponent const&                                                                movementEffects,
    ::MovementEffectsComponent&                                                                replayState,
    ::Optional<::ReplayStateComponent>                                                         mod,
    ::EntityModifier<::SendPacketsComponent>
);

MCAPI void _tickScan(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> context,
    ::StrictEntityContext const&                                     synchedActorDataComponent,
    ::ActorDataFlagComponent const&                                  scanForDolphinTimerComponent,
    ::ScanForDolphinTimerComponent&                                  modifier,
    ::EntityModifier<::ScanForDolphinFlagComponent>
);

MCAPI void registerSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace DolphinBoostSystem
