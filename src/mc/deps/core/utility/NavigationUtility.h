#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NavigationUtility {
// NOLINTBEGIN
MCAPI bool canFlyDirectly(class Mob& mob, class Vec3 const& startPos, class Vec3 const& stopPos);

MCAPI bool canMoveDirectly(
    class Mob&        mob,
    class Vec3 const& startPos,
    class Vec3 const& stopPos,
    int               sx,
    int               sy,
    int               sz,
    bool              isClimbing
);

MCAPI bool canMoveDirectlyWaterBound(class Mob const& mob, class Vec3 const& startPos, class Vec3 const& stopPos);

MCAPI bool canWalkDirectly(
    class Mob&        mob,
    class Vec3 const& startPos,
    class Vec3 const& stopPos,
    int               sx,
    int               sy,
    int               sz,
    bool              isClimbing
);

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

MCAPI bool closeToDone(class Mob const& mob, float dist);

MCAPI bool flyCondition(class Mob const& mob, class BlockSource& region, int gridPosX, int gridPosY, int gridPosZ);

MCAPI float getHeightDifference(
    class BlockSource&    region,
    class Vec3 const&     currentPos,
    class Block const&    block,
    class BlockPos const& blockPos
);

MCAPI class BlockPos const getMobScale(class Mob const& mob);

MCAPI int getSurfaceY(class Mob const& mob);

MCAPI bool invalidPathStartStatus(class Mob const& mob, class BlockPos& startPosition);

MCAPI bool isDoorBlockingPath(
    class Mob const&      mob,
    class Block const&    block,
    class Path const&     path,
    class BlockPos const& nodePos,
    uint64                index
);

MCAPI bool isInLiquid(class Mob const& mob);

MCAPI bool isInNode(class Mob const& mob, class BlockPos const& nodePos);

MCAPI bool isLastNode(uint64 index, class Path const& path);

MCAPI bool isStableDestination(class Mob const& mob, class BlockPos& pos);

MCAPI bool isStairBlockFacingMob(class Mob const& mob, class BlockPos const& blockPos);

MCAPI bool moveCondition(class Mob const& mob, class Block const& block);

MCAPI bool swimCondition(class Mob const&, class BlockSource& region, int gridPosX, int gridPosY, int gridPosZ);

MCAPI void trimPathFromSun(class Mob const& mob);
// NOLINTEND

}; // namespace NavigationUtility
