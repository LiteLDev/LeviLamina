#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/utilities/ActorLocation.h"

namespace GetAttachPositionUtility {
// NOLINTBEGIN
MCAPI class Vec3 _getBaseAttachPoint(
    ::ActorLocation,
    class Vec3 const&,
    struct AABBShapeComponent const&,
    struct ActorRotationComponent const&,
    struct OffsetsComponent const&,
    class optional_ref<struct PassengerRenderingRidingOffsetComponent const>,
    class optional_ref<struct VanillaOffsetComponent const>,
    float,
    float
);

MCAPI std::optional<class Vec3>
getAttachPosition(class StrictEntityContext const&, struct GetAttachPositionViews const&, ::ActorLocation, class Vec3 const&);

MCAPI class Vec3 getNonPassengerAttachPos(
    struct StateVectorComponent const&,
    class optional_ref<struct ActorHeadRotationComponent const>,
    struct AABBShapeComponent const&,
    struct ActorRotationComponent const&,
    struct OffsetsComponent const&,
    class optional_ref<struct VanillaOffsetComponent const>,
    ::ActorLocation,
    float
);

MCAPI class Vec3
getPassengerAttachPos(class StrictEntityContext const&, struct GetAttachPositionViews const&, ::ActorLocation, float);
// NOLINTEND

}; // namespace GetAttachPositionUtility
