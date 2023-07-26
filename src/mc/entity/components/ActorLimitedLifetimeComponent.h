#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorLimitedLifetimeComponent {

public:
    // prevent constructor by default
    ActorLimitedLifetimeComponent& operator=(ActorLimitedLifetimeComponent const&) = delete;
    ActorLimitedLifetimeComponent(ActorLimitedLifetimeComponent const&)            = delete;

public:
    /**
     * @symbol ??0ActorLimitedLifetimeComponent\@\@QEAA\@XZ
     */
    MCAPI ActorLimitedLifetimeComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@ActorLimitedLifetimeComponent\@\@QEBAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const&, class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@ActorLimitedLifetimeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertFromLegacyData\@ActorLimitedLifetimeComponent\@\@SAXAEBVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI static void convertFromLegacyData(class CompoundTag const&, class CompoundTag&); // NOLINT
    /**
     * @symbol ?needsLegacyConversion\@ActorLimitedLifetimeComponent\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool needsLegacyConversion(class CompoundTag const&); // NOLINT
};
