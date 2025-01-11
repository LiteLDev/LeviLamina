#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDisconnectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk51e674;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDisconnectEvent& operator=(PlayerDisconnectEvent const&);
    PlayerDisconnectEvent(PlayerDisconnectEvent const&);
    PlayerDisconnectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerDisconnectEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
