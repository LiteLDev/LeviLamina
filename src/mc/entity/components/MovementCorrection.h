#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CorrectionMethod.h"

struct MovementCorrection {
public:
    // prevent constructor by default
    MovementCorrection& operator=(MovementCorrection const&);
    MovementCorrection(MovementCorrection const&);
    MovementCorrection();

public:
    // NOLINTBEGIN
    // symbol: ??0MovementCorrection@@QEAA@W4CorrectionMethod@@AEBVVec3@@@Z
    MCAPI MovementCorrection(::CorrectionMethod method, class Vec3 const&);

    // NOLINTEND
};
