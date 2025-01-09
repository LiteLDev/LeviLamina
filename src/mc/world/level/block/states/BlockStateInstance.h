#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockState;
// clang-format on

class BlockStateInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                mEndBit;
    ::ll::TypedStorage<4, 4, uint>                mNumBits;
    ::ll::TypedStorage<4, 4, uint>                mVariationCount;
    ::ll::TypedStorage<4, 4, uint>                mMask;
    ::ll::TypedStorage<1, 1, bool>                mInitialized;
    ::ll::TypedStorage<8, 8, ::BlockState const*> mState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initState(uint& startBit, uint numBits, uint variationCount, ::BlockState const& state);

    MCAPI bool isValidData(uint data) const;
    // NOLINTEND
};
