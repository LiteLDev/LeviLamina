/**
 * @file  ActorLimitedLifetimeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorLimitedLifetimeComponent.
 *
 */
class ActorLimitedLifetimeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORLIMITEDLIFETIMECOMPONENT
public:
    class ActorLimitedLifetimeComponent& operator=(class ActorLimitedLifetimeComponent const &) = delete;
    ActorLimitedLifetimeComponent(class ActorLimitedLifetimeComponent const &) = delete;
#endif

public:
    /**
     * @hash   1101819547
     * @symbol ??0ActorLimitedLifetimeComponent@@QEAA@XZ
     */
    MCAPI ActorLimitedLifetimeComponent();
    /**
     * @hash   -575391255
     * @symbol ?addAdditionalSaveData@ActorLimitedLifetimeComponent@@QEBAXAEBVActor@@AEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const &, class CompoundTag &) const;
    /**
     * @hash   -1870667973
     * @symbol ?readAdditionalSaveData@ActorLimitedLifetimeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &);
    /**
     * @hash   827943236
     * @symbol ?convertFromLegacyData@ActorLimitedLifetimeComponent@@SAXAEBVCompoundTag@@AEAV2@@Z
     */
    MCAPI static void convertFromLegacyData(class CompoundTag const &, class CompoundTag &);
    /**
     * @hash   1962244977
     * @symbol ?needsLegacyConversion@ActorLimitedLifetimeComponent@@SA_NAEBVCompoundTag@@@Z
     */
    MCAPI static bool needsLegacyConversion(class CompoundTag const &);

};