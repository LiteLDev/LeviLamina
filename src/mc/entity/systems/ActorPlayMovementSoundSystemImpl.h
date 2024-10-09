#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace ActorPlayMovementSoundSystemImpl {
// NOLINTBEGIN
MCAPI void doPlayMovementSound(class ActorOwnerComponent& actorOwner);

MCAPI void tick(class ViewT<
                class StrictEntityContext,
                struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                struct Exclude<struct PassengerComponent, class FlagComponent<struct ActorRemovedFlag>>,
                class ActorOwnerComponent> view);
// NOLINTEND

}; // namespace ActorPlayMovementSoundSystemImpl
