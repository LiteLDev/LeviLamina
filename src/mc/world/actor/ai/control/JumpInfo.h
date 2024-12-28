#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1dc7de;
    ::ll::UntypedStorage<4, 4> mUnkc52ffd;
    ::ll::UntypedStorage<4, 4> mUnk7051cd;
    ::ll::UntypedStorage<4, 4> mUnk449d43;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpInfo& operator=(JumpInfo const&);
    JumpInfo(JumpInfo const&);
    JumpInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JumpInfo(float distanceScale, float height, int jumpDelay, int animDuration);

    MCAPI int getAnimDuration() const;

    MCAPI float getDistanceScale() const;

    MCAPI float getHeight() const;

    MCAPI int getJumpDelay() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float distanceScale, float height, int jumpDelay, int animDuration);
    // NOLINTEND
};
