#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct ActorRotationComponent;
struct GetAttachPositionViews;
struct OffsetsComponent;
struct PassengerRenderingRidingOffsetComponent;
struct VanillaOffsetComponent;
// clang-format on

namespace GetAttachPositionUtility {
// functions
// NOLINTBEGIN
MCNAPI ::Vec3 _getBaseAttachPoint(
    ::SharedTypes::Legacy::ActorLocation                            location,
    ::Vec3 const&                                                   interpolatedPosition,
    ::AABBShapeComponent const&                                     aabbShapeComponent,
    ::ActorRotationComponent const&                                 actorRotationComponent,
    ::OffsetsComponent const&                                       offsetsComponent,
    ::optional_ref<::PassengerRenderingRidingOffsetComponent const> ridingOffset,
    ::optional_ref<::VanillaOffsetComponent const>                  vanillaOffsetComponent,
    float                                                           actorHeadRotation,
    float                                                           alpha
);

MCNAPI ::std::optional<::Vec3> getAttachPosition(
    ::StrictEntityContext const&         entity,
    ::GetAttachPositionViews const&      views,
    ::SharedTypes::Legacy::ActorLocation location,
    ::Vec3 const&                        interpolatedPosition
);

MCNAPI ::Vec3 getPassengerAttachPos(
    ::StrictEntityContext const&         entity,
    ::GetAttachPositionViews const&      views,
    ::SharedTypes::Legacy::ActorLocation location,
    float                                alpha
);
// NOLINTEND

} // namespace GetAttachPositionUtility
