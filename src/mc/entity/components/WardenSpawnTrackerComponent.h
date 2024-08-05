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
    MCAPI WardenSpawnTrackerComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool canIncreaseThreatLevel() const;

    MCAPI void copyDataFrom(class WardenSpawnTrackerComponent const&);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void tick();

    MCAPI int tryIncreaseThreatLevel();

    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent> getSoundEventForThreatLevel(int);

    MCAPI static bool hasNearbyWarden(class BlockSource& region, class BlockPos const& pos);

    MCAPI static int const MAX_THREAT_LEVEL;

    // NOLINTEND
};
