#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/input/ScriptingInputButton.h"
#include "mc/input/ScriptingInputButtonState.h"

struct PlayerScriptInputEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>            mPlayer;
    ::ll::TypedStorage<4, 4, ::ScriptingInputButton>      mButton;
    ::ll::TypedStorage<4, 4, ::ScriptingInputButtonState> mNewState;
    // NOLINTEND

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
