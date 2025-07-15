#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class CameraComponent;
class StrictEntityContext;
struct ActiveCameraComponent;
struct ActorMovementTickNeededComponent;
struct CameraAttachComponent;
struct ControlSchemeComponent;
struct DefaultInputCameraComponent;
struct LocalPlayerComponent;
struct MoveInputComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace CameraInputTransferSystem {
// functions
// NOLINTBEGIN
MCNAPI void _tickMoveInputUpdate(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActiveCameraComponent>,
        ::CameraComponent const,
        ::CameraAttachComponent const> activeAttachedCameraView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActiveCameraComponent>,
        ::Exclude<::CameraAttachComponent>,
        ::CameraComponent const> activeDetachedCameraView,
    ::ViewT<::StrictEntityContext, ::Include<::DefaultInputCameraComponent>, ::CameraAttachComponent const>
        defaultInputCameraView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::LocalPlayerComponent>,
        ::MoveInputComponent,
        ::ControlSchemeComponent> localPlayerView
);

MCNAPI void _transfer(
    ::CameraComponent const&        cameraComponent,
    ::ControlSchemeComponent const& controlSchemeComponent,
    ::MoveInputComponent&           moveInputComponent
);

MCNAPI ::TickingSystemWithInfo createMoveInputUpdateSystem();

MCNAPI ::TickingSystemWithInfo createPlayerActionUpdateSystem();
// NOLINTEND

} // namespace CameraInputTransferSystem
