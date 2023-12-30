#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopeAABB {
public:
    // prevent constructor by default
    RopeAABB& operator=(RopeAABB const&);
    RopeAABB(RopeAABB const&);
    RopeAABB();

public:
    // NOLINTBEGIN
    // symbol: ?getContactPoint@RopeAABB@@QEBA_NAEBVVec3@@MAEAUAABBContactPoint@@@Z
    MCAPI bool getContactPoint(class Vec3 const& nodePos, float nodeSize, struct AABBContactPoint& result) const;

    // NOLINTEND
};
