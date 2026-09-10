#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class EcsEventDispatcher;
class EntityRegistry;
class EntitySystems;
class Experiments;
class IClientInstance;
// clang-format on

namespace VanillaCamera {
// functions
// NOLINTBEGIN
MCAPI void addGlobalComponents(
    ::EntityRegistry&               registry,
    ::IClientInstance&              client,
    ::WeakRef<::EcsEventDispatcher> dispatcher,
    ::BaseGameVersion const&,
    ::Experiments const&
);

MCAPI void registerCameraEventListeners(::EntitySystems& entitySystems);

MCAPI void registerCameraSystems(::IClientInstance& clientInstance, ::EntitySystems& cameraSystems);
// NOLINTEND

} // namespace VanillaCamera
