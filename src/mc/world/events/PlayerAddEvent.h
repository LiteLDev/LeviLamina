#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk96b214;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAddEvent& operator=(PlayerAddEvent const&);
    PlayerAddEvent(PlayerAddEvent const&);
    PlayerAddEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerAddEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
