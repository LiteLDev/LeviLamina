#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct LocalPlayerComponent;
struct MoveInputComponent;
struct TickingSystemWithInfo;
namespace MinecraftCamera { struct ActiveCameraComponent; }
namespace MinecraftCamera { struct CameraAttachComponent; }
namespace MinecraftCamera { struct CameraComponent; }
namespace MinecraftCamera { struct DefaultInputCameraComponent; }
// clang-format on

namespace CameraInputTransferSystem {
// functions
// NOLINTBEGIN
MCNAPI void _tickMoveInputUpdate(::ViewT<::StrictEntityContext, ::Include<::MinecraftCamera::ActiveCameraComponent>, ::MinecraftCamera::CameraComponent const, ::MinecraftCamera::CameraAttachComponent const> activeAttachedCameraView, ::ViewT<::StrictEntityContext, ::Include<::MinecraftCamera::ActiveCameraComponent>, ::Exclude<::MinecraftCamera::CameraAttachComponent>, ::MinecraftCamera::CameraComponent const> activeDetachedCameraView, ::ViewT<::StrictEntityContext, ::Include<::MinecraftCamera::DefaultInputCameraComponent>, ::MinecraftCamera::CameraAttachComponent const> defaultInputCameraView, ::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::LocalPlayerComponent>, ::MoveInputComponent> localPlayerView);

MCNAPI ::TickingSystemWithInfo createMoveInputUpdateSystem();

MCNAPI ::TickingSystemWithInfo createPlayerActionUpdateSystem();
// NOLINTEND

}
