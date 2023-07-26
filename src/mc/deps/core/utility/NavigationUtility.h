#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NavigationUtility {
/**
 * @symbol ?canFlyDirectly\@NavigationUtility\@\@YA_NAEAVMob\@\@AEBVVec3\@\@1\@Z
 */
MCAPI bool canFlyDirectly(class Mob&, class Vec3 const&, class Vec3 const&); // NOLINT
/**
 * @symbol ?canMoveDirectly\@NavigationUtility\@\@YA_NAEAVMob\@\@AEBVVec3\@\@1HHH_N\@Z
 */
MCAPI bool canMoveDirectly(class Mob&, class Vec3 const&, class Vec3 const&, int, int, int, bool); // NOLINT
/**
 * @symbol ?canMoveDirectlyWaterBound\@NavigationUtility\@\@YA_NAEBVMob\@\@AEBVVec3\@\@1\@Z
 */
MCAPI bool canMoveDirectlyWaterBound(class Mob const&, class Vec3 const&, class Vec3 const&); // NOLINT
/**
 * @symbol ?canWalkDirectly\@NavigationUtility\@\@YA_NAEAVMob\@\@AEBVVec3\@\@1HHH_N\@Z
 */
MCAPI bool canWalkDirectly(class Mob&, class Vec3 const&, class Vec3 const&, int, int, int, bool); // NOLINT
/**
 * @symbol ?canWalkOn\@NavigationUtility\@\@YA_NAEAVMob\@\@HHHHHHAEBVVec3\@\@MM_N\@Z
 */
MCAPI bool canWalkOn(class Mob&, int, int, int, int, int, int, class Vec3 const&, float, float, bool); // NOLINT
/**
 * @symbol ?closeToDone\@NavigationUtility\@\@YA_NAEBVMob\@\@M\@Z
 */
MCAPI bool closeToDone(class Mob const&, float); // NOLINT
/**
 * @symbol ?flyCondition\@NavigationUtility\@\@YA_NAEBVMob\@\@AEAVBlockSource\@\@HHH\@Z
 */
MCAPI bool flyCondition(class Mob const&, class BlockSource&, int, int, int); // NOLINT
/**
 * @symbol ?getHeightDifference\@NavigationUtility\@\@YAMAEAVBlockSource\@\@AEBVVec3\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI float
getHeightDifference(class BlockSource&, class Vec3 const&, class Block const&, class BlockPos const&); // NOLINT
/**
 * @symbol ?getMobScale\@NavigationUtility\@\@YA?BVBlockPos\@\@AEBVMob\@\@\@Z
 */
MCAPI class BlockPos const getMobScale(class Mob const&); // NOLINT
/**
 * @symbol ?getSurfaceY\@NavigationUtility\@\@YAHAEBVMob\@\@\@Z
 */
MCAPI int getSurfaceY(class Mob const&); // NOLINT
/**
 * @symbol ?invalidPathStartStatus\@NavigationUtility\@\@YA_NAEBVMob\@\@AEAVBlockPos\@\@\@Z
 */
MCAPI bool invalidPathStartStatus(class Mob const&, class BlockPos&); // NOLINT
/**
 * @symbol ?isDoorBlockingPath\@NavigationUtility\@\@YA_NAEBVMob\@\@AEBVBlock\@\@AEBVPath\@\@AEBVBlockPos\@\@_K\@Z
 */
MCAPI bool isDoorBlockingPath(
    class Mob const&,
    class Block const&,
    class Path const&,
    class BlockPos const&,
    unsigned __int64
); // NOLINT
/**
 * @symbol ?isInLiquid\@NavigationUtility\@\@YA_NAEBVMob\@\@\@Z
 */
MCAPI bool isInLiquid(class Mob const&); // NOLINT
/**
 * @symbol ?isInNode\@NavigationUtility\@\@YA_NAEBVMob\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI bool isInNode(class Mob const&, class BlockPos const&); // NOLINT
/**
 * @symbol ?isLastNode\@NavigationUtility\@\@YA_N_KAEBVPath\@\@\@Z
 */
MCAPI bool isLastNode(unsigned __int64, class Path const&); // NOLINT
/**
 * @symbol ?isStableDestination\@NavigationUtility\@\@YA_NAEBVMob\@\@AEAVBlockPos\@\@\@Z
 */
MCAPI bool isStableDestination(class Mob const&, class BlockPos&); // NOLINT
/**
 * @symbol ?isStairBlockFacingMob\@NavigationUtility\@\@YA_NAEBVMob\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI bool isStairBlockFacingMob(class Mob const&, class BlockPos const&); // NOLINT
/**
 * @symbol ?moveCondition\@NavigationUtility\@\@YA_NAEBVMob\@\@AEBVBlock\@\@\@Z
 */
MCAPI bool moveCondition(class Mob const&, class Block const&); // NOLINT
/**
 * @symbol ?swimCondition\@NavigationUtility\@\@YA_NAEBVMob\@\@AEAVBlockSource\@\@HHH\@Z
 */
MCAPI bool swimCondition(class Mob const&, class BlockSource&, int, int, int); // NOLINT
/**
 * @symbol ?trimPathFromSun\@NavigationUtility\@\@YAXAEBVMob\@\@\@Z
 */
MCAPI void trimPathFromSun(class Mob const&); // NOLINT

}; // namespace NavigationUtility
