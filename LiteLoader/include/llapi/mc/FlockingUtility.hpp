/**
 * @file  FlockingUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -321208129
     * @symbol  ?checkForSteeringCollision\@FlockingUtility\@\@YA_NAEAVActor\@\@AEBVVec3\@\@MAEAV3\@\@Z
     */
    MCAPI bool checkForSteeringCollision(class Actor &, class Vec3 const &, float, class Vec3 &);
    /**
     * @hash   695798400
     * @symbol  ?chooseRandomDirection\@FlockingUtility\@\@YAXAEAVActor\@\@AEAVVec3\@\@\@Z
     */
    MCAPI void chooseRandomDirection(class Actor &, class Vec3 &);
    /**
     * @hash   -67367646
     * @symbol  ?getWaterHeights\@FlockingUtility\@\@YAXAEBVActor\@\@AEAM1\@Z
     */
    MCAPI void getWaterHeights(class Actor const &, float &, float &);

};