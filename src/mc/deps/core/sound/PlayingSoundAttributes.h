#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayingSoundAttributes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mVolume;
    ::ll::TypedStorage<4, 4, float> mPitch;
    ::ll::TypedStorage<4, 4, float> mMinDistance;
    ::ll::TypedStorage<4, 4, float> mMaxDistance;
    ::ll::TypedStorage<1, 1, bool>  mIsMuted;
    ::ll::TypedStorage<1, 1, bool>  mIs3D;
    // NOLINTEND
};
