#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BedHelper {
public:
    // prevent constructor by default
    BedHelper& operator=(BedHelper const&);
    BedHelper(BedHelper const&);
    BedHelper();

public:
    // NOLINTBEGIN
    MCAPI float getBedRotation(int direction) const;

    MCAPI void setBedPositionOffsets(int direction, float& mobOffsetX, float& mobOffsetZ, class Vec3& bedOffset);

    // NOLINTEND
};
