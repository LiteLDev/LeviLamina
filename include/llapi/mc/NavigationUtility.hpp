/**
 * @file  NavigationUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace NavigationUtility.
 *
 */
namespace NavigationUtility {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?canFlyDirectly\@NavigationUtility\@\@YA_NAEAVMob\@\@AEBVVec3\@\@1\@Z
     */
    MCAPI bool canFlyDirectly(class Mob &, class Vec3 const &, class Vec3 const &);
    /**
     * @symbol  ?canMoveDirectly\@NavigationUtility\@\@YA_NAEAVMob\@\@AEBVVec3\@\@1HHH_N\@Z
     */
    MCAPI bool canMoveDirectly(class Mob &, class Vec3 const &, class Vec3 const &, int, int, int, bool);
    /**
     * @symbol  ?canMoveDirectlyWaterBound\@NavigationUtility\@\@YA_NAEBVMob\@\@AEBVVec3\@\@1\@Z
     */
    MCAPI bool canMoveDirectlyWaterBound(class Mob const &, class Vec3 const &, class Vec3 const &);
    /**
     * @symbol  ?canWalkDirectly\@NavigationUtility\@\@YA_NAEAVMob\@\@AEBVVec3\@\@1HHH_N\@Z
     */
    MCAPI bool canWalkDirectly(class Mob &, class Vec3 const &, class Vec3 const &, int, int, int, bool);
    /**
     * @symbol  ?canWalkOn\@NavigationUtility\@\@YA_NAEAVMob\@\@HHHHHHAEBVVec3\@\@MM_N\@Z
     */
    MCAPI bool canWalkOn(class Mob &, int, int, int, int, int, int, class Vec3 const &, float, float, bool);
    /**
     * @symbol  ?closeToDone\@NavigationUtility\@\@YA_NAEBVMob\@\@M\@Z
     */
    MCAPI bool closeToDone(class Mob const &, float);
    /**
     * @symbol  ?flyCondition\@NavigationUtility\@\@YA_NAEBVMob\@\@AEAVBlockSource\@\@HHH\@Z
     */
    MCAPI bool flyCondition(class Mob const &, class BlockSource &, int, int, int);
    /**
     * @symbol  ?getHeightDifference\@NavigationUtility\@\@YAMAEAVBlockSource\@\@AEBVVec3\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI float getHeightDifference(class BlockSource &, class Vec3 const &, class Block const &, class BlockPos const &);
    /**
     * @symbol  ?getMobScale\@NavigationUtility\@\@YA?BVBlockPos\@\@AEBVMob\@\@\@Z
     */
    MCAPI class BlockPos const getMobScale(class Mob const &);
    /**
     * @symbol  ?getSurfaceY\@NavigationUtility\@\@YAHAEBVMob\@\@\@Z
     */
    MCAPI int getSurfaceY(class Mob const &);
    /**
     * @symbol  ?invalidPathStartStatus\@NavigationUtility\@\@YA_NAEBVMob\@\@AEAVBlockPos\@\@\@Z
     */
    MCAPI bool invalidPathStartStatus(class Mob const &, class BlockPos &);
    /**
     * @symbol  ?isDoorBlockingPath\@NavigationUtility\@\@YA_NAEBVMob\@\@AEBVBlock\@\@AEBVPath\@\@AEBVBlockPos\@\@_K\@Z
     */
    MCAPI bool isDoorBlockingPath(class Mob const &, class Block const &, class Path const &, class BlockPos const &, unsigned __int64);
    /**
     * @symbol  ?isInLiquid\@NavigationUtility\@\@YA_NAEBVMob\@\@\@Z
     */
    MCAPI bool isInLiquid(class Mob const &);
    /**
     * @symbol  ?isInNode\@NavigationUtility\@\@YA_NAEBVMob\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isInNode(class Mob const &, class BlockPos const &);
    /**
     * @symbol  ?isLastNode\@NavigationUtility\@\@YA_N_KAEBVPath\@\@\@Z
     */
    MCAPI bool isLastNode(unsigned __int64, class Path const &);
    /**
     * @symbol  ?isStableDestination\@NavigationUtility\@\@YA_NAEBVMob\@\@AEAVBlockPos\@\@\@Z
     */
    MCAPI bool isStableDestination(class Mob const &, class BlockPos &);
    /**
     * @symbol  ?isStairBlockFacingMob\@NavigationUtility\@\@YA_NAEBVMob\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isStairBlockFacingMob(class Mob const &, class BlockPos const &);
    /**
     * @symbol  ?moveCondition\@NavigationUtility\@\@YA_NAEBVMob\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool moveCondition(class Mob const &, class Block const &);
    /**
     * @symbol  ?swimCondition\@NavigationUtility\@\@YA_NAEBVMob\@\@AEAVBlockSource\@\@HHH\@Z
     */
    MCAPI bool swimCondition(class Mob const &, class BlockSource &, int, int, int);
    /**
     * @symbol  ?trimPathFromSun\@NavigationUtility\@\@YAXAEBVMob\@\@\@Z
     */
    MCAPI void trimPathFromSun(class Mob const &);

};