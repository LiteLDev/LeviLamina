#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class ChangeDimensionRequest {
public:
    // prevent constructor by default
    ChangeDimensionRequest& operator=(ChangeDimensionRequest const&);
    ChangeDimensionRequest(ChangeDimensionRequest const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ChangeDimensionRequest@@QEAA@XZ
    MCAPI ChangeDimensionRequest();

    // symbol: ??0ChangeDimensionRequest@@QEAA@$$QEAV0@@Z
    MCAPI ChangeDimensionRequest(class ChangeDimensionRequest&&);

    // symbol: ??0ChangeDimensionRequest@@QEAA@V?$AutomaticID@VDimension@@H@@0VVec3@@1_N2@Z
    MCAPI ChangeDimensionRequest(DimensionType, DimensionType, class Vec3, class Vec3, bool, bool);

    // symbol: ??1ChangeDimensionRequest@@QEAA@XZ
    MCAPI ~ChangeDimensionRequest();

    // NOLINTEND
};
