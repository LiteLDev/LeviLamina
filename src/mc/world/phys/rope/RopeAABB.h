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
    MCAPI bool getContactPoint(class Vec3 const& nodePos, float nodeSize, struct AABBContactPoint& result) const;

    // NOLINTEND
};
