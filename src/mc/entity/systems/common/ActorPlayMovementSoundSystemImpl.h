#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace ActorPlayMovementSoundSystemImpl {
// NOLINTBEGIN
// symbol: ?doPlayMovementSound@ActorPlayMovementSoundSystemImpl@@YAXAEAVActorOwnerComponent@@@Z
MCAPI void doPlayMovementSound(class ActorOwnerComponent&);

// symbol:
// ?tick@ActorPlayMovementSoundSystemImpl@@YAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@U?$Exclude@UPassengerComponent@@V?$FlagComponent@UActorRemovedFlag@@@@@@VActorOwnerComponent@@@@@Z
MCAPI void tick(class ViewT<
                class StrictEntityContext,
                struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                struct Exclude<struct PassengerComponent, class FlagComponent<struct ActorRemovedFlag>>,
                class ActorOwnerComponent> view);
// NOLINTEND

}; // namespace ActorPlayMovementSoundSystemImpl
