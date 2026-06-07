#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandOriginIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mXuid;
    ::ll::TypedStorage<8, 32, ::std::string> mPlatformOnlineId;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOriginIdentity& operator=(CommandOriginIdentity const&);
    CommandOriginIdentity();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOriginIdentity(::CommandOriginIdentity const&);

    MCAPI ~CommandOriginIdentity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::CommandOriginIdentity const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
