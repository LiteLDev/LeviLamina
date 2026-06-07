#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CameraRegistry;
class EcsEventDispatcher;
class EntityContext;
class EntityRegistry;
class EntitySystems;
class Experiments;
class IClientInstance;
namespace SharedTypes::v1_21_100 { struct UpdatePlayerFromCameraDefinition; }
namespace VanillaCamera { struct UpdatePlayerFromCameraComponent; }
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

MCFOLD void initialize(
    ::EntityContext&,
    ::VanillaCamera::UpdatePlayerFromCameraComponent&                 component,
    ::SharedTypes::v1_21_100::UpdatePlayerFromCameraDefinition const& def
);

MCAPI void registerCameraComponents(::CameraRegistry& cameraRegistry);

MCAPI void registerCameraEventListeners(::EntitySystems& entitySystems);

MCAPI void registerCameraFilenames(::CameraRegistry& cameraRegistry);

MCAPI void registerCameraSystems(::IClientInstance& clientInstance, ::EntitySystems& cameraSystems);

MCAPI void removeGlobalComponents(::EntityRegistry& registry, ::IClientInstance&);
// NOLINTEND

} // namespace VanillaCamera
