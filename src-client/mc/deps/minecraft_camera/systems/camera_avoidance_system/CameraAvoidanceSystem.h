#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class ICameraAPI;
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

MCAPI float _calculateHardDistanceConstraint(
    ::MinecraftCamera::CameraComponent const& camera,
    ::ICameraAPI&                             cameraAPI,
    ::Vec3 const&                             rayStart
);

MCAPI void _distanceConstWithOrbit(
    ::StrictEntityContext&                   camComp,
    ::MinecraftCamera::CameraComponent&      orbitComp,
    ::MinecraftCamera::CameraOrbitComponent& avoidanceCache,
    ::CameraAvoidanceSystem::AvoidanceCache&
);

MCAPI void _distanceConstWithoutOrbit(
    ::StrictEntityContext&              camComp,
    ::MinecraftCamera::CameraComponent& avoidanceCache,
    ::CameraAvoidanceSystem::AvoidanceCache&
);

MCAPI void _tick(
    ::StrictEntityContext&                               cameraComponent,
    ::MinecraftCamera::CameraComponent&                  avoidanceComponent,
    ::MinecraftCamera::CameraAvoidanceComponent&         cache,
    ::CameraAvoidanceSystem::AvoidanceCache&             cachedComp,
    ::MinecraftCamera::CameraEntityStateComponent const& relaxDistanceSmoothingOverrideComponent,
    ::Optional<::MinecraftCamera::SeatCameraRelaxDistanceSmoothingOverrideComponent const> cameraAPI,
    ::ICameraAPI&                                                                          deltaTime,
    float
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
