#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class PushActorsSystem {
public:
    // prevent constructor by default
    PushActorsSystem& operator=(PushActorsSystem const&);
    PushActorsSystem(PushActorsSystem const&);
    PushActorsSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_tickPushActors@PushActorsSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UMobFlag@@@@UPushActorsRequestComponent@@@@VActorOwnerComponent@@@@V?$EntityModifier@UPushActorsRequestComponent@@@@@Z
    MCAPI static void _tickPushActors(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct MobFlag>,
                struct PushActorsRequestComponent>,
            class ActorOwnerComponent>                          view,
        class EntityModifier<struct PushActorsRequestComponent> mod
    );

    // symbol: ?createSystem@PushActorsSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol: ?pushActors@PushActorsSystem@@SAXAEAVActorOwnerComponent@@@Z
    MCAPI static void pushActors(class ActorOwnerComponent&);

    // NOLINTEND
};
