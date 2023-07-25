#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopeParams {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPEPARAMS
public:
    RopeParams& operator=(RopeParams const&) = delete;
    RopeParams(RopeParams const&)            = delete;
    RopeParams()                             = delete;
#endif

public:
    /**
     * @symbol ??0RopeParams\@\@QEAA\@AEBVVec3\@\@0M\@Z
     */
    MCAPI RopeParams(class Vec3 const&, class Vec3 const&, float);
    /**
     * @symbol ?leadInit\@RopeParams\@\@QEAAXXZ
     */
    MCAPI void leadInit();
};
