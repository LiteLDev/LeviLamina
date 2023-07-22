/**
 * @file  FlockingUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace FlockingUtility.
 *
 */
namespace FlockingUtility {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?checkForSteeringCollision\@FlockingUtility\@\@YA_NAEAVActor\@\@AEBVVec3\@\@MAEAV3\@\@Z
     */
    MCAPI bool checkForSteeringCollision(class Actor &, class Vec3 const &, float, class Vec3 &);
    /**
     * @symbol  ?chooseRandomDirection\@FlockingUtility\@\@YAXAEAVActor\@\@AEAVVec3\@\@\@Z
     */
    MCAPI void chooseRandomDirection(class Actor &, class Vec3 &);
    /**
     * @symbol  ?getWaterHeights\@FlockingUtility\@\@YAXAEBVActor\@\@AEAM1\@Z
     */
    MCAPI void getWaterHeights(class Actor const &, float &, float &);

};