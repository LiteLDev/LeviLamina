#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MovementSoundTravelType.h"

struct MovementSoundComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mMakesFlySound;
    ::ll::TypedStorage<1, 1, bool>                      mMakesStepSound;
    ::ll::TypedStorage<4, 4, float>                     mCrystalSoundIntensity;
    ::ll::TypedStorage<4, 4, int>                       mLastCrystalSoundPlayTick;
    ::ll::TypedStorage<4, 4, ::MovementSoundTravelType> mTravelType;
    // NOLINTEND
};
