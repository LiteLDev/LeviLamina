#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class TouchPointResults;
// clang-format on

class TouchGuiPassthroughControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ButtonState> mButtonState;
    ::ll::TypedStorage<4, 4, uint const>    mButtonId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchGuiPassthroughControl() /*override*/;

    virtual void tick(::InputEventQueue&, ::TouchPointResults&, int) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
