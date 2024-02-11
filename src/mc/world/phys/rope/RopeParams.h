#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopeParams {
public:
    // prevent constructor by default
    RopeParams& operator=(RopeParams const&);
    RopeParams(RopeParams const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RopeParams@@QEAA@XZ
    MCAPI RopeParams();

    // symbol: ??0RopeParams@@QEAA@AEBVVec3@@0M@Z
    MCAPI RopeParams(class Vec3 const& startPin, class Vec3 const& endPin, float length);

    // symbol: ?leadInit@RopeParams@@QEAAXXZ
    MCAPI void leadInit();

    // NOLINTEND
};
