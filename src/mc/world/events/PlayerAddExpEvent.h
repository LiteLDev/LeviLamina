#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddExpEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk550c6d;
    ::ll::UntypedStorage<4, 4>  mUnk5f8dd9;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAddExpEvent& operator=(PlayerAddExpEvent const&);
    PlayerAddExpEvent(PlayerAddExpEvent const&);
    PlayerAddExpEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerAddExpEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
