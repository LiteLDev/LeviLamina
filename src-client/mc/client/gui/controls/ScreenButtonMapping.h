#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ButtonMappingInputModeCondition.h"
#include "mc/client/gui/controls/ButtonMappingType.h"
#include "mc/client/gui/screens/ScreenEventScope.h"
#include "mc/deps/input/enums/ButtonState.h"

struct ScreenButtonMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                              fromButtonId;
    ::ll::TypedStorage<4, 4, uint>                              toButtonId;
    ::ll::TypedStorage<4, 4, ::ButtonMappingType>               type;
    ::ll::TypedStorage<1, 1, ::ScreenEventScope>                scope;
    ::ll::TypedStorage<1, 1, ::ButtonState>                     lastButtonState;
    ::ll::TypedStorage<1, 1, bool>                              buttonUpRightOfFirstRefusal;
    ::ll::TypedStorage<1, 1, bool>                              handleSelection;
    ::ll::TypedStorage<1, 1, bool>                              handleDeselection;
    ::ll::TypedStorage<1, 1, bool>                              alternateInputScope;
    ::ll::TypedStorage<1, 1, bool>                              consumeEvent;
    ::ll::TypedStorage<4, 4, ::ButtonMappingInputModeCondition> inputModeCondition;
    ::ll::TypedStorage<1, 1, bool>                              ignoreInputScope;
    // NOLINTEND
};
