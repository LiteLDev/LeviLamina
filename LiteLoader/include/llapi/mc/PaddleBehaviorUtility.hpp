/**
 * @file  MC/PaddleBehaviorUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace PaddleBehaviorUtility.
 *
 */
namespace PaddleBehaviorUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -386326799
     * @symbol ?computePaddleForcesBasedOnGaze@PaddleBehaviorUtility@@YAXAEAVVec3@@AEAM1MMM@Z
     */
    MCAPI void computePaddleForcesBasedOnGaze(class Vec3 &, float &, float &, float, float, float);
    /**
     * @hash   -1248430290
     * @symbol ?setPaddleForce@PaddleBehaviorUtility@@YA_NAEAUPaddle@@UTick@@M@Z
     */
    MCAPI bool setPaddleForce(struct Paddle &, struct Tick, float);

};