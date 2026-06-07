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
    // prevent constructor by default
    HostOptionSubCommand& operator=(HostOptionSubCommand const&);
    HostOptionSubCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HostOptionSubCommand(::HostOptionSubCommand const&);

    MCAPI ~HostOptionSubCommand();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::HostOptionSubCommand const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
