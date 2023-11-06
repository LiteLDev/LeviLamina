#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroundTravelTypeSystem {
public:
    // prevent constructor by default
    GroundTravelTypeSystem& operator=(GroundTravelTypeSystem const&);
    GroundTravelTypeSystem(GroundTravelTypeSystem const&);
    GroundTravelTypeSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?calcMoveRelativeSpeed@GroundTravelTypeSystem@@SAMAEBVIConstBlockSource@@AEBVVec3@@AEBVAABB@@M_NAEBVBaseGameVersion@@@Z
    MCAPI static float
    calcMoveRelativeSpeed(class IConstBlockSource const&, class Vec3 const&, class AABB const&, float, bool, class BaseGameVersion const&);

    // symbol: ?create@GroundTravelTypeSystem@@SA?AUTickingSystemWithInfo@@AEBVBaseGameVersion@@@Z
    MCAPI static struct TickingSystemWithInfo create(class BaseGameVersion const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?FRICTION_FIX_VERSION@GroundTravelTypeSystem@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const FRICTION_FIX_VERSION;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $FRICTION_FIX_VERSION() { return FRICTION_FIX_VERSION; }

    // NOLINTEND
};
