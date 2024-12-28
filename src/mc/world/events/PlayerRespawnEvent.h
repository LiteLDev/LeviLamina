#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerRespawnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1a8e35;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRespawnEvent& operator=(PlayerRespawnEvent const&);
    PlayerRespawnEvent(PlayerRespawnEvent const&);
    PlayerRespawnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerRespawnEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
