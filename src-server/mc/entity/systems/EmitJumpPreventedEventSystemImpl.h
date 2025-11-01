#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct MobFlagComponent;
struct TriggerJumpRequestComponent;
// clang-format on

namespace EmitJumpPreventedEventSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doEmitJumpPreventedEventSystem(::StrictEntityContext&, ::TriggerJumpRequestComponent const& triggerJumpRequestComponent, ::ActorOwnerComponent& actorOwnerComponent);

MCNAPI void tickEmitJumpPreventedEventSystem(::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::TriggerJumpRequestComponent const, ::ActorOwnerComponent> view);
// NOLINTEND

}
