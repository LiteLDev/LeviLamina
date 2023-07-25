#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CelebrateHuntComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CELEBRATEHUNTCOMPONENT
public:
    CelebrateHuntComponent& operator=(CelebrateHuntComponent const&) = delete;
    CelebrateHuntComponent(CelebrateHuntComponent const&)            = delete;
    CelebrateHuntComponent()                                         = delete;
#endif

public:
    /**
     * @symbol ?getCelebrateSound\@CelebrateHuntComponent\@\@QEBA?BW4LevelSoundEvent\@\@AEBVMob\@\@\@Z
     */
    MCAPI enum class LevelSoundEvent const getCelebrateSound(class Mob const&) const;
    /**
     * @symbol ?getCelebrateUntil\@CelebrateHuntComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getCelebrateUntil() const;
    /**
     * @symbol ?getNextSoundEventTick\@CelebrateHuntComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getNextSoundEventTick() const;
    /**
     * @symbol ?isCelebrating\@CelebrateHuntComponent\@\@QEBA_NXZ
     */
    MCAPI bool isCelebrating() const;
    /**
     * @symbol ?setNextSoundEventTick\@CelebrateHuntComponent\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void setNextSoundEventTick(class Mob const&);
    /**
     * @symbol ?startCelebrating\@CelebrateHuntComponent\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void startCelebrating(struct Tick const&);
    /**
     * @symbol ?stopCelebrating\@CelebrateHuntComponent\@\@QEAAXXZ
     */
    MCAPI void stopCelebrating();
};
