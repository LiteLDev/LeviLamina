#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TouchTurnInteractBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> turnInteractButtonName;
    ::ll::TypedStorage<8, 32, ::std::string> tapButtonName;
    ::ll::TypedStorage<8, 32, ::std::string> holdButtonName;
    ::ll::TypedStorage<4, 4, uint>           areaBindingName;
    ::ll::TypedStorage<4, 4, uint>           conditionBindingName;
    ::ll::TypedStorage<8, 32, ::std::string> sprintButtonName;
    ::ll::TypedStorage<4, 4, uint>           leftHandedBindingName;
    ::ll::TypedStorage<4, 4, uint>           moveStickVisibleBindingName;
    ::ll::TypedStorage<4, 4, uint>           thumbstickOpacityBindingName;
    ::ll::TypedStorage<4, 4, uint>           staticJoystickBindingName;
    ::ll::TypedStorage<4, 4, uint>           defaultMoveStickAreaBindingName;
    ::ll::TypedStorage<4, 4, uint>           defaultMoveStickVisibleBindingName;
    ::ll::TypedStorage<4, 4, uint>           showActionButtonBindingName;
    ::ll::TypedStorage<4, 4, uint>           sprintOnMovementBindingName;
    ::ll::TypedStorage<4, 4, uint>           isInControlEditorBindingName;
    ::ll::TypedStorage<1, 1, bool>           isUsingNewControls;
    ::ll::TypedStorage<4, 4, float>          sensitivity;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchTurnInteractBinding& operator=(TouchTurnInteractBinding const&);
    TouchTurnInteractBinding(TouchTurnInteractBinding const&);
    TouchTurnInteractBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TouchTurnInteractBinding& operator=(::TouchTurnInteractBinding&&);

    MCAPI ~TouchTurnInteractBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
