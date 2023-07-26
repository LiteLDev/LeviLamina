#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailMovementComponent {

public:
    // prevent constructor by default
    RailMovementComponent& operator=(RailMovementComponent const&) = delete;
    RailMovementComponent(RailMovementComponent const&)            = delete;

public:
    /**
     * @symbol ??0RailMovementComponent\@\@QEAA\@XZ
     */
    MCAPI RailMovementComponent(); // NOLINT
    /**
     * @symbol ?getMaxSpeed\@RailMovementComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxSpeed() const; // NOLINT
};
