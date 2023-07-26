/**
 * @file  CelebrateHuntComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CelebrateHuntComponent.
 *
 */
class CelebrateHuntComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CELEBRATEHUNTCOMPONENT
public:
    class CelebrateHuntComponent& operator=(class CelebrateHuntComponent const &) = delete;
    CelebrateHuntComponent(class CelebrateHuntComponent const &) = delete;
    CelebrateHuntComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getCelebrateSound\@CelebrateHuntComponent\@\@QEBA?BW4LevelSoundEvent\@\@AEBVMob\@\@\@Z
     */
    MCAPI enum class LevelSoundEvent const getCelebrateSound(class Mob const &) const;
    /**
     * @symbol  ?getCelebrateUntil\@CelebrateHuntComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getCelebrateUntil() const;
    /**
     * @symbol  ?getNextSoundEventTick\@CelebrateHuntComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getNextSoundEventTick() const;
    /**
     * @symbol  ?isCelebrating\@CelebrateHuntComponent\@\@QEBA_NXZ
     */
    MCAPI bool isCelebrating() const;
    /**
     * @symbol  ?setNextSoundEventTick\@CelebrateHuntComponent\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void setNextSoundEventTick(class Mob const &);
    /**
     * @symbol  ?startCelebrating\@CelebrateHuntComponent\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void startCelebrating(struct Tick const &);
    /**
     * @symbol  ?stopCelebrating\@CelebrateHuntComponent\@\@QEAAXXZ
     */
    MCAPI void stopCelebrating();

};