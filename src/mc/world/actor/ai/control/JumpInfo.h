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
    // symbol: ??0JumpInfo@@QEAA@MMHH@Z
    MCAPI JumpInfo(float distanceScale, float height, int jumpDelay, int animDuration);

    // symbol: ?getAnimDuration@JumpInfo@@QEBAHXZ
    MCAPI int getAnimDuration() const;

    // symbol: ?getDistanceScale@JumpInfo@@QEBAMXZ
    MCAPI float getDistanceScale() const;

    // symbol: ?getHeight@JumpInfo@@QEBAMXZ
    MCAPI float getHeight() const;

    // symbol: ?getJumpDelay@JumpInfo@@QEBAHXZ
    MCAPI int getJumpDelay() const;

    // NOLINTEND
};
