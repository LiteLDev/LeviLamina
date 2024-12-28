#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInitialSpawnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8e88cf;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInitialSpawnEvent& operator=(PlayerInitialSpawnEvent const&);
    PlayerInitialSpawnEvent(PlayerInitialSpawnEvent const&);
    PlayerInitialSpawnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerInitialSpawnEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
