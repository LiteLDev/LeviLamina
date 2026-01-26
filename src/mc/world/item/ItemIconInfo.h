#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemIconInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<4, 4, int>            mFrame;
    ::ll::TypedStorage<4, 4, int>            mAtlasTotalFrames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};
