#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerGameModeChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdebe41;
    ::ll::UntypedStorage<4, 4>  mUnkd0fc28;
    ::ll::UntypedStorage<4, 4>  mUnk24a0c6;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerGameModeChangeEvent& operator=(PlayerGameModeChangeEvent const&);
    PlayerGameModeChangeEvent(PlayerGameModeChangeEvent const&);
    PlayerGameModeChangeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerGameModeChangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
