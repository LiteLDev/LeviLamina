#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BedHelper {

public:
    // prevent constructor by default
    BedHelper& operator=(BedHelper const&) = delete;
    BedHelper(BedHelper const&)            = delete;
    BedHelper()                            = delete;

public:
    /**
     * @symbol ?getBedRotation\@BedHelper\@\@QEBAMH\@Z
     */
    MCAPI float getBedRotation(int) const; // NOLINT
    /**
     * @symbol ?setBedPositionOffsets\@BedHelper\@\@QEAAXHAEAM0AEAVVec3\@\@\@Z
     */
    MCAPI void setBedPositionOffsets(int, float&, float&, class Vec3&); // NOLINT
};
