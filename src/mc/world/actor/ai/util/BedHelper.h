#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BedHelper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDHELPER
public:
    BedHelper& operator=(BedHelper const&) = delete;
    BedHelper(BedHelper const&)            = delete;
    BedHelper()                            = delete;
#endif

public:
    /**
     * @symbol ?getBedRotation\@BedHelper\@\@QEBAMH\@Z
     */
    MCAPI float getBedRotation(int) const;
    /**
     * @symbol ?setBedPositionOffsets\@BedHelper\@\@QEAAXHAEAM0AEAVVec3\@\@\@Z
     */
    MCAPI void setBedPositionOffsets(int, float&, float&, class Vec3&);
};
