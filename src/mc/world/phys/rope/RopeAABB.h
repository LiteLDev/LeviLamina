#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopeAABB {

public:
    // prevent constructor by default
    RopeAABB& operator=(RopeAABB const&) = delete;
    RopeAABB(RopeAABB const&)            = delete;
    RopeAABB()                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getContactPoint\@RopeAABB\@\@QEBA_NAEBVVec3\@\@MAEAUAABBContactPoint\@\@\@Z
     */
    MCAPI bool getContactPoint(class Vec3 const&, float, struct AABBContactPoint&) const;
    // NOLINTEND
};
