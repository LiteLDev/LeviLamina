#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TagUpdateToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::std::atomic<int>>> mTokenCount;
    // NOLINTEND

public:
    // prevent constructor by default
    TagUpdateToken();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TagUpdateToken(::std::weak_ptr<::std::atomic<int>> tokenCount);

    MCAPI ~TagUpdateToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::std::atomic<int>> tokenCount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
