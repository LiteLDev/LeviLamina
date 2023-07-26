#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"

class ApplyDashSystem {

public:
    // prevent constructor by default
    ApplyDashSystem& operator=(ApplyDashSystem const&) = delete;
    ApplyDashSystem(ApplyDashSystem const&)            = delete;
    ApplyDashSystem()                                  = delete;

public:
    /**
     * @symbol ?create\@ApplyDashSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
    /**
     * @symbol
     * ?doDash\@ApplyDashSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUJumpPreventionResult\@\@AEBVBaseAttributeMap\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@MMMIAEAVVec3\@\@AEAMAEAVSynchedActorData\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UDashCooldownTimerComponent\@\@\@\@\@Z
     */
    MCAPI static void doDash(class StrictEntityContext const&, struct JumpPreventionResult const&, class BaseAttributeMap const&, std::vector<class MobEffectInstance> const&, float, float, float, unsigned int, class Vec3&, float&, class SynchedActorData&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct DashCooldownTimerComponent>&); // NOLINT
    /**
     * @symbol
     * ?tickApplyDashModifierSystem\@ApplyDashSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUTriggerJumpRequestComponent\@\@AEBVDashComponent\@\@AEBUAttributesComponent\@\@AEBUActorRotationComponent\@\@AEBUMobEffectsComponent\@\@AEAUStateVectorComponent\@\@AEAUJumpPendingScaleComponent\@\@AEAUSynchedActorDataComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UDashCooldownTimerComponent\@\@\@\@\@Z
     */
    MCAPI static void
    tickApplyDashModifierSystem(class StrictEntityContext const&, struct TriggerJumpRequestComponent const&, class DashComponent const&, struct AttributesComponent const&, struct ActorRotationComponent const&, struct MobEffectsComponent const&, struct StateVectorComponent&, struct JumpPendingScaleComponent&, struct SynchedActorDataComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct DashCooldownTimerComponent>&); // NOLINT
};
