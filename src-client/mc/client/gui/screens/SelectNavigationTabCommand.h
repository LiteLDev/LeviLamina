#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SelectNavigationTabCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            navigationTabIndex;
    ::ll::TypedStorage<8, 32, ::std::string> navigationTabName;
    ::ll::TypedStorage<1, 1, bool>           success;
    ::ll::TypedStorage<1, 1, bool>           maintainOldFocus;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SelectNavigationTabCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
