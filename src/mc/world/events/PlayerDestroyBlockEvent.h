#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDestroyBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk48fa14;
    ::ll::UntypedStorage<4, 12> mUnkd7b1f7;
    ::ll::UntypedStorage<1, 1>  mUnk15f1f7;
    ::ll::UntypedStorage<8, 8>  mUnk97f33e;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDestroyBlockEvent& operator=(PlayerDestroyBlockEvent const&);
    PlayerDestroyBlockEvent(PlayerDestroyBlockEvent const&);
    PlayerDestroyBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerDestroyBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
