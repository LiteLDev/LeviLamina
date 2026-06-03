#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/deps/minecraft_camera/systems/camera_avoidance_system/ViewportSide.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class ICameraAPI;
class Spherical;
class StrictEntityContext;
class Vec3;
struct CameraAPIComponent;
struct CameraActivationEvent;
struct TickingSystemWithInfo;
namespace CameraAvoidanceSystem { struct AvoidanceCache; }
namespace MinecraftCamera { struct CameraAvoidanceComponent; }
namespace MinecraftCamera { struct CameraComponent; }
namespace MinecraftCamera { struct CameraEntityStateComponent; }
namespace MinecraftCamera { struct CameraLookAtPositionComponent; }
namespace MinecraftCamera { struct CameraOffsetComponent; }
namespace MinecraftCamera { struct CameraOrbitComponent; }
namespace MinecraftCamera { struct CameraTimeComponent; }
namespace MinecraftCamera { struct SeatCameraRelaxDistanceSmoothingOverrideComponent; }
namespace SharedTypes::v1_21_100 { struct CameraAvoidanceRay; }
// clang-format on

namespace CameraAvoidanceSystem {
// functions
// NOLINTBEGIN
MCAPI void _cacheOffsetWithComponent(
    ::StrictEntityContext&                                     entity,
    ::MinecraftCamera::CameraOffsetComponent&                  offComp,
    ::MinecraftCamera::CameraLookAtPositionComponent&          lookatComp,
    ::EntityModifier<::CameraAvoidanceSystem::AvoidanceCache>& mod
);

MCAPI void _cacheOffsetWithoutComponent(
    ::StrictEntityContext&                                     entity,
    ::MinecraftCamera::CameraLookAtPositionComponent&          lookatComp,
    ::EntityModifier<::CameraAvoidanceSystem::AvoidanceCache>& mod
);

MCAPI void _distanceConstWithOrbit(
    ::StrictEntityContext&,
    ::MinecraftCamera::CameraComponent&      camComp,
    ::MinecraftCamera::CameraOrbitComponent& orbitComp,
    ::CameraAvoidanceSystem::AvoidanceCache& avoidanceCache
);

MCAPI void _distanceConstWithoutOrbit(
    ::StrictEntityContext&,
    ::MinecraftCamera::CameraComponent&      camComp,
    ::CameraAvoidanceSystem::AvoidanceCache& avoidanceCache
);

MCAPI float _sweepAvoidanceRays(
    ::ICameraAPI&                                                      cameraAPI,
    ::Spherical const&                                                 idealSpherical,
    ::Vec3 const&                                                      rayStart,
    ::std::vector<::SharedTypes::v1_21_100::CameraAvoidanceRay> const& rays,
    ::CameraAvoidanceSystem::ViewportSide                              side
);

MCAPI void _tick(
    ::StrictEntityContext&,
    ::MinecraftCamera::CameraComponent&                  cameraComponent,
    ::MinecraftCamera::CameraAvoidanceComponent&         avoidanceComponent,
    ::CameraAvoidanceSystem::AvoidanceCache&             cache,
    ::MinecraftCamera::CameraEntityStateComponent const& cachedComp,
    ::Optional<::MinecraftCamera::SeatCameraRelaxDistanceSmoothingOverrideComponent const>
                  relaxDistanceSmoothingOverrideComponent,
    ::ICameraAPI& cameraAPI,
    float         deltaTime
);

MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void startAvoidance(::EntityRegistry&, ::CameraActivationEvent const& event);

MCAPI void tick(
    ::ViewT<
        ::StrictEntityContext,
        ::MinecraftCamera::CameraOffsetComponent,
        ::MinecraftCamera::CameraLookAtPositionComponent,
        ::Include<::MinecraftCamera::CameraComponent, ::MinecraftCamera::CameraAvoidanceComponent>> cameraOffsetView,
    ::ViewT<
        ::StrictEntityContext,
        ::MinecraftCamera::CameraLookAtPositionComponent,
        ::Include<::MinecraftCamera::CameraComponent, ::MinecraftCamera::CameraAvoidanceComponent>,
        ::Exclude<::MinecraftCamera::CameraOffsetComponent>> nonCameraOffsetView,
    ::ViewT<
        ::StrictEntityContext,
        ::MinecraftCamera::CameraComponent,
        ::CameraAvoidanceSystem::AvoidanceCache,
        ::Include<::MinecraftCamera::CameraAvoidanceComponent>,
        ::Exclude<::MinecraftCamera::CameraOrbitComponent>> nonCameraOrbitView,
    ::ViewT<
        ::StrictEntityContext,
        ::MinecraftCamera::CameraComponent,
        ::MinecraftCamera::CameraOrbitComponent,
        ::CameraAvoidanceSystem::AvoidanceCache,
        ::Include<::MinecraftCamera::CameraAvoidanceComponent>> cameraOrbitView,
    ::ViewT<
        ::StrictEntityContext,
        ::MinecraftCamera::CameraComponent,
        ::MinecraftCamera::CameraAvoidanceComponent,
        ::CameraAvoidanceSystem::AvoidanceCache,
        ::MinecraftCamera::CameraEntityStateComponent const,
        ::Optional<::MinecraftCamera::SeatCameraRelaxDistanceSmoothingOverrideComponent const>> mainView,
    ::OptionalGlobal<::MinecraftCamera::CameraTimeComponent>                                    cameraTimeComponent,
    ::OptionalGlobal<::CameraAPIComponent>                                                      cameraAPIComponent,
    ::EntityModifier<::CameraAvoidanceSystem::AvoidanceCache>                                   mod
);
// NOLINTEND

} // namespace CameraAvoidanceSystem
