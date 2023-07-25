#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopeAABB {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPEAABB
public:
    RopeAABB& operator=(RopeAABB const&) = delete;
    RopeAABB(RopeAABB const&)            = delete;
    RopeAABB()                           = delete;
#endif

public:
    /**
     * @symbol ?getContactPoint\@RopeAABB\@\@QEBA_NAEBVVec3\@\@MAEAUAABBContactPoint\@\@\@Z
     */
    MCAPI bool getContactPoint(class Vec3 const&, float, struct AABBContactPoint&) const;
};
