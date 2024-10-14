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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
