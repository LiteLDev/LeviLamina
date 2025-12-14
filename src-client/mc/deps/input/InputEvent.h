#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputEventData.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/InputEventType.h"

struct InputEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::InputEventType>  type;
    ::ll::TypedStorage<1, 1, ::FocusImpact>     focusImpact;
    ::ll::TypedStorage<4, 44, ::InputEventData> data;
    ::ll::TypedStorage<4, 4, int>               controllerId;
    ::ll::TypedStorage<1, 1, bool>              inputClearingEvent;
    // NOLINTEND
};
