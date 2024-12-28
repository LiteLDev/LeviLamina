#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class WardenSpawnTrackerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka897e7;
    ::ll::UntypedStorage<4, 4> mUnk927f96;
    ::ll::UntypedStorage<4, 4> mUnk13cc50;
    // NOLINTEND

public:
    // prevent constructor by default
    WardenSpawnTrackerComponent& operator=(WardenSpawnTrackerComponent const&);
    WardenSpawnTrackerComponent(WardenSpawnTrackerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WardenSpawnTrackerComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI bool canIncreaseThreatLevel() const;

    MCAPI void copyDataFrom(::WardenSpawnTrackerComponent const& copyFrom);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void tick();

    MCAPI int tryIncreaseThreatLevel();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getSoundEventForThreatLevel(int threatLevel);

    MCAPI static bool hasNearbyWarden(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_THREAT_LEVEL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
