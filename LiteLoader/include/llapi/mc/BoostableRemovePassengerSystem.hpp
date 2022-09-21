/**
 * @file  MC/BoostableRemovePassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BoostableRemovePassengerSystem.
 *
 */
class BoostableRemovePassengerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTABLEREMOVEPASSENGERSYSTEM
public:
    class BoostableRemovePassengerSystem& operator=(class BoostableRemovePassengerSystem const &) = delete;
    BoostableRemovePassengerSystem(class BoostableRemovePassengerSystem const &) = delete;
    BoostableRemovePassengerSystem() = delete;
#endif

public:
    /**
     * @hash   1594451403
     * @symbol ?boostableRemovePassenger@BoostableRemovePassengerSystem@@SAXAEAVStrictEntityContext@@AEBURemovePassengersComponent@@AEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@UPassengerComponent@@V?$FlagComponent@UPlayerComponentFlag@@@@@@UFOVModifierComponent@@@@@Z
     */
    MCAPI static void boostableRemovePassenger(class StrictEntityContext &, struct RemovePassengersComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent, class FlagComponent<struct PlayerComponentFlag>>, struct FOVModifierComponent> &);
    /**
     * @hash   2111173090
     * @symbol ?createSystem@BoostableRemovePassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};