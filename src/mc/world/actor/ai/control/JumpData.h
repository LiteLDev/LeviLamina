#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDistanceScale;
    ::ll::TypedStorage<4, 4, float> mHeight;
    ::ll::TypedStorage<4, 4, int>   mJumpDelay;
    ::ll::TypedStorage<4, 4, int>   mAnimDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JumpData(float distanceScale, float height, int jumpDelay, int animDuration);

    MCFOLD int getAnimDuration() const;

    MCFOLD float getDistanceScale() const;

    MCFOLD float getHeight() const;

    MCFOLD int getJumpDelay() const;

    MCFOLD void setAnimDuration(int duration);

    MCFOLD void setDistanceScale(float distanceScale);

    MCFOLD void setHeight(float height);

    MCFOLD void setJumpDelay(int delay);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float distanceScale, float height, int jumpDelay, int animDuration);
    // NOLINTEND
};
