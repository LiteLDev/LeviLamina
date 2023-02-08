/**
 * @file  CelebrateHuntComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -2123680789
     * @symbol  ?getCelebrateSound\@CelebrateHuntComponent\@\@QEBA?BW4LevelSoundEvent\@\@AEBVMob\@\@\@Z
     */
    MCAPI enum class LevelSoundEvent const getCelebrateSound(class Mob const &) const;
    /**
     * @hash   -1149290336
     * @symbol  ?getCelebrateUntil\@CelebrateHuntComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getCelebrateUntil() const;
    /**
     * @hash   -41172640
     * @symbol  ?getNextSoundEventTick\@CelebrateHuntComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getNextSoundEventTick() const;
    /**
     * @hash   1702521934
     * @symbol  ?isCelebrating\@CelebrateHuntComponent\@\@QEBA_NXZ
     */
    MCAPI bool isCelebrating() const;
    /**
     * @hash   -1853323998
     * @symbol  ?setNextSoundEventTick\@CelebrateHuntComponent\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void setNextSoundEventTick(class Mob const &);
    /**
     * @hash   1038536528
     * @symbol  ?startCelebrating\@CelebrateHuntComponent\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void startCelebrating(struct Tick const &);
    /**
     * @hash   1581241859
     * @symbol  ?stopCelebrating\@CelebrateHuntComponent\@\@QEAAXXZ
     */
    MCAPI void stopCelebrating();

};