#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

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
    ::ll::TypedStorage<4, 4, int> mThreatLevel;
    ::ll::TypedStorage<4, 4, int> mThreatLevelIncreaseCooldown;
    ::ll::TypedStorage<4, 4, int> mThreatLevelDecreaseTimer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WardenSpawnTrackerComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI bool canIncreaseThreatLevel() const;

    MCFOLD void copyDataFrom(::WardenSpawnTrackerComponent const& copyFrom);

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
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
