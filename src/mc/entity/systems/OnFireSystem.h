#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnFireSystem {

public:
    // prevent constructor by default
    OnFireSystem& operator=(OnFireSystem const&) = delete;
    OnFireSystem(OnFireSystem const&)            = delete;
    OnFireSystem()                               = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_extinguishFireIfInWater\@OnFireSystem\@\@KA_NAEAVActor\@\@\@Z
     */
    MCAPI static bool _extinguishFireIfInWater(class Actor&);
    // NOLINTEND
};
