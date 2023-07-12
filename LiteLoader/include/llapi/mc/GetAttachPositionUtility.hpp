/**
 * @file  GetAttachPositionUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace GetAttachPositionUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?getAttachPosition\@GetAttachPositionUtility\@\@YA?AV?$optional\@VVec3\@\@\@std\@\@AEBVStrictEntityContext\@\@AEBUGetAttachPositionViews\@\@W4ActorLocation\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class std::optional<class Vec3> getAttachPosition(class StrictEntityContext const &, struct GetAttachPositionViews const &, enum class ActorLocation, class Vec3 const &);
    /**
     * @symbol ?getNonPassengerAttachPos\@GetAttachPositionUtility\@\@YA?AVVec3\@\@AEBUStateVectorComponent\@\@V?$optional_ref\@$$CBUActorHeadRotationComponent\@\@\@\@AEBUAABBShapeComponent\@\@AEBUActorRotationComponent\@\@AEBUOffsetsComponent\@\@V?$optional_ref\@$$CBUVanillaOffsetComponent\@\@\@\@W4ActorLocation\@\@M\@Z
     */
    MCAPI class Vec3 getNonPassengerAttachPos(struct StateVectorComponent const &, class optional_ref<struct ActorHeadRotationComponent const>, struct AABBShapeComponent const &, struct ActorRotationComponent const &, struct OffsetsComponent const &, class optional_ref<struct VanillaOffsetComponent const>, enum class ActorLocation, float);
    /**
     * @symbol ?getPassengerAttachPos\@GetAttachPositionUtility\@\@YA?AVVec3\@\@AEBVStrictEntityContext\@\@AEBUGetAttachPositionViews\@\@W4ActorLocation\@\@M\@Z
     */
    MCAPI class Vec3 getPassengerAttachPos(class StrictEntityContext const &, struct GetAttachPositionViews const &, enum class ActorLocation, float);

};