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
    MCAPI static float calcMoveRelativeSpeed(
        class IConstBlockSource const& region,
        class Vec3 const&              pos,
        class AABB const&              aabb,
        float                          speed,
        bool,
        class BaseGameVersion const& version
    );

    // symbol: ?create@GroundTravelTypeSystem@@SA?AUTickingSystemWithInfo@@AEBVBaseGameVersion@@@Z
    MCAPI static struct TickingSystemWithInfo create(class BaseGameVersion const& version);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?FRICTION_FIX_VERSION@GroundTravelTypeSystem@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const FRICTION_FIX_VERSION;

    // NOLINTEND
};
