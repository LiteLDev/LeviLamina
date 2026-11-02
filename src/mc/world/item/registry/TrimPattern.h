#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct TrimPattern {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mPatternId;
    ::ll::TypedStorage<8, 48, ::HashedString> mItemName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TrimPattern();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
