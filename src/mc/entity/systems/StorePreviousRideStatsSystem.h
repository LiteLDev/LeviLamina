#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class StorePreviousRideStatsSystem {
public:
    // prevent constructor by default
    StorePreviousRideStatsSystem& operator=(StorePreviousRideStatsSystem const&);
    StorePreviousRideStatsSystem(StorePreviousRideStatsSystem const&);
    StorePreviousRideStatsSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_storePreviousRideStats@StorePreviousRideStatsSystem@@SAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAUVanillaClientGameplayComponent@@@Z
    MCAPI static void
    _storePreviousRideStats(class StrictEntityContext const&, struct StateVectorComponent const&, struct VanillaClientGameplayComponent&);

    // symbol:
    // ?_tickStorePreviousRideStatsSystem@StorePreviousRideStatsSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@UPassengerComponent@@@@$$CBUStateVectorComponent@@UVanillaClientGameplayComponent@@@@@Z
    MCAPI static void _tickStorePreviousRideStatsSystem(class ViewT<
                                                        class StrictEntityContext,
                                                        struct Include<
                                                            class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                            class FlagComponent<struct LocalPlayerComponentFlag>,
                                                            struct PassengerComponent>,
                                                        struct StateVectorComponent const,
                                                        struct VanillaClientGameplayComponent> view);

    // symbol: ?createSystem@StorePreviousRideStatsSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
