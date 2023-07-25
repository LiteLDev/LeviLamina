#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMovementComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERMOVEMENTCOMPONENT
public:
    WaterMovementComponent& operator=(WaterMovementComponent const&) = delete;
    WaterMovementComponent(WaterMovementComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0WaterMovementComponent\@\@QEAA\@XZ
     */
    MCAPI WaterMovementComponent();
    /**
     * @symbol ?getDragFactor\@WaterMovementComponent\@\@QEBAMXZ
     */
    MCAPI float getDragFactor() const;
    /**
     * @symbol ?initFromDefinition\@WaterMovementComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?getDefaultDragFactor\@WaterMovementComponent\@\@SAMXZ
     */
    MCAPI static float getDefaultDragFactor();
};
