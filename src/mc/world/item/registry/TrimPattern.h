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
    // prevent constructor by default
    TrimPattern& operator=(TrimPattern const&);
    TrimPattern(TrimPattern const&);
    TrimPattern();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TrimPattern(::TrimPattern&&);

    MCAPI ~TrimPattern();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TrimPattern&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
