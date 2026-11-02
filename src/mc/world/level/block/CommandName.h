#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandName {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<1, 1, bool>           showInAutoComplete;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CommandName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
