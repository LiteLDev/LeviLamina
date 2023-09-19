#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopeParams {
public:
    // prevent constructor by default
    RopeParams& operator=(RopeParams const&);
    RopeParams(RopeParams const&);
    RopeParams();

public:
    // NOLINTBEGIN
    // symbol: ??0RopeParams@@QEAA@AEBVVec3@@0M@Z
    MCAPI RopeParams(class Vec3 const&, class Vec3 const&, float);

    // symbol: ?leadInit@RopeParams@@QEAAXXZ
    MCAPI void leadInit();

    // NOLINTEND
};
