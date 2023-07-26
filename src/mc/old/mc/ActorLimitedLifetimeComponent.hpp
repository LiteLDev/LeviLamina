/**
 * @file  ActorLimitedLifetimeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0ActorLimitedLifetimeComponent\@\@QEAA\@XZ
     */
    MCAPI ActorLimitedLifetimeComponent();
    /**
     * @symbol  ?addAdditionalSaveData\@ActorLimitedLifetimeComponent\@\@QEBAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const &, class CompoundTag &) const;
    /**
     * @symbol  ?readAdditionalSaveData\@ActorLimitedLifetimeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &);
    /**
     * @symbol  ?convertFromLegacyData\@ActorLimitedLifetimeComponent\@\@SAXAEBVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI static void convertFromLegacyData(class CompoundTag const &, class CompoundTag &);
    /**
     * @symbol  ?needsLegacyConversion\@ActorLimitedLifetimeComponent\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool needsLegacyConversion(class CompoundTag const &);

};