/**
 * @file  RenderingRidingOffsetSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RenderingRidingOffsetSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDERINGRIDINGOFFSETSYSTEM
public:
    class RenderingRidingOffsetSystem& operator=(class RenderingRidingOffsetSystem const &) = delete;
    RenderingRidingOffsetSystem(class RenderingRidingOffsetSystem const &) = delete;
    RenderingRidingOffsetSystem() = delete;
#endif

public:
    /**
     * @symbol ?getInterpolatedRenderingRidingOffset\@RenderingRidingOffsetSystem\@\@SA?AVVec3\@\@PEBUPassengerRenderingRidingOffsetComponent\@\@M\@Z
     */
    MCAPI static class Vec3 getInterpolatedRenderingRidingOffset(struct PassengerRenderingRidingOffsetComponent const *, float);

};
