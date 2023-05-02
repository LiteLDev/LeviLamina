/**
 * @file  FlyTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FlyTravelSystem.
 *
 */
class FlyTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYTRAVELSYSTEM
public:
    class FlyTravelSystem& operator=(class FlyTravelSystem const &) = delete;
    FlyTravelSystem(class FlyTravelSystem const &) = delete;
    FlyTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createFlyTravelSystem\@FlyTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createFlyTravelSystem();
    /**
     * @symbol ?getPlayerFlySpeed\@FlyTravelSystem\@\@SAMAEBVLayeredAbilities\@\@VSynchedActorDataReader\@\@\@Z
     */
    MCAPI static float getPlayerFlySpeed(class LayeredAbilities const &, class SynchedActorDataReader);
    /**
     * @symbol ?tickFlyTravelSystem\@FlyTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@UMobTravelComponent\@\@\@\@$$CBUAbilitiesComponent\@\@$$CBUSynchedActorDataComponent\@\@UFlySpeedComponent\@\@\@\@\@Z
     */
    MCAPI static void tickFlyTravelSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>, struct MobTravelComponent>, struct AbilitiesComponent const, struct SynchedActorDataComponent const, struct FlySpeedComponent>);

};
