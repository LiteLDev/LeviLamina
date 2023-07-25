#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RenderingRidingOffsetSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDERINGRIDINGOFFSETSYSTEM
public:
    RenderingRidingOffsetSystem& operator=(RenderingRidingOffsetSystem const&) = delete;
    RenderingRidingOffsetSystem(RenderingRidingOffsetSystem const&)            = delete;
    RenderingRidingOffsetSystem()                                              = delete;
#endif

public:
    /**
     * @symbol
     * ?getInterpolatedRenderingRidingOffset\@RenderingRidingOffsetSystem\@\@SA?AVVec3\@\@PEBUPassengerRenderingRidingOffsetComponent\@\@M\@Z
     */
    MCAPI static class Vec3
    getInterpolatedRenderingRidingOffset(struct PassengerRenderingRidingOffsetComponent const*, float);
};
