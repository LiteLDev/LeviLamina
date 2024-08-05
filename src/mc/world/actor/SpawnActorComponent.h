#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnActorComponent {
public:
    // prevent constructor by default
    SpawnActorComponent& operator=(SpawnActorComponent const&);
    SpawnActorComponent(SpawnActorComponent const&);
    SpawnActorComponent();

public:
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI std::vector<struct SpawnActorEntry>& getSpawnEntries();

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    // NOLINTEND
};
