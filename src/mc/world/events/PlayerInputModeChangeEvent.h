#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInputModeChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9e0012;
    ::ll::UntypedStorage<4, 4>  mUnkea1b08;
    ::ll::UntypedStorage<4, 4>  mUnk19ed93;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInputModeChangeEvent& operator=(PlayerInputModeChangeEvent const&);
    PlayerInputModeChangeEvent(PlayerInputModeChangeEvent const&);
    PlayerInputModeChangeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerInputModeChangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
