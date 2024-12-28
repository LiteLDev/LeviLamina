#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerOpenContainerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbd4424;
    ::ll::UntypedStorage<1, 1>  mUnkb5a2c4;
    ::ll::UntypedStorage<4, 12> mUnkb08e33;
    ::ll::UntypedStorage<8, 8>  mUnk5fc307;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerOpenContainerEvent& operator=(PlayerOpenContainerEvent const&);
    PlayerOpenContainerEvent(PlayerOpenContainerEvent const&);
    PlayerOpenContainerEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerOpenContainerEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
