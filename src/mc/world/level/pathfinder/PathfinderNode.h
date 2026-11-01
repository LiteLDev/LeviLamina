#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/pathfinder/NodeType.h"

class PathfinderNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>               heapIdx;
    ::ll::TypedStorage<4, 4, float>             g;
    ::ll::TypedStorage<4, 4, float>             h;
    ::ll::TypedStorage<4, 4, float>             f;
    ::ll::TypedStorage<4, 4, float>             mCostMalus;
    ::ll::TypedStorage<4, 4, float>             mMoveMalus;
    ::ll::TypedStorage<4, 4, float>             mTargetDist;
    ::ll::TypedStorage<4, 4, ::NodeType>        mType;
    ::ll::TypedStorage<8, 8, ::PathfinderNode*> cameFrom;
    ::ll::TypedStorage<4, 12, ::BlockPos>       pos;
    ::ll::TypedStorage<1, 1, bool>              closed;
    // NOLINTEND
};
