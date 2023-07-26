#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class Optional;
template<typename T0> class optional_ref;
// clang-format on

namespace GetAttachPosSystemImpl {
/**
 * @symbol
 * ?getBaseAttachPoint\@GetAttachPosSystemImpl\@\@YA?AVVec3\@\@AEBUAABBShapeComponent\@\@AEBUActorRotationComponent\@\@AEBUOffsetsComponent\@\@MAEBUGetAttachPosRequestData\@\@V?$optional_ref\@$$CBUPassengerRenderingRidingOffsetComponent\@\@\@\@V?$optional_ref\@$$CBUVanillaOffsetComponent\@\@\@\@\@Z
 */
MCAPI class Vec3
getBaseAttachPoint(struct AABBShapeComponent const&, struct ActorRotationComponent const&, struct OffsetsComponent const&, float, struct GetAttachPosRequestData const&, class optional_ref<struct PassengerRenderingRidingOffsetComponent const>, class optional_ref<struct VanillaOffsetComponent const>); // NOLINT
/**
 * @symbol
 * ?tickEntity\@GetAttachPosSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBV?$Optional\@$$CBUActorHeadRotationComponent\@\@\@\@AEBUActorRotationComponent\@\@AEBUOffsetsComponent\@\@V?$Optional\@$$CBUPassengerRenderingRidingOffsetComponent\@\@\@\@V?$Optional\@$$CBUVanillaOffsetComponent\@\@\@\@AEAUGetAttachPosRequestComponent\@\@\@Z
 */
MCAPI void
tickEntity(class StrictEntityContext const&, struct AABBShapeComponent const&, class Optional<struct ActorHeadRotationComponent const> const&, struct ActorRotationComponent const&, struct OffsetsComponent const&, class Optional<struct PassengerRenderingRidingOffsetComponent const>, class Optional<struct VanillaOffsetComponent const>, struct GetAttachPosRequestComponent&); // NOLINT

}; // namespace GetAttachPosSystemImpl
