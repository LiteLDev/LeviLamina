#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class CelebrateHuntComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mCelebrating;
    ::ll::TypedStorage<8, 8, ::Tick> mCelebrateUntil;
    ::ll::TypedStorage<8, 8, ::Tick> mNextSoundEventTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent const getCelebrateSound(::Mob const& mob) const;

    MCFOLD ::Tick const getCelebrateUntil() const;

    MCFOLD ::Tick const getNextSoundEventTick() const;

    MCFOLD bool isCelebrating() const;

    MCAPI void setNextSoundEventTick(::Mob const& mob);

    MCAPI void startCelebrating(::Tick const& celebrateUntil);

    MCAPI void stopCelebrating();
    // NOLINTEND
};
