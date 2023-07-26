/**
 * @file  WaterMovementComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WaterMovementComponent.
 *
 */
class WaterMovementComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERMOVEMENTCOMPONENT
public:
    class WaterMovementComponent& operator=(class WaterMovementComponent const &) = delete;
    WaterMovementComponent(class WaterMovementComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0WaterMovementComponent\@\@QEAA\@XZ
     */
    MCAPI WaterMovementComponent();
    /**
     * @symbol  ?getDragFactor\@WaterMovementComponent\@\@QEBAMXZ
     */
    MCAPI float getDragFactor() const;
    /**
     * @symbol  ?initFromDefinition\@WaterMovementComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol  ?getDefaultDragFactor\@WaterMovementComponent\@\@SAMXZ
     */
    MCAPI static float getDefaultDragFactor();

};