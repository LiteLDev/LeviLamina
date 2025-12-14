#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TouchConditionalGuiPassthroughBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>           areaBindingName;
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, uint>           conditionBindingName;
    ::ll::TypedStorage<1, 1, bool>           consumeInput;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TouchConditionalGuiPassthroughBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
