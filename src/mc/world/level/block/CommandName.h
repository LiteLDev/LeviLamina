#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandName {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7bd438;
    ::ll::UntypedStorage<1, 1>  mUnk4f68f8;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandName& operator=(CommandName const&);
    CommandName(CommandName const&);
    CommandName();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CommandName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
