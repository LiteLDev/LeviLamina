#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"

class CelebrateHuntComponent {
public:
    // prevent constructor by default
    CelebrateHuntComponent& operator=(CelebrateHuntComponent const&);
    CelebrateHuntComponent(CelebrateHuntComponent const&);
    CelebrateHuntComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getCelebrateSound@CelebrateHuntComponent@@QEBA?BW4LevelSoundEvent@Legacy@Puv@@AEBVMob@@@Z
    MCAPI ::Puv::Legacy::LevelSoundEvent const getCelebrateSound(class Mob const& mob) const;

    // symbol: ?getCelebrateUntil@CelebrateHuntComponent@@QEBA?BUTick@@XZ
    MCAPI struct Tick const getCelebrateUntil() const;

    // symbol: ?getNextSoundEventTick@CelebrateHuntComponent@@QEBA?BUTick@@XZ
    MCAPI struct Tick const getNextSoundEventTick() const;

    // symbol: ?isCelebrating@CelebrateHuntComponent@@QEBA_NXZ
    MCAPI bool isCelebrating() const;

    // symbol: ?setNextSoundEventTick@CelebrateHuntComponent@@QEAAXAEBVMob@@@Z
    MCAPI void setNextSoundEventTick(class Mob const& mob);

    // symbol: ?startCelebrating@CelebrateHuntComponent@@QEAAXAEBUTick@@@Z
    MCAPI void startCelebrating(struct Tick const&);

    // symbol: ?stopCelebrating@CelebrateHuntComponent@@QEAAXXZ
    MCAPI void stopCelebrating();

    // NOLINTEND
};
