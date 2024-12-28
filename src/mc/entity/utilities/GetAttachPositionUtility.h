#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct GetAttachPositionViews;
struct OffsetsComponent;
struct PassengerRenderingRidingOffsetComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
// clang-format on

namespace GetAttachPositionUtility {
// functions
// NOLINTBEGIN
MCAPI ::Vec3 _getBaseAttachPoint(
    ::ActorLocation                                                 location,
    ::Vec3 const&                                                   interpolatedPosition,
    ::AABBShapeComponent const&                                     aabbShapeComponent,
    ::ActorRotationComponent const&                                 actorRotationComponent,
    ::OffsetsComponent const&                                       offsetsComponent,
    ::optional_ref<::PassengerRenderingRidingOffsetComponent const> ridingOffset,
    ::optional_ref<::VanillaOffsetComponent const>                  vanillaOffsetComponent,
    float                                                           actorHeadRotation,
    float                                                           alpha
);

MCAPI ::std::optional<::Vec3> getAttachPosition(
    ::StrictEntityContext const&    entity,
    ::GetAttachPositionViews const& views,
    ::ActorLocation                 location,
    ::Vec3 const&                   interpolatedPosition
);

MCAPI ::Vec3 getNonPassengerAttachPos(
    ::StateVectorComponent const&                      stateVector,
    ::optional_ref<::ActorHeadRotationComponent const> headRotation,
    ::AABBShapeComponent const&                        aabbShape,
    ::ActorRotationComponent const&                    actorRotation,
    ::OffsetsComponent const&                          offsets,
    ::optional_ref<::VanillaOffsetComponent const>     vanillaOffset,
    ::ActorLocation                                    location,
    float                                              alpha
);

MCAPI ::Vec3 getPassengerAttachPos(
    ::StrictEntityContext const&    entity,
    ::GetAttachPositionViews const& views,
    ::ActorLocation                 location,
    float                           alpha
);

MCAPI ::std::optional<::Vec3> tryGetPassengerAttachPos(
    ::StrictEntityContext const&    entity,
    ::GetAttachPositionViews const& views,
    ::ActorLocation                 location,
    float                           alpha
);
// NOLINTEND

} // namespace GetAttachPositionUtility
