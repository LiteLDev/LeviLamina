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
struct IsNearDolphinsFlagComponent;
struct MovementEffectsComponent;
struct RuntimeIDComponent;
struct ScanForDolphinFlagComponent;
struct SendPacketsComponent;
// clang-format on

namespace DolphinBoostSystem {
// functions
// NOLINTBEGIN
MCAPI void _addDolphinBoostEffectServer(
    ::entt::type_list<::Include<::IsNearDolphinsFlagComponent, ::ScanForDolphinFlagComponent>>,
    ::StrictEntityContext const&             context,
    ::RuntimeIDComponent const&              runtimeID,
    ::MovementEffectsComponent&              movementEffects,
    ::Optional<::ReplayStateComponent>       replayState,
    ::EntityModifier<::SendPacketsComponent> mod
);

MCAPI void registerSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace DolphinBoostSystem
