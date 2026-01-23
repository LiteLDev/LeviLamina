#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TropicalFishInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mColor;
    ::ll::TypedStorage<4, 4, int>            mColor2;
    ::ll::TypedStorage<4, 4, int>            mVariant;
    ::ll::TypedStorage<4, 4, int>            mMarkVariant;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TropicalFishInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
