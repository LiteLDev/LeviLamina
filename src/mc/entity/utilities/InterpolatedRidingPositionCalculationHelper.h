#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

struct InterpolatedRidingPositionCalculationHelper {
public:
    // prevent constructor by default
    InterpolatedRidingPositionCalculationHelper& operator=(InterpolatedRidingPositionCalculationHelper const&);
    InterpolatedRidingPositionCalculationHelper(InterpolatedRidingPositionCalculationHelper const&);
    InterpolatedRidingPositionCalculationHelper();

public:
    // NOLINTBEGIN
    MCAPI static class Vec3 getCamelInterpolatedRidingOffset(bool isSitting);

    MCAPI static class Vec3 getHorseInterpolatedRidingOffset(
        class StrictEntityContext const& entity,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct HorseFlag>>,
            struct StandAnimationComponent const> const& horses,
        class ViewT<
            class StrictEntityContext,
            struct ActorRotationComponent const,
            struct RenderRotationComponent const,
            struct StateVectorComponent const,
            struct ActorDataFlagComponent const,
            struct ActorDataSeatOffsetComponent const> const& commonData,
        float                                                 alpha
    );

    // NOLINTEND
};
