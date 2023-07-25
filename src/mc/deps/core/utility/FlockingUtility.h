#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlockingUtility {
/**
 * @symbol ?checkForSteeringCollision\@FlockingUtility\@\@YA_NAEAVActor\@\@AEBVVec3\@\@MAEAV3\@\@Z
 */
MCAPI bool checkForSteeringCollision(class Actor&, class Vec3 const&, float, class Vec3&);
/**
 * @symbol ?chooseRandomDirection\@FlockingUtility\@\@YAXAEAVActor\@\@AEAVVec3\@\@\@Z
 */
MCAPI void chooseRandomDirection(class Actor&, class Vec3&);
/**
 * @symbol ?getWaterHeights\@FlockingUtility\@\@YAXAEBVActor\@\@AEAM1\@Z
 */
MCAPI void getWaterHeights(class Actor const&, float&, float&);

}; // namespace FlockingUtility
