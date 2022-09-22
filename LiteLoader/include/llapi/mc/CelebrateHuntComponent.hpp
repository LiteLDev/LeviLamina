/**
 * @file  CelebrateHuntComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1189634917
     * @symbol ?getCelebrateSound@CelebrateHuntComponent@@QEBA?BW4LevelSoundEvent@@AEBVMob@@@Z
     */
    MCAPI enum LevelSoundEvent const getCelebrateSound(class Mob const &) const;
    /**
     * @hash   -1282246608
     * @symbol ?getCelebrateUntil@CelebrateHuntComponent@@QEBA?BUTick@@XZ
     */
    MCAPI struct Tick const getCelebrateUntil() const;
    /**
     * @hash   809489184
     * @symbol ?getNextSoundEventTick@CelebrateHuntComponent@@QEBA?BUTick@@XZ
     */
    MCAPI struct Tick const getNextSoundEventTick() const;
    /**
     * @hash   1570641982
     * @symbol ?isCelebrating@CelebrateHuntComponent@@QEBA_NXZ
     */
    MCAPI bool isCelebrating() const;
    /**
     * @hash   -919278126
     * @symbol ?setNextSoundEventTick@CelebrateHuntComponent@@QEAAXAEBVMob@@@Z
     */
    MCAPI void setNextSoundEventTick(class Mob const &);
    /**
     * @hash   1972582400
     * @symbol ?startCelebrating@CelebrateHuntComponent@@QEAAXAEBUTick@@@Z
     */
    MCAPI void startCelebrating(struct Tick const &);
    /**
     * @hash   -1779679565
     * @symbol ?stopCelebrating@CelebrateHuntComponent@@QEAAXXZ
     */
    MCAPI void stopCelebrating();

};