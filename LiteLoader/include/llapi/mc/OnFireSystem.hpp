/**
 * @file  MC/OnFireSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnFireSystem.
 *
 */
class OnFireSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFIRESYSTEM
public:
    class OnFireSystem& operator=(class OnFireSystem const &) = delete;
    OnFireSystem(class OnFireSystem const &) = delete;
    OnFireSystem() = delete;
#endif

public:
    /**
     * @hash   -1947443360
     * @symbol ?extinguishFire@OnFireSystem@@SAXAEAVActor@@@Z
     */
    MCAPI static void extinguishFire(class Actor &);
    /**
     * @hash   529762082
     * @symbol ?onFireChanged@OnFireSystem@@SAXAEAVActor@@@Z
     */
    MCAPI static void onFireChanged(class Actor &);
    /**
     * @hash   1907038149
     * @symbol ?setOnFire@OnFireSystem@@SAXAEAVActor@@H@Z
     */
    MCAPI static void setOnFire(class Actor &, int);
    /**
     * @hash   1088447671
     * @symbol ?setOnFireNoEffects@OnFireSystem@@SAXAEAVActor@@H@Z
     */
    MCAPI static void setOnFireNoEffects(class Actor &, int);
    /**
     * @hash   1980933104
     * @symbol ?stopFire@OnFireSystem@@SAXAEAVActor@@@Z
     */
    MCAPI static void stopFire(class Actor &);

//protected:
    /**
     * @hash   554446568
     * @symbol ?_extinguishFireIfInWater@OnFireSystem@@KA_NAEAVActor@@@Z
     */
    MCAPI static bool _extinguishFireIfInWater(class Actor &);

protected:

};