#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CameraRegistry;
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

MCAPI void registerCameraComponents(::CameraRegistry& cameraRegistry);

MCAPI void registerCameraEventListeners(::EntitySystems& entitySystems);

MCAPI void registerCameraFilenames(::CameraRegistry& cameraRegistry);

MCAPI void registerCameraSystems(::IClientInstance& clientInstance, ::EntitySystems& cameraSystems);

MCAPI void removeGlobalComponents(::EntityRegistry& registry, ::IClientInstance& client);
// NOLINTEND

} // namespace VanillaCamera
