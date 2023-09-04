#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/utilities/ActorLocation.h"

namespace GetAttachPositionUtility {
// NOLINTBEGIN
// symbol:
// ?getAttachPosition@GetAttachPositionUtility@@YA?AV?$optional@VVec3@@@std@@AEBVStrictEntityContext@@AEBUGetAttachPositionViews@@W4ActorLocation@@AEBVVec3@@@Z
MCAPI std::optional<class Vec3>
getAttachPosition(class StrictEntityContext const&, struct GetAttachPositionViews const&, ::ActorLocation, class Vec3 const&);

// symbol:
// ?getNonPassengerAttachPos@GetAttachPositionUtility@@YA?AVVec3@@AEBUStateVectorComponent@@V?$optional_ref@$$CBUActorHeadRotationComponent@@@@AEBUAABBShapeComponent@@AEBUActorRotationComponent@@AEBUOffsetsComponent@@V?$optional_ref@$$CBUVanillaOffsetComponent@@@@W4ActorLocation@@M@Z
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

// symbol:
// ?getPassengerAttachPos@GetAttachPositionUtility@@YA?AVVec3@@AEBVStrictEntityContext@@AEBUGetAttachPositionViews@@W4ActorLocation@@M@Z
MCAPI class Vec3
getPassengerAttachPos(class StrictEntityContext const&, struct GetAttachPositionViews const&, ::ActorLocation, float);
// NOLINTEND

}; // namespace GetAttachPositionUtility
