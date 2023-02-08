/**
 * @file  OnFireSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1464590832
     * @symbol  ?extinguishFire\@OnFireSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void extinguishFire(class Actor &);
    /**
     * @hash   1012629986
     * @symbol  ?onFireChanged\@OnFireSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void onFireChanged(class Actor &);
    /**
     * @hash   -1904876731
     * @symbol  ?setOnFire\@OnFireSystem\@\@SAXAEAVActor\@\@H\@Z
     */
    MCAPI static void setOnFire(class Actor &, int);
    /**
     * @hash   1571515463
     * @symbol  ?setOnFireNoEffects\@OnFireSystem\@\@SAXAEAVActor\@\@H\@Z
     */
    MCAPI static void setOnFireNoEffects(class Actor &, int);
    /**
     * @hash   -1830966400
     * @symbol  ?stopFire\@OnFireSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void stopFire(class Actor &);

//protected:
    /**
     * @hash   1037252968
     * @symbol  ?_extinguishFireIfInWater\@OnFireSystem\@\@KA_NAEAVActor\@\@\@Z
     */
    MCAPI static bool _extinguishFireIfInWater(class Actor &);

protected:

};