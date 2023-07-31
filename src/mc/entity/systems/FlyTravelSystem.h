#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class FlyTravelSystem {

public:
    // prevent constructor by default
    FlyTravelSystem& operator=(FlyTravelSystem const&) = delete;
    FlyTravelSystem(FlyTravelSystem const&)            = delete;
    FlyTravelSystem()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createFlyTravelSystem\@FlyTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createFlyTravelSystem();
    /**
     * @symbol
     * ?tickFlyTravelSystem\@FlyTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@UMobTravelComponent\@\@\@\@$$CBUAbilitiesComponent\@\@$$CBUSynchedActorDataComponent\@\@UFlySpeedComponent\@\@\@\@\@Z
     */
    MCAPI static void
        tickFlyTravelSystem(class ViewT<
                            class StrictEntityContext,
                            class EntityRegistryBase,
                            struct Include<class FlagComponent<struct PlayerComponentFlag>, struct MobTravelComponent>,
                            struct AbilitiesComponent const,
                            struct SynchedActorDataComponent const,
                            struct FlySpeedComponent>);
    // NOLINTEND
};
