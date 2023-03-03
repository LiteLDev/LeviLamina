/**
 * @file  ApplyDashSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ApplyDashSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPLYDASHSYSTEM
public:
    class ApplyDashSystem& operator=(class ApplyDashSystem const &) = delete;
    ApplyDashSystem(class ApplyDashSystem const &) = delete;
    ApplyDashSystem() = delete;
#endif

public:
    /**
     * @symbol  ?doDash\@ApplyDashSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUJumpPreventionResult\@\@AEBVBaseAttributeMap\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@MMMIAEAVVec3\@\@AEAMAEAVSynchedActorData\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UDashCooldownTimerComponent\@\@\@\@\@Z
     */
    MCAPI static void doDash(class StrictEntityContext const &, struct JumpPreventionResult const &, class BaseAttributeMap const &, std::vector<class MobEffectInstance> const &, float, float, float, unsigned int, class Vec3 &, float &, class SynchedActorData &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct DashCooldownTimerComponent> &);

};