#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnFireSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFIRESYSTEM
public:
    OnFireSystem& operator=(OnFireSystem const&) = delete;
    OnFireSystem(OnFireSystem const&)            = delete;
    OnFireSystem()                               = delete;
#endif

public:
    /**
     * @symbol ?extinguishFire\@OnFireSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void extinguishFire(class Actor&);
    /**
     * @symbol ?onFireChanged\@OnFireSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void onFireChanged(class Actor&);
    /**
     * @symbol ?setOnFire\@OnFireSystem\@\@SAXAEAVActor\@\@H\@Z
     */
    MCAPI static void setOnFire(class Actor&, int);
    /**
     * @symbol ?setOnFireNoEffects\@OnFireSystem\@\@SAXAEAVActor\@\@H\@Z
     */
    MCAPI static void setOnFireNoEffects(class Actor&, int);
    /**
     * @symbol ?stopFire\@OnFireSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void stopFire(class Actor&);

    // protected:
    /**
     * @symbol ?_extinguishFireIfInWater\@OnFireSystem\@\@KA_NAEAVActor\@\@\@Z
     */
    MCAPI static bool _extinguishFireIfInWater(class Actor&);

protected:
};
