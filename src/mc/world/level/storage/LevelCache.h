#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 840> mUnk6a83ab;
    ::ll::UntypedStorage<8, 16>  mUnk5b972a;
    ::ll::UntypedStorage<1, 1>   mUnk541c7c;
    ::ll::UntypedStorage<1, 1>   mUnkebaf06;
    ::ll::UntypedStorage<1, 1>   mUnk403190;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCache& operator=(LevelCache const&);
    LevelCache(LevelCache const&);
    LevelCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
