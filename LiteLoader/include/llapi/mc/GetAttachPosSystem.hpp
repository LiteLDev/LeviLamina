/**
 * @file  GetAttachPosSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace GetAttachPosSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?createSystem\@GetAttachPosSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?getAttachPos\@GetAttachPosSystem\@\@YA?AVVec3\@\@W4ActorLocation\@\@AEBV2\@AEBUAABBShapeComponent\@\@AEBUActorRotationComponent\@\@AEBUOffsetsComponent\@\@V?$optional_ref\@$$CBUPassengerRenderingRidingOffsetComponent\@\@\@\@V?$optional_ref\@$$CBUVanillaOffsetComponent\@\@\@\@M\@Z
     */
    MCAPI class Vec3 getAttachPos(enum class ActorLocation, class Vec3 const &, struct AABBShapeComponent const &, struct ActorRotationComponent const &, struct OffsetsComponent const &, class optional_ref<struct PassengerRenderingRidingOffsetComponent const>, class optional_ref<struct VanillaOffsetComponent const>, float);

};