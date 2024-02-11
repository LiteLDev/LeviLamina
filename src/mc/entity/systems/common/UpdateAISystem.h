#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class UpdateAISystem {
public:
    // prevent constructor by default
    UpdateAISystem& operator=(UpdateAISystem const&);
    UpdateAISystem(UpdateAISystem const&);
    UpdateAISystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@UpdateAISystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tick@UpdateAISystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UMobFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void
    _tick(class ViewT<
          class StrictEntityContext,
          struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct MobFlag>>,
          class ActorOwnerComponent> view);

    // NOLINTEND
};
