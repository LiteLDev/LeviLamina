#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerEmoteEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfaf5d6;
    ::ll::UntypedStorage<8, 32> mUnk8a66be;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerEmoteEvent& operator=(PlayerEmoteEvent const&);
    PlayerEmoteEvent(PlayerEmoteEvent const&);
    PlayerEmoteEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerEmoteEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
