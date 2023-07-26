#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMovementComponent {

public:
    // prevent constructor by default
    WaterMovementComponent& operator=(WaterMovementComponent const&) = delete;
    WaterMovementComponent(WaterMovementComponent const&)            = delete;

public:
    /**
     * @symbol ??0WaterMovementComponent\@\@QEAA\@XZ
     */
    MCAPI WaterMovementComponent(); // NOLINT
    /**
     * @symbol ?getDragFactor\@WaterMovementComponent\@\@QEBAMXZ
     */
    MCAPI float getDragFactor() const; // NOLINT
    /**
     * @symbol ?initFromDefinition\@WaterMovementComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?getDefaultDragFactor\@WaterMovementComponent\@\@SAMXZ
     */
    MCAPI static float getDefaultDragFactor(); // NOLINT
};
