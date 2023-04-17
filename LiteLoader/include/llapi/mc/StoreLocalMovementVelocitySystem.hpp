/**
 * @file  StoreLocalMovementVelocitySystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class StoreLocalMovementVelocitySystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STORELOCALMOVEMENTVELOCITYSYSTEM
public:
    class StoreLocalMovementVelocitySystem& operator=(class StoreLocalMovementVelocitySystem const &) = delete;
    StoreLocalMovementVelocitySystem(class StoreLocalMovementVelocitySystem const &) = delete;
    StoreLocalMovementVelocitySystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@StoreLocalMovementVelocitySystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?tickEntity\@StoreLocalMovementVelocitySystem\@\@SAXAEAVStrictEntityContext\@\@AEBUMobTravelComponent\@\@AEAUCurrentLocalMoveVelocityComponent\@\@\@Z
     */
    MCAPI static void tickEntity(class StrictEntityContext &, struct MobTravelComponent const &, struct CurrentLocalMoveVelocityComponent &);
    /**
     * @symbol ?tickStoreLocalMovementVelocitySystem\@StoreLocalMovementVelocitySystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@$$CBUMobTravelComponent\@\@UCurrentLocalMoveVelocityComponent\@\@\@\@\@Z
     */
    MCAPI static void tickStoreLocalMovementVelocitySystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LocalPlayerComponentFlag>>, struct MobTravelComponent const, struct CurrentLocalMoveVelocityComponent>);

};
