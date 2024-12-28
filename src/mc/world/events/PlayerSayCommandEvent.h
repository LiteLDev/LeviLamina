#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSayCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdc719d;
    ::ll::UntypedStorage<8, 32> mUnk423c40;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSayCommandEvent& operator=(PlayerSayCommandEvent const&);
    PlayerSayCommandEvent(PlayerSayCommandEvent const&);
    PlayerSayCommandEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerSayCommandEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
