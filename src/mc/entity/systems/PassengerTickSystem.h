#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class PassengerTickSystem {
public:
    // prevent constructor by default
    PassengerTickSystem& operator=(PassengerTickSystem const&);
    PassengerTickSystem(PassengerTickSystem const&);
    PassengerTickSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createMobPostPassengerTickSystem@PassengerTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createMobPostPassengerTickSystem();

    // symbol: ?createPlayerPostPassengerTickSystem@PassengerTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPlayerPostPassengerTickSystem();

    // symbol:
    // ?tickMob@PassengerTickSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UPassengerComponent@@@@UFallDistanceComponent@@@@@Z
    MCAPI static void tickMob(class ViewT<
                              class StrictEntityContext,
                              struct Include<
                                  class FlagComponent<struct MobFlag>,
                                  class FlagComponent<struct ActorMovementTickNeededFlag>,
                                  struct PassengerComponent>,
                              struct FallDistanceComponent> view);

    // symbol:
    // ?tickPlayer@PassengerTickSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UPassengerComponent@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void tickPlayer(class ViewT<
                                 class StrictEntityContext,
                                 struct Include<
                                     class FlagComponent<struct PlayerComponentFlag>,
                                     class FlagComponent<struct ActorMovementTickNeededFlag>,
                                     struct PassengerComponent>,
                                 class ActorOwnerComponent> view);

    // NOLINTEND
};
