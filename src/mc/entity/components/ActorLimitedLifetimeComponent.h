#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorLimitedLifetimeComponent {
public:
    // prevent constructor by default
    ActorLimitedLifetimeComponent& operator=(ActorLimitedLifetimeComponent const&);
    ActorLimitedLifetimeComponent(ActorLimitedLifetimeComponent const&);

public:
    // NOLINTBEGIN
    MCAPI ActorLimitedLifetimeComponent();

    MCAPI void addAdditionalSaveData(class Actor const& owner, class CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag);

    MCAPI static void convertFromLegacyData(class CompoundTag const& tag, class CompoundTag& outTag);

    MCAPI static bool needsLegacyConversion(class CompoundTag const& tag);

    // NOLINTEND
};
