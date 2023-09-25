/**
 * @file  GroundTravelTypeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GroundTravelTypeSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDTRAVELTYPESYSTEM
public:
    class GroundTravelTypeSystem& operator=(class GroundTravelTypeSystem const &) = delete;
    GroundTravelTypeSystem(class GroundTravelTypeSystem const &) = delete;
    GroundTravelTypeSystem() = delete;
#endif

public:
    /**
     * @symbol ?calcMoveRelativeSpeed\@GroundTravelTypeSystem\@\@SAMAEBVIConstBlockSource\@\@AEBVVec3\@\@AEBVAABB\@\@M_NAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static float calcMoveRelativeSpeed(class IConstBlockSource const &, class Vec3 const &, class AABB const &, float, bool, class BaseGameVersion const &);
    /**
     * @symbol ?create\@GroundTravelTypeSystem\@\@SA?AUTickingSystemWithInfo\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static struct TickingSystemWithInfo create(class BaseGameVersion const &);

//private:

private:
    /**
     * @symbol ?FRICTION_FIX_VERSION\@GroundTravelTypeSystem\@\@0VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const FRICTION_FIX_VERSION;

};
