#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"

class MobSpawnerPermutation : public ::WeightedRandom::WeighedRandomItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkfee09a;
    // NOLINTEND

public:
    // prevent constructor by default
    MobSpawnerPermutation& operator=(MobSpawnerPermutation const&);
    MobSpawnerPermutation(MobSpawnerPermutation const&);
    MobSpawnerPermutation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MobSpawnerPermutation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
