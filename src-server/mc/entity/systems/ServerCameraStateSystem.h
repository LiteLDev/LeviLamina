#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ServerActiveCameraComponent;
struct ServerCameraInstructionComponent;
struct ServerCameraStatesComponent;
struct StateVectorComponent;
// clang-format on

namespace ServerCameraStateSystem {
// functions
// NOLINTBEGIN
MCNAPI void _tick(
    ::ViewT<
        ::StrictEntityContext,
        ::ServerActiveCameraComponent,
        ::StateVectorComponent const,
        ::Exclude<::ServerCameraInstructionComponent>> noCameraInstructionView,
    ::ViewT<
        ::StrictEntityContext,
        ::ServerActiveCameraComponent,
        ::StateVectorComponent const,
        ::ServerCameraStatesComponent const,
        ::ServerCameraInstructionComponent> cameraInstructionView
);
// NOLINTEND

} // namespace ServerCameraStateSystem
