#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerFormCloseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnked1487;
    ::ll::UntypedStorage<4, 4>  mUnk2f8002;
    ::ll::UntypedStorage<4, 4>  mUnkaceae9;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerFormCloseEvent& operator=(PlayerFormCloseEvent const&);
    PlayerFormCloseEvent(PlayerFormCloseEvent const&);
    PlayerFormCloseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerFormCloseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
