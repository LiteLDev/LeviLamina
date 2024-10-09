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
    MCAPI static float calcMoveRelativeSpeed(
        class IConstBlockSource const& region,
        class Vec3 const&              pos,
        class AABB const&              aabb,
        float                          speed,
        bool                           hasSoulSpeedEnchant,
        class BaseGameVersion const&   version
    );

    MCAPI static struct TickingSystemWithInfo create(class BaseGameVersion const& version);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const FRICTION_FIX_VERSION;

    // NOLINTEND
};
