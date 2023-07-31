#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorLimitedLifetimeComponent {

public:
    // prevent constructor by default
    ActorLimitedLifetimeComponent& operator=(ActorLimitedLifetimeComponent const&) = delete;
    ActorLimitedLifetimeComponent(ActorLimitedLifetimeComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ActorLimitedLifetimeComponent\@\@QEAA\@XZ
     */
    MCAPI ActorLimitedLifetimeComponent();
    /**
     * @symbol ?addAdditionalSaveData\@ActorLimitedLifetimeComponent\@\@QEBAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const&, class CompoundTag&) const;
    /**
     * @symbol ?convertFromLegacyData\@ActorLimitedLifetimeComponent\@\@SAXAEBVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI static void convertFromLegacyData(class CompoundTag const&, class CompoundTag&);
    /**
     * @symbol ?needsLegacyConversion\@ActorLimitedLifetimeComponent\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool needsLegacyConversion(class CompoundTag const&);
    /**
     * @symbol ?readAdditionalSaveData\@ActorLimitedLifetimeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&);
    // NOLINTEND
};
