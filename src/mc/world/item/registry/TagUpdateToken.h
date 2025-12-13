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
    MCNAPI explicit TagUpdateToken(::std::weak_ptr<::std::atomic<int>> tokenCount);

    MCNAPI ~TagUpdateToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::weak_ptr<::std::atomic<int>> tokenCount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
