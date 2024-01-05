#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorLimitedLifetimeComponent {
public:
    // prevent constructor by default
    ActorLimitedLifetimeComponent& operator=(ActorLimitedLifetimeComponent const&);
    ActorLimitedLifetimeComponent(ActorLimitedLifetimeComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ActorLimitedLifetimeComponent@@QEAA@XZ
    MCAPI ActorLimitedLifetimeComponent();

    // symbol: ?addAdditionalSaveData@ActorLimitedLifetimeComponent@@QEBAXAEBVActor@@AEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class Actor const& owner, class CompoundTag& tag) const;

    // symbol: ?readAdditionalSaveData@ActorLimitedLifetimeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI void readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag);

    // symbol: ?convertFromLegacyData@ActorLimitedLifetimeComponent@@SAXAEBVCompoundTag@@AEAV2@@Z
    MCAPI static void convertFromLegacyData(class CompoundTag const& tag, class CompoundTag&);

    // symbol: ?needsLegacyConversion@ActorLimitedLifetimeComponent@@SA_NAEBVCompoundTag@@@Z
    MCAPI static bool needsLegacyConversion(class CompoundTag const& tag);

    // NOLINTEND
};
