#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ActorUpdatePreviousPositionSystem {
public:
    // prevent constructor by default
    ActorUpdatePreviousPositionSystem& operator=(ActorUpdatePreviousPositionSystem const&);
    ActorUpdatePreviousPositionSystem(ActorUpdatePreviousPositionSystem const&);
    ActorUpdatePreviousPositionSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@ActorUpdatePreviousPositionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?tickSystem@ActorUpdatePreviousPositionSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void tickSystem(class ViewT<
                                 class StrictEntityContext,
                                 struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                 class ActorOwnerComponent>);

    // NOLINTEND
};
