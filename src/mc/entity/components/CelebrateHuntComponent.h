#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CelebrateHuntComponent {

public:
    // prevent constructor by default
    CelebrateHuntComponent& operator=(CelebrateHuntComponent const&) = delete;
    CelebrateHuntComponent(CelebrateHuntComponent const&)            = delete;
    CelebrateHuntComponent()                                         = delete;

public:
    /**
     * @symbol ?getCelebrateSound\@CelebrateHuntComponent\@\@QEBA?BW4LevelSoundEvent\@\@AEBVMob\@\@\@Z
     */
    MCAPI enum class LevelSoundEvent const getCelebrateSound(class Mob const&) const; // NOLINT
    /**
     * @symbol ?getCelebrateUntil\@CelebrateHuntComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getCelebrateUntil() const; // NOLINT
    /**
     * @symbol ?getNextSoundEventTick\@CelebrateHuntComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getNextSoundEventTick() const; // NOLINT
    /**
     * @symbol ?isCelebrating\@CelebrateHuntComponent\@\@QEBA_NXZ
     */
    MCAPI bool isCelebrating() const; // NOLINT
    /**
     * @symbol ?setNextSoundEventTick\@CelebrateHuntComponent\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void setNextSoundEventTick(class Mob const&); // NOLINT
    /**
     * @symbol ?startCelebrating\@CelebrateHuntComponent\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void startCelebrating(struct Tick const&); // NOLINT
    /**
     * @symbol ?stopCelebrating\@CelebrateHuntComponent\@\@QEAAXXZ
     */
    MCAPI void stopCelebrating(); // NOLINT
};
