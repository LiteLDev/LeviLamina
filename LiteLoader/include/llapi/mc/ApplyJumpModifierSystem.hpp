/**
 * @file  ApplyJumpModifierSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ApplyJumpModifierSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPLYJUMPMODIFIERSYSTEM
public:
    class ApplyJumpModifierSystem& operator=(class ApplyJumpModifierSystem const &) = delete;
    ApplyJumpModifierSystem(class ApplyJumpModifierSystem const &) = delete;
    ApplyJumpModifierSystem() = delete;
#endif

public:
    /**
     * @symbol ?createApplyJumpModifierSystem\@ApplyJumpModifierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createApplyJumpModifierSystem();
    /**
     * @symbol ?doPowerJump\@ApplyJumpModifierSystem\@\@SAXAEBUJumpPreventionResult\@\@AEBVBaseAttributeMap\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@MMAEAVVec3\@\@AEAM\@Z
     */
    MCAPI static void doPowerJump(struct JumpPreventionResult const &, class BaseAttributeMap const &, std::vector<class MobEffectInstance> const &, float, float, class Vec3 &, float &);
    /**
     * @symbol ?tickApplyJumpModifierSystem\@ApplyJumpModifierSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUTriggerJumpRequestComponent\@\@AEBUActorRotationComponent\@\@AEBUAttributesComponent\@\@AEBUMobEffectsComponent\@\@AEBUMobTravelComponent\@\@AEAUJumpPendingScaleComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void tickApplyJumpModifierSystem(class StrictEntityContext const &, struct TriggerJumpRequestComponent const &, struct ActorRotationComponent const &, struct AttributesComponent const &, struct MobEffectsComponent const &, struct MobTravelComponent const &, struct JumpPendingScaleComponent &, struct StateVectorComponent &);

};
