#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

struct InterpolatedRidingPositionCalculationHelper {
public:
    // prevent constructor by default
    InterpolatedRidingPositionCalculationHelper& operator=(InterpolatedRidingPositionCalculationHelper const&);
    InterpolatedRidingPositionCalculationHelper(InterpolatedRidingPositionCalculationHelper const&);
    InterpolatedRidingPositionCalculationHelper();

public:
    // NOLINTBEGIN
    MCAPI static class Vec3 getCamelInterpolatedRidingOffset(bool);

    MCAPI static class Vec3 getHorseInterpolatedRidingOffset(
        class StrictEntityContext const&,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct HorseFlag>>,
            struct StandAnimationComponent const> const&,
        class ViewT<
            class StrictEntityContext,
            struct ActorRotationComponent const,
            struct RenderRotationComponent const,
            struct StateVectorComponent const,
            struct ActorDataFlagComponent const,
            struct ActorDataSeatOffsetComponent const> const&,
        float
    );

    // NOLINTEND
};
