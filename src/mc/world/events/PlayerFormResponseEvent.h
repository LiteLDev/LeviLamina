#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerFormResponseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd3544c;
    ::ll::UntypedStorage<4, 4>  mUnkdf16d5;
    ::ll::UntypedStorage<8, 16> mUnk365654;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerFormResponseEvent& operator=(PlayerFormResponseEvent const&);
    PlayerFormResponseEvent(PlayerFormResponseEvent const&);
    PlayerFormResponseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerFormResponseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
