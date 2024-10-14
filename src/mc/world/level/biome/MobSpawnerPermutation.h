#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobSpawnerPermutation {
public:
    // prevent constructor by default
    MobSpawnerPermutation& operator=(MobSpawnerPermutation const&);
    MobSpawnerPermutation(MobSpawnerPermutation const&);
    MobSpawnerPermutation();

public:
    // NOLINTBEGIN
    MCAPI ~MobSpawnerPermutation();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
