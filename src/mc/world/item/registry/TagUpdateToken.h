#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TagUpdateToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::std::atomic<int>>> mTokenCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TagUpdateToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
