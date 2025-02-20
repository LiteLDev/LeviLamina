#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Mob;
class Path;
class Vec3;
// clang-format on

namespace NavigationUtility {
// functions
// NOLINTBEGIN
MCAPI bool
canMoveDirectly(::Mob& mob, ::Vec3 const& startPos, ::Vec3 const& stopPos, int sx, int sy, int sz, bool isClimbing);

MCAPI bool canMoveDirectlyWaterBound(::Mob const& mob, ::Vec3 const& startPos, ::Vec3 const& stopPos);

MCAPI bool canWalkAbove(
    ::Mob&        mob,
    int           startX,
    int           startY,
    int           startZ,
    int           sx,
    int           sy,
    int           sz,
    ::Vec3 const& startPos,
    float         goalDirX,
    float         goalDirZ,
    bool          isClimbing
);

MCAPI bool
canWalkDirectly(::Mob& mob, ::Vec3 const& startPos, ::Vec3 const& stopPos, int sx, int sy, int sz, bool isClimbing);

MCAPI bool canWalkOn(
    ::Mob&        mob,
    int           x,
    int           y,
    int           z,
    int           sx,
    int           sy,
    int           sz,
    ::Vec3 const& startPos,
    float         goalDirX,
    float         goalDirZ,
    bool          isClimbing
);

MCAPI bool closeToDone(::Mob const& mob, float dist);

MCAPI bool flyCondition(::Mob const& mob, ::BlockSource& region, int gridPosX, int gridPosY, int gridPosZ);

MCAPI int getSurfaceY(::Mob const& mob);

MCAPI bool invalidPathStartStatus(::Mob const& mob, ::BlockPos& startPosition);

MCAPI bool
isDoorBlockingPath(::Mob const& mob, ::Block const& block, ::Path const& path, ::BlockPos const& nodePos, uint64 index);

MCAPI bool isInLiquid(::Mob const& mob);

MCAPI bool isInNode(::Mob const& mob, ::BlockPos const& nodePos);

MCAPI bool isStairBlockFacingMob(::Mob const& mob, ::BlockPos const& blockPos);

MCAPI bool moveCondition(::Mob const& mob, ::Block const& block);

MCAPI bool swimCondition(::Mob const&, ::BlockSource& region, int gridPosX, int gridPosY, int gridPosZ);

MCAPI void trimPathFromSun(::Mob const& mob);
// NOLINTEND

} // namespace NavigationUtility
