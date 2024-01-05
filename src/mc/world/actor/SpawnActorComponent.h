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
    // symbol: ?addAdditionalSaveData@SpawnActorComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol:
    // ?getSpawnEntries@SpawnActorComponent@@QEAAAEAV?$vector@USpawnActorEntry@@V?$allocator@USpawnActorEntry@@@std@@@std@@XZ
    MCAPI std::vector<struct SpawnActorEntry>& getSpawnEntries();

    // symbol: ?readAdditionalSaveData@SpawnActorComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    // NOLINTEND
};
