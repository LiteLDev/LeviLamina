#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMovementComponent {

public:
    // prevent constructor by default
    WaterMovementComponent& operator=(WaterMovementComponent const&) = delete;
    WaterMovementComponent(WaterMovementComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0WaterMovementComponent\@\@QEAA\@XZ
     */
    MCAPI WaterMovementComponent();
    /**
     * @symbol ?getDefaultDragFactor\@WaterMovementComponent\@\@SAMXZ
     */
    MCAPI static float getDefaultDragFactor();
    /**
     * @symbol ?getDragFactor\@WaterMovementComponent\@\@QEBAMXZ
     */
    MCAPI float getDragFactor() const;
    /**
     * @symbol ?initFromDefinition\@WaterMovementComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    // NOLINTEND
};
