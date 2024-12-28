#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorRemovedFlagComponent;
struct PassengerComponent;
// clang-format on

namespace ActorPlayMovementSoundSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doPlayMovementSound(::ActorOwnerComponent& actorOwner);

MCAPI void tick(::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorMovementTickNeededComponent>,
                ::Exclude<::PassengerComponent, ::ActorRemovedFlagComponent>,
                ::ActorOwnerComponent> view);
// NOLINTEND

} // namespace ActorPlayMovementSoundSystemImpl
