#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackErrorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> type;
    ::ll::TypedStorage<8, 32, ::std::string> file;
    ::ll::TypedStorage<8, 32, ::std::string> text;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PackErrorInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
