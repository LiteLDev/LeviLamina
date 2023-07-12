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
     * @symbol ?_tickApplyJumpModifierSystem\@ApplyJumpModifierSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UPowerJump\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@$$CBUTriggerJumpRequestComponent\@\@$$CBUActorRotationComponent\@\@$$CBUAttributesComponent\@\@$$CBUMobEffectsComponent\@\@$$CBUMobTravelComponent\@\@UJumpPendingScaleComponent\@\@UStateVectorComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickApplyJumpModifierSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct PowerJump>>, struct Exclude<class FlagComponent<struct MobIsJumpingFlag>>, struct TriggerJumpRequestComponent const, struct ActorRotationComponent const, struct AttributesComponent const, struct MobEffectsComponent const, struct MobTravelComponent const, struct JumpPendingScaleComponent, struct StateVectorComponent>);
    /**
     * @symbol ?createApplyJumpModifierSystem\@ApplyJumpModifierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createApplyJumpModifierSystem();
    /**
     * @symbol ?tickApplyJumpModifierSystem\@ApplyJumpModifierSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUTriggerJumpRequestComponent\@\@AEBUActorRotationComponent\@\@AEBUAttributesComponent\@\@AEBUMobEffectsComponent\@\@AEBUMobTravelComponent\@\@AEAUJumpPendingScaleComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void tickApplyJumpModifierSystem(class StrictEntityContext const &, struct TriggerJumpRequestComponent const &, struct ActorRotationComponent const &, struct AttributesComponent const &, struct MobEffectsComponent const &, struct MobTravelComponent const &, struct JumpPendingScaleComponent &, struct StateVectorComponent &);

};
