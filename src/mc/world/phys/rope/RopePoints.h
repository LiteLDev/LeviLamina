#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RopePoints {
public:
    // prevent constructor by default
    RopePoints& operator=(RopePoints const&);
    RopePoints(RopePoints const&);
    RopePoints();

public:
    // NOLINTBEGIN
    // symbol: ?beginRope@RopePoints@@QEAAXXZ
    MCAPI void beginRope();

    // symbol: ?endRope@RopePoints@@QEAAXXZ
    MCAPI void endRope();

    // symbol: ?freezeInterpolation@RopePoints@@QEAAXXZ
    MCAPI void freezeInterpolation();

    // symbol: ?pushBack@RopePoints@@QEAAXAEBVVec3@@@Z
    MCAPI void pushBack(class Vec3 const& newPoint);

    // symbol: ?reserve@RopePoints@@QEAAX_K@Z
    MCAPI void reserve(uint64 size);

    // symbol: ?size@RopePoints@@QEBA_KXZ
    MCAPI uint64 size() const;

    // symbol: ??1RopePoints@@QEAA@XZ
    MCAPI ~RopePoints();

    // NOLINTEND
};
