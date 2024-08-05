#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AreaAttackComponent {
public:
    // prevent constructor by default
    AreaAttackComponent& operator=(AreaAttackComponent const&);
    AreaAttackComponent(AreaAttackComponent const&);
    AreaAttackComponent();

public:
    // NOLINTBEGIN
    MCAPI AreaAttackComponent(class AreaAttackComponent&&);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI std::pair<struct ActorUniqueID, struct Tick>* findCooldownEntry(struct ActorUniqueID const& actorID);

    MCAPI bool
    isEntryOnAttackCooldown(std::pair<struct ActorUniqueID, struct Tick> const*, struct Tick const& currentTick) const;

    MCAPI class AreaAttackComponent& operator=(class AreaAttackComponent&&);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI ~AreaAttackComponent();

    // NOLINTEND
};
