#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HostOptionSubCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mButtonText;
    ::ll::TypedStorage<8, 32, ::std::string> mTexture;
    ::ll::TypedStorage<8, 32, ::std::string> mSubCommand;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~HostOptionSubCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
