#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on

class CommandContext {
public:
    // member variables
    // NOLINTBEGIN
    ::std::string                      mCommand;
    ::std::unique_ptr<::CommandOrigin> mOrigin;
    int                                mVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CommandContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
