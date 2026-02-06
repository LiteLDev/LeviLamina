#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FlyingItemCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mFromContainer;
    ::ll::TypedStorage<4, 4, int>            mFromIndex;
    ::ll::TypedStorage<8, 32, ::std::string> mToContainer;
    ::ll::TypedStorage<4, 4, int>            mToIndex;
    ::ll::TypedStorage<4, 4, int>            mFlyingItemIdAux;
    ::ll::TypedStorage<8, 32, ::std::string> mUserData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FlyingItemCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
