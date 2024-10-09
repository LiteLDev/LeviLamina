#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/actor/ActorLocation.h"

namespace GetAttachPositionUtility {
// NOLINTBEGIN
MCAPI class Vec3 _getBaseAttachPoint(
    ::ActorLocation                                                          location,
    class Vec3 const&                                                        interpolatedPosition,
    struct AABBShapeComponent const&                                         aabbShapeComponent,
    struct ActorRotationComponent const&                                     actorRotationComponent,
    struct OffsetsComponent const&                                           offsetsComponent,
    class optional_ref<struct PassengerRenderingRidingOffsetComponent const> ridingOffset,
    class optional_ref<struct VanillaOffsetComponent const>                  vanillaOffsetComponent,
    float                                                                    actorHeadRotation,
    float                                                                    alpha
);

MCAPI std::optional<class Vec3> getAttachPosition(
    class StrictEntityContext const&     entity,
    struct GetAttachPositionViews const& views,
    ::ActorLocation                      location,
    class Vec3 const&                    interpolatedPosition
);

MCAPI class Vec3 getNonPassengerAttachPos(
    struct StateVectorComponent const&                          stateVector,
    class optional_ref<struct ActorHeadRotationComponent const> headRotation,
    struct AABBShapeComponent const&                            aabbShape,
    struct ActorRotationComponent const&                        actorRotation,
    struct OffsetsComponent const&                              offsets,
    class optional_ref<struct VanillaOffsetComponent const>     vanillaOffset,
    ::ActorLocation                                             location,
    float                                                       alpha
);

MCAPI class Vec3 getPassengerAttachPos(
    class StrictEntityContext const&     entity,
    struct GetAttachPositionViews const& views,
    ::ActorLocation                      location,
    float                                alpha
);
// NOLINTEND

}; // namespace GetAttachPositionUtility
