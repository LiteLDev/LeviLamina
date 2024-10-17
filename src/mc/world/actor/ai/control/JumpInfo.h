#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpInfo {
public:
    // prevent constructor by default
    JumpInfo& operator=(JumpInfo const&);
    JumpInfo(JumpInfo const&);
    JumpInfo();

public:
    // NOLINTBEGIN
    MCAPI JumpInfo(float distanceScale, float height, int jumpDelay, int animDuration);

    MCAPI int getAnimDuration() const;

    MCAPI float getDistanceScale() const;

    MCAPI float getHeight() const;

    MCAPI int getJumpDelay() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(float distanceScale, float height, int jumpDelay, int animDuration);

    // NOLINTEND
};
