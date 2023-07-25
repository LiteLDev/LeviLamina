#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroundTravelTypeSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDTRAVELTYPESYSTEM
public:
    GroundTravelTypeSystem& operator=(GroundTravelTypeSystem const&) = delete;
    GroundTravelTypeSystem(GroundTravelTypeSystem const&)            = delete;
    GroundTravelTypeSystem()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?calcMoveRelativeSpeed\@GroundTravelTypeSystem\@\@SAMAEBUIMobMovementProxy\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static float calcMoveRelativeSpeed(struct IMobMovementProxy const&, class IConstBlockSource const&);
    /**
     * @symbol ?create\@GroundTravelTypeSystem\@\@SA?AUTickingSystemWithInfo\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static struct TickingSystemWithInfo create(class BaseGameVersion const&);

    // private:

private:
    /**
     * @symbol ?FRICTION_FIX_VERSION\@GroundTravelTypeSystem\@\@0VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const FRICTION_FIX_VERSION;
};
