#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"

class CelebrateHuntComponent {
public:
    // prevent constructor by default
    CelebrateHuntComponent& operator=(CelebrateHuntComponent const&);
    CelebrateHuntComponent(CelebrateHuntComponent const&);
    CelebrateHuntComponent();

public:
    // NOLINTBEGIN
    MCAPI ::Puv::Legacy::LevelSoundEvent const getCelebrateSound(class Mob const& mob) const;

    MCAPI struct Tick const getCelebrateUntil() const;

    MCAPI struct Tick const getNextSoundEventTick() const;

    MCAPI bool isCelebrating() const;

    MCAPI void setNextSoundEventTick(class Mob const& mob);

    MCAPI void startCelebrating(struct Tick const& celebrateUntil);

    MCAPI void stopCelebrating();

    // NOLINTEND
};
