#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandOriginIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb57c8f;
    ::ll::UntypedStorage<8, 32> mUnk177a87;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOriginIdentity& operator=(CommandOriginIdentity const&);
    CommandOriginIdentity(CommandOriginIdentity const&);
    CommandOriginIdentity();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CommandOriginIdentity();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
