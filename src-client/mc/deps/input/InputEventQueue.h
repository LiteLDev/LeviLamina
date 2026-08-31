#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputEvent.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"

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

    MCAPI void enqueueClearPointerLocations();

    MCAPI void enqueueDirection(
        ::DirectionId directionId,
        float         x,
        float         y,
        ::FocusImpact focusImpact,
        int           controllerId,
        bool          inputClearingEvent
    );

    MCAPI void enqueuePointerLocationWithId(int id, short x, short y, bool updateActionPointer);
    // NOLINTEND
};
