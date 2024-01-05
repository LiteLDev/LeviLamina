#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"

class WardenSpawnTrackerComponent {
public:
    // prevent constructor by default
    WardenSpawnTrackerComponent& operator=(WardenSpawnTrackerComponent const&);
    WardenSpawnTrackerComponent(WardenSpawnTrackerComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0WardenSpawnTrackerComponent@@QEAA@XZ
    MCAPI WardenSpawnTrackerComponent();

    // symbol: ?addAdditionalSaveData@WardenSpawnTrackerComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?canIncreaseThreatLevel@WardenSpawnTrackerComponent@@QEBA_NXZ
    MCAPI bool canIncreaseThreatLevel() const;

    // symbol: ?copyDataFrom@WardenSpawnTrackerComponent@@QEAAXAEBV1@@Z
    MCAPI void copyDataFrom(class WardenSpawnTrackerComponent const&);

    // symbol:
    // ?readAdditionalSaveData@WardenSpawnTrackerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?tick@WardenSpawnTrackerComponent@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?tryIncreaseThreatLevel@WardenSpawnTrackerComponent@@QEAAHXZ
    MCAPI int tryIncreaseThreatLevel();

    // symbol:
    // ?getSoundEventForThreatLevel@WardenSpawnTrackerComponent@@SA?AV?$optional@W4LevelSoundEvent@Legacy@Puv@@@std@@H@Z
    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent> getSoundEventForThreatLevel(int);

    // symbol: ?hasNearbyWarden@WardenSpawnTrackerComponent@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool hasNearbyWarden(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?MAX_THREAT_LEVEL@WardenSpawnTrackerComponent@@2HB
    MCAPI static int const MAX_THREAT_LEVEL;

    // NOLINTEND
};
