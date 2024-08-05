#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace ActorPlayMovementSoundSystemImpl {
// NOLINTBEGIN
MCAPI void doPlayMovementSound(class ActorOwnerComponent&);

MCAPI void tick(class ViewT<
                class StrictEntityContext,
                struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                struct Exclude<struct PassengerComponent, class FlagComponent<struct ActorRemovedFlag>>,
                class ActorOwnerComponent> view);
// NOLINTEND

}; // namespace ActorPlayMovementSoundSystemImpl
