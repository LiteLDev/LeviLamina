#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct Tick;
// clang-format on

class CelebrateHuntComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk773bf1;
    ::ll::UntypedStorage<8, 8> mUnk9bb89d;
    ::ll::UntypedStorage<8, 8> mUnka57f9c;
    // NOLINTEND

public:
    // prevent constructor by default
    CelebrateHuntComponent& operator=(CelebrateHuntComponent const&);
    CelebrateHuntComponent(CelebrateHuntComponent const&);
    CelebrateHuntComponent();

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
