#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextureShiftManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk679b3c;
    ::ll::UntypedStorage<8, 8> mUnkce97e6;
    ::ll::UntypedStorage<8, 8> mUnk3b776c;
    ::ll::UntypedStorage<8, 8> mUnk1a8f3d;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureShiftManager& operator=(TextureShiftManager const&);
    TextureShiftManager(TextureShiftManager const&);
    TextureShiftManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void reset();

    MCNAPI void tickUpdate(float currentTime, uint64 ticksPassed);

    MCNAPI ~TextureShiftManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
