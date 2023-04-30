/**
 * @file  BlockMovementSlowdownMultiplierComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct BlockMovementSlowdownMultiplierComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMOVEMENTSLOWDOWNMULTIPLIERCOMPONENT
public:
    struct BlockMovementSlowdownMultiplierComponent& operator=(struct BlockMovementSlowdownMultiplierComponent const &) = delete;
    BlockMovementSlowdownMultiplierComponent(struct BlockMovementSlowdownMultiplierComponent const &) = delete;
    BlockMovementSlowdownMultiplierComponent() = delete;
#endif

public:
    /**
     * @symbol ?setMultiplier\@BlockMovementSlowdownMultiplierComponent\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setMultiplier(class Vec3 const &);

};