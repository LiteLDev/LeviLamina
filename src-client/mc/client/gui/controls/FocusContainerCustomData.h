#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FocusContainerCustomData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> otherFocusContainerName;
    ::ll::TypedStorage<8, 32, ::std::string> focusIdInside;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusContainerCustomData(FocusContainerCustomData const&);
    FocusContainerCustomData();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::FocusContainerCustomData& operator=(::FocusContainerCustomData const&);

    MCAPI ~FocusContainerCustomData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
