/**
 * @file  GetAttachPosSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace GetAttachPosSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?getBaseAttachPoint\@GetAttachPosSystemImpl\@\@YA?AVVec3\@\@AEBUAABBShapeComponent\@\@AEBUActorRotationComponent\@\@AEBUOffsetsComponent\@\@MAEBUGetAttachPosRequestData\@\@V?$optional_ref\@$$CBUPassengerRenderingRidingOffsetComponent\@\@\@\@V?$optional_ref\@$$CBUVanillaOffsetComponent\@\@\@\@\@Z
     */
    MCAPI class Vec3 getBaseAttachPoint(struct AABBShapeComponent const &, struct ActorRotationComponent const &, struct OffsetsComponent const &, float, struct GetAttachPosRequestData const &, class optional_ref<struct PassengerRenderingRidingOffsetComponent const>, class optional_ref<struct VanillaOffsetComponent const>);
    /**
     * @symbol ?tickEntity\@GetAttachPosSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBV?$Optional\@$$CBUActorHeadRotationComponent\@\@\@\@AEBUActorRotationComponent\@\@AEBUOffsetsComponent\@\@V?$Optional\@$$CBUPassengerRenderingRidingOffsetComponent\@\@\@\@V?$Optional\@$$CBUVanillaOffsetComponent\@\@\@\@AEAUGetAttachPosRequestComponent\@\@\@Z
     */
    MCAPI void tickEntity(class StrictEntityContext const &, struct AABBShapeComponent const &, class Optional<struct ActorHeadRotationComponent const> const &, struct ActorRotationComponent const &, struct OffsetsComponent const &, class Optional<struct PassengerRenderingRidingOffsetComponent const>, class Optional<struct VanillaOffsetComponent const>, struct GetAttachPosRequestComponent &);

};