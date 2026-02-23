#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MultiPlayerLevelArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 304> mUnk9be1b4;
    ::ll::UntypedStorage<8, 16>  mUnka3f396;
    ::ll::UntypedStorage<8, 216> mUnk96899e;
    ::ll::UntypedStorage<8, 8>   mUnkef23e0;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiPlayerLevelArguments& operator=(MultiPlayerLevelArguments const&);
    MultiPlayerLevelArguments(MultiPlayerLevelArguments const&);
    MultiPlayerLevelArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MultiPlayerLevelArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
