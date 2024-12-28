#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrialSpawnerWeightedLootTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk34d990;
    ::ll::UntypedStorage<4, 4>  mUnk3db40e;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialSpawnerWeightedLootTable& operator=(TrialSpawnerWeightedLootTable const&);
    TrialSpawnerWeightedLootTable(TrialSpawnerWeightedLootTable const&);
    TrialSpawnerWeightedLootTable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TrialSpawnerWeightedLootTable();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
