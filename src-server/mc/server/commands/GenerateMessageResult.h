#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GenerateMessageResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mMessage;
    ::ll::TypedStorage<1, 1, bool> mIsValid;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GenerateMessageResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
