#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnFireSystem {

public:
    // prevent constructor by default
    OnFireSystem& operator=(OnFireSystem const&) = delete;
    OnFireSystem(OnFireSystem const&)            = delete;
    OnFireSystem()                               = delete;

public:
    /**
     * @symbol ?extinguishFire\@OnFireSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void extinguishFire(class Actor&); // NOLINT
    /**
     * @symbol ?onFireChanged\@OnFireSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void onFireChanged(class Actor&); // NOLINT
    /**
     * @symbol ?setOnFire\@OnFireSystem\@\@SAXAEAVActor\@\@H\@Z
     */
    MCAPI static void setOnFire(class Actor&, int); // NOLINT
    /**
     * @symbol ?setOnFireNoEffects\@OnFireSystem\@\@SAXAEAVActor\@\@H\@Z
     */
    MCAPI static void setOnFireNoEffects(class Actor&, int); // NOLINT
    /**
     * @symbol ?stopFire\@OnFireSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void stopFire(class Actor&); // NOLINT

    // protected:
    /**
     * @symbol ?_extinguishFireIfInWater\@OnFireSystem\@\@KA_NAEAVActor\@\@\@Z
     */
    MCAPI static bool _extinguishFireIfInWater(class Actor&); // NOLINT

protected:
};
