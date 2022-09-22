/**
 * @file  NavigationUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1622415778
     * @symbol ?canFlyDirectly@NavigationUtility@@YA_NAEAVMob@@AEBVVec3@@1@Z
     */
    MCAPI bool canFlyDirectly(class Mob &, class Vec3 const &, class Vec3 const &);
    /**
     * @hash   1883956118
     * @symbol ?canMoveDirectly@NavigationUtility@@YA_NAEAVMob@@AEBVVec3@@1HHH_N@Z
     */
    MCAPI bool canMoveDirectly(class Mob &, class Vec3 const &, class Vec3 const &, int, int, int, bool);
    /**
     * @hash   -1272557932
     * @symbol ?canMoveDirectlyWaterBound@NavigationUtility@@YA_NAEBVMob@@AEBVVec3@@1@Z
     */
    MCAPI bool canMoveDirectlyWaterBound(class Mob const &, class Vec3 const &, class Vec3 const &);
    /**
     * @hash   487204790
     * @symbol ?canWalkDirectly@NavigationUtility@@YA_NAEAVMob@@AEBVVec3@@1HHH_N@Z
     */
    MCAPI bool canWalkDirectly(class Mob &, class Vec3 const &, class Vec3 const &, int, int, int, bool);
    /**
     * @hash   -1175287550
     * @symbol ?canWalkOn@NavigationUtility@@YA_NAEAVMob@@HHHHHHAEBVVec3@@MM_N@Z
     */
    MCAPI bool canWalkOn(class Mob &, int, int, int, int, int, int, class Vec3 const &, float, float, bool);
    /**
     * @hash   396353451
     * @symbol ?closeToDone@NavigationUtility@@YA_NAEBVMob@@M@Z
     */
    MCAPI bool closeToDone(class Mob const &, float);
    /**
     * @hash   -1652208198
     * @symbol ?flyCondition@NavigationUtility@@YA_NAEBVMob@@AEAVBlockSource@@HHH@Z
     */
    MCAPI bool flyCondition(class Mob const &, class BlockSource &, int, int, int);
    /**
     * @hash   1254019083
     * @symbol ?getHeightDifference@NavigationUtility@@YAMAEAVBlockSource@@AEBVVec3@@AEBVBlock@@AEBVBlockPos@@@Z
     */
    MCAPI float getHeightDifference(class BlockSource &, class Vec3 const &, class Block const &, class BlockPos const &);
    /**
     * @hash   -7851778
     * @symbol ?getMobScale@NavigationUtility@@YA?BVBlockPos@@AEBVMob@@@Z
     */
    MCAPI class BlockPos const getMobScale(class Mob const &);
    /**
     * @hash   1787261010
     * @symbol ?getSurfaceY@NavigationUtility@@YAHAEBVMob@@@Z
     */
    MCAPI int getSurfaceY(class Mob const &);
    /**
     * @hash   916666617
     * @symbol ?invalidPathStartStatus@NavigationUtility@@YA_NAEBVMob@@AEAVBlockPos@@@Z
     */
    MCAPI bool invalidPathStartStatus(class Mob const &, class BlockPos &);
    /**
     * @hash   -420702691
     * @symbol ?isDoorBlockingPath@NavigationUtility@@YA_NAEBVMob@@AEBVBlock@@AEBVPath@@AEBVBlockPos@@_K@Z
     */
    MCAPI bool isDoorBlockingPath(class Mob const &, class Block const &, class Path const &, class BlockPos const &, unsigned __int64);
    /**
     * @hash   1345002568
     * @symbol ?isInLiquid@NavigationUtility@@YA_NAEBVMob@@@Z
     */
    MCAPI bool isInLiquid(class Mob const &);
    /**
     * @hash   -820182167
     * @symbol ?isInNode@NavigationUtility@@YA_NAEBVMob@@AEBVBlockPos@@@Z
     */
    MCAPI bool isInNode(class Mob const &, class BlockPos const &);
    /**
     * @hash   157681256
     * @symbol ?isLastNode@NavigationUtility@@YA_N_KAEBVPath@@@Z
     */
    MCAPI bool isLastNode(unsigned __int64, class Path const &);
    /**
     * @hash   -2106244675
     * @symbol ?isStableDestination@NavigationUtility@@YA_NAEBVMob@@AEAVBlockPos@@@Z
     */
    MCAPI bool isStableDestination(class Mob const &, class BlockPos &);
    /**
     * @hash   1167996857
     * @symbol ?isStairBlockFacingMob@NavigationUtility@@YA_NAEBVMob@@AEBVBlockPos@@@Z
     */
    MCAPI bool isStairBlockFacingMob(class Mob const &, class BlockPos const &);
    /**
     * @hash   982568925
     * @symbol ?moveCondition@NavigationUtility@@YA_NAEBVMob@@AEBVBlock@@@Z
     */
    MCAPI bool moveCondition(class Mob const &, class Block const &);
    /**
     * @hash   1620604060
     * @symbol ?swimCondition@NavigationUtility@@YA_NAEBVMob@@AEAVBlockSource@@HHH@Z
     */
    MCAPI bool swimCondition(class Mob const &, class BlockSource &, int, int, int);
    /**
     * @hash   333257333
     * @symbol ?trimPathFromSun@NavigationUtility@@YAXAEBVMob@@@Z
     */
    MCAPI void trimPathFromSun(class Mob const &);

};