#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelStorageEventingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk753756;
    ::ll::UntypedStorage<8, 32> mUnkeaa2d0;
    ::ll::UntypedStorage<1, 1>  mUnkf2a611;
    ::ll::UntypedStorage<4, 4>  mUnkd469e4;
    ::ll::UntypedStorage<8, 32> mUnk344418;
    ::ll::UntypedStorage<8, 8>  mUnkfcd47e;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageEventingContext& operator=(LevelStorageEventingContext const&);
    LevelStorageEventingContext(LevelStorageEventingContext const&);
    LevelStorageEventingContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LevelStorageEventingContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
