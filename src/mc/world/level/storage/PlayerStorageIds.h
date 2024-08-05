#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStorageIds {
public:
    // prevent constructor by default
    PlayerStorageIds& operator=(PlayerStorageIds const&);
    PlayerStorageIds(PlayerStorageIds const&);
    PlayerStorageIds();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerStorageIds();

    // NOLINTEND
};
