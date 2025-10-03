#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrialSpawnerWeightedLootTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<4, 4, int>            weight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TrialSpawnerWeightedLootTable();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
