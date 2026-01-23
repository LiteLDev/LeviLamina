#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/ButtonColors.h"

struct TouchTextButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>  buttonName;
    ::ll::TypedStorage<4, 4, uint>            pointBindingName;
    ::ll::TypedStorage<4, 4, uint>            areaBindingName;
    ::ll::TypedStorage<4, 4, uint>            conditionBindingName;
    ::ll::TypedStorage<4, 4, uint>            opacityBindingName;
    ::ll::TypedStorage<4, 4, uint>            labelBindingName;
    ::ll::TypedStorage<4, 32, ::ButtonColors> buttonColors;
    ::ll::TypedStorage<4, 4, int>             imageU;
    ::ll::TypedStorage<4, 4, int>             imageV;
    ::ll::TypedStorage<4, 4, int>             uvWidth;
    ::ll::TypedStorage<4, 4, int>             uvHeight;
    ::ll::TypedStorage<1, 1, bool>            passThrough;
    ::ll::TypedStorage<4, 4, int>             touchStateRequirement;
    ::ll::TypedStorage<1, 1, bool>            extendButtonPressOutsideUntilReleased;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchTextButtonBinding(TouchTextButtonBinding const&);
    TouchTextButtonBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TouchTextButtonBinding& operator=(::TouchTextButtonBinding const&);
    // NOLINTEND
};
