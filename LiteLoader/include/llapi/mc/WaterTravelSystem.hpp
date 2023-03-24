/**
 * @file  WaterTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class WaterTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERTRAVELSYSTEM
public:
    class WaterTravelSystem& operator=(class WaterTravelSystem const &) = delete;
    WaterTravelSystem(class WaterTravelSystem const &) = delete;
    WaterTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createWaterTravelSystem\@WaterTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterTravelSystem();
    /**
     * @symbol ?tickWaterTravelSystem\@WaterTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@$$CBV?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@$$CBV?$FlagComponent\@UWaterTravelFlag\@\@\@\@\@\@$$CBUAttributesComponent\@\@$$CBUSwimSpeedMultiplierComponent\@\@$$CBUWaterWalkSpeedEnchantComponent\@\@UMobTravelComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UDolphinFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAttributesComponent\@\@$$CBUMovementSpeedComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickWaterTravelSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag> const, class FlagComponent<struct WaterTravelFlag> const>, struct AttributesComponent const, struct SwimSpeedMultiplierComponent const, struct WaterWalkSpeedEnchantComponent const, struct MobTravelComponent, class Optional<class FlagComponent<struct DolphinFlag> const>, class Optional<class FlagComponent<struct OnGroundFlag> const>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AttributesComponent const, struct MovementSpeedComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>>);

};
