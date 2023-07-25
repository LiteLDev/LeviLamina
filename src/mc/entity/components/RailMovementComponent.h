#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailMovementComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILMOVEMENTCOMPONENT
public:
    RailMovementComponent& operator=(RailMovementComponent const&) = delete;
    RailMovementComponent(RailMovementComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0RailMovementComponent\@\@QEAA\@XZ
     */
    MCAPI RailMovementComponent();
    /**
     * @symbol ?getMaxSpeed\@RailMovementComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxSpeed() const;
};
