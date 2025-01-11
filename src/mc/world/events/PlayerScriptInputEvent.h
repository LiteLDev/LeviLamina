#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScriptInputEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb96020;
    ::ll::UntypedStorage<4, 4>  mUnk49ba48;
    ::ll::UntypedStorage<4, 4>  mUnk3dfb37;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerScriptInputEvent& operator=(PlayerScriptInputEvent const&);
    PlayerScriptInputEvent(PlayerScriptInputEvent const&);
    PlayerScriptInputEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerScriptInputEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
