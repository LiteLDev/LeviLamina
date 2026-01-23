#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
struct InputEvent;
// clang-format on

class InputEventQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::InputEvent, ::std::deque<::InputEvent>>> mQueue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void enqueueButton(
        uint          id,
        ::ButtonState state,
        bool          exclusive,
        ::FocusImpact focusImpact,
        int           controllerId,
        bool          inputClearingEvent,
        float         repeatInterval,
        int           source
    );

    MCAPI void enqueueButtonPressAndRelease(uint buttonId, ::FocusImpact focusImpact, int controllerId);

    MCAPI void enqueueClearPointerLocationWithId(int id);

    MCAPI void enqueueDirection(
        ::DirectionId directionId,
        float         x,
        float         y,
        ::FocusImpact focusImpact,
        int           controllerId,
        bool          inputClearingEvent
    );

    MCAPI void enqueuePointerLocation(
        ::InputMode   inputMode,
        short         x,
        short         y,
        ::FocusImpact focusImpact,
        bool          forceMotionlessPointer,
        int           controllerId
    );

    MCAPI void enqueuePointerLocationWithId(int id, short x, short y, bool updateActionPointer);

    MCAPI void
    enqueueRawInput(int id, ::RawInputType keyType, ::ButtonState state, int controllerId, bool allowRemapping);

    MCAPI void enqueueTextChar(::std::string utf8Input, ::FocusImpact focusImpact, int controllerId);

    MCAPI ~InputEventQueue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
