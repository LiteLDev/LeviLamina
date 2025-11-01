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
MCNAPI bool
canMoveDirectly(::Mob& mob, ::Vec3 const& startPos, ::Vec3 const& stopPos, int sx, int sy, int sz, bool isClimbing);

MCNAPI bool canMoveDirectlyWaterBound(::Mob const& mob, ::Vec3 const& startPos, ::Vec3 const& stopPos);

MCNAPI bool canWalkAbove(
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

MCNAPI bool
canWalkDirectly(::Mob& mob, ::Vec3 const& startPos, ::Vec3 const& stopPos, int sx, int sy, int sz, bool isClimbing);

MCNAPI bool canWalkOn(
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

MCNAPI bool closeToDone(::Mob const& mob, float dist);

MCNAPI bool flyCondition(::Mob const& mob, ::BlockSource& region, int gridPosX, int gridPosY, int gridPosZ);

MCNAPI int getSurfaceY(::Mob const& mob);

MCNAPI bool invalidPathStartStatus(::Mob const& mob, ::BlockPos& startPosition);

MCNAPI bool
isDoorBlockingPath(::Mob const& mob, ::Block const& block, ::Path const& path, ::BlockPos const& nodePos, uint64 index);

MCNAPI bool isInLiquid(::Mob const& mob);

MCNAPI bool isInNode(::Mob const& mob, ::BlockPos const& nodePos);

MCNAPI bool isStairBlockFacingMob(::Mob const& mob, ::BlockPos const& blockPos);

MCNAPI bool moveCondition(::Mob const& mob, ::Block const& block);

MCNAPI bool swimCondition(::Mob const&, ::BlockSource& region, int gridPosX, int gridPosY, int gridPosZ);

MCNAPI void trimPathFromSun(::Mob const& mob);
// NOLINTEND

} // namespace NavigationUtility
