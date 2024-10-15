#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"

class WardenSpawnTrackerComponent {
public:
    // prevent constructor by default
    WardenSpawnTrackerComponent& operator=(WardenSpawnTrackerComponent const&);
    WardenSpawnTrackerComponent(WardenSpawnTrackerComponent const&);

public:
    // NOLINTBEGIN
    MCAPI WardenSpawnTrackerComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool canIncreaseThreatLevel() const;

    MCAPI void copyDataFrom(class WardenSpawnTrackerComponent const& copyFrom);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void tick();

    MCAPI int tryIncreaseThreatLevel();

    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent> getSoundEventForThreatLevel(int threatLevel);

    MCAPI static bool hasNearbyWarden(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI static int const& MAX_THREAT_LEVEL();

    // NOLINTEND
};
