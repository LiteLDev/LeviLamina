#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TagUpdateToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3dc2bf;
    // NOLINTEND

public:
    // prevent constructor by default
    TagUpdateToken& operator=(TagUpdateToken const&);
    TagUpdateToken(TagUpdateToken const&);
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
