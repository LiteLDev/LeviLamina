#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NavigationUtility {
// NOLINTBEGIN
// symbol: ?canFlyDirectly@NavigationUtility@@YA_NAEAVMob@@AEBVVec3@@1@Z
MCAPI bool canFlyDirectly(class Mob& mob, class Vec3 const& startPos, class Vec3 const& stopPos);

// symbol: ?canMoveDirectly@NavigationUtility@@YA_NAEAVMob@@AEBVVec3@@1HHH_N@Z
MCAPI bool canMoveDirectly(
    class Mob&        mob,
    class Vec3 const& startPos,
    class Vec3 const& stopPos,
    int               sx,
    int               sy,
    int               sz,
    bool              isClimbing
);

// symbol: ?canMoveDirectlyWaterBound@NavigationUtility@@YA_NAEBVMob@@AEBVVec3@@1@Z
MCAPI bool canMoveDirectlyWaterBound(class Mob const& mob, class Vec3 const& startPos, class Vec3 const& stopPos);

// symbol: ?canWalkDirectly@NavigationUtility@@YA_NAEAVMob@@AEBVVec3@@1HHH_N@Z
MCAPI bool canWalkDirectly(
    class Mob&        mob,
    class Vec3 const& startPos,
    class Vec3 const& stopPos,
    int               sx,
    int               sy,
    int               sz,
    bool              isClimbing
);

// symbol: ?canWalkOn@NavigationUtility@@YA_NAEAVMob@@HHHHHHAEBVVec3@@MM_N@Z
MCAPI bool canWalkOn(
    class Mob&        mob,
    int               x,
    int               y,
    int               z,
    int               sx,
    int               sy,
    int               sz,
    class Vec3 const& startPos,
    float             goalDirX,
    float             goalDirZ,
    bool              isClimbing
);

// symbol: ?closeToDone@NavigationUtility@@YA_NAEBVMob@@M@Z
MCAPI bool closeToDone(class Mob const& mob, float dist);

// symbol: ?flyCondition@NavigationUtility@@YA_NAEBVMob@@AEAVBlockSource@@HHH@Z
MCAPI bool flyCondition(class Mob const& mob, class BlockSource& region, int gridPosX, int gridPosY, int gridPosZ);

// symbol: ?getHeightDifference@NavigationUtility@@YAMAEAVBlockSource@@AEBVVec3@@AEBVBlock@@AEBVBlockPos@@@Z
MCAPI float getHeightDifference(
    class BlockSource&    region,
    class Vec3 const&     currentPos,
    class Block const&    block,
    class BlockPos const& blockPos
);

// symbol: ?getMobScale@NavigationUtility@@YA?BVBlockPos@@AEBVMob@@@Z
MCAPI class BlockPos const getMobScale(class Mob const& mob);

// symbol: ?getSurfaceY@NavigationUtility@@YAHAEBVMob@@@Z
MCAPI int getSurfaceY(class Mob const& mob);

// symbol: ?invalidPathStartStatus@NavigationUtility@@YA_NAEBVMob@@AEAVBlockPos@@@Z
MCAPI bool invalidPathStartStatus(class Mob const& mob, class BlockPos& startPosition);

// symbol: ?isDoorBlockingPath@NavigationUtility@@YA_NAEBVMob@@AEBVBlock@@AEBVPath@@AEBVBlockPos@@_K@Z
MCAPI bool isDoorBlockingPath(
    class Mob const&      mob,
    class Block const&    block,
    class Path const&     path,
    class BlockPos const& nodePos,
    uint64                index
);

// symbol: ?isInLiquid@NavigationUtility@@YA_NAEBVMob@@@Z
MCAPI bool isInLiquid(class Mob const& mob);

// symbol: ?isInNode@NavigationUtility@@YA_NAEBVMob@@AEBVBlockPos@@@Z
MCAPI bool isInNode(class Mob const& mob, class BlockPos const& nodePos);

// symbol: ?isLastNode@NavigationUtility@@YA_N_KAEBVPath@@@Z
MCAPI bool isLastNode(uint64 index, class Path const& path);

// symbol: ?isStableDestination@NavigationUtility@@YA_NAEBVMob@@AEAVBlockPos@@@Z
MCAPI bool isStableDestination(class Mob const& mob, class BlockPos& pos);

// symbol: ?isStairBlockFacingMob@NavigationUtility@@YA_NAEBVMob@@AEBVBlockPos@@@Z
MCAPI bool isStairBlockFacingMob(class Mob const& mob, class BlockPos const& blockPos);

// symbol: ?moveCondition@NavigationUtility@@YA_NAEBVMob@@AEBVBlock@@@Z
MCAPI bool moveCondition(class Mob const& mob, class Block const& block);

// symbol: ?swimCondition@NavigationUtility@@YA_NAEBVMob@@AEAVBlockSource@@HHH@Z
MCAPI bool swimCondition(class Mob const&, class BlockSource& region, int gridPosX, int gridPosY, int gridPosZ);

// symbol: ?trimPathFromSun@NavigationUtility@@YAXAEBVMob@@@Z
MCAPI void trimPathFromSun(class Mob const& mob);
// NOLINTEND

}; // namespace NavigationUtility
