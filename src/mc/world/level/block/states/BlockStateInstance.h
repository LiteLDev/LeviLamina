#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockState;
// clang-format on

class BlockStateInstance {
public:
    template <typename T>
        requires(std::is_integral_v<T> || std::is_enum_v<T>)
    T get(ushort data) const {
        return static_cast<T>((data >> (mEndBit - mNumBits + 1)) & ((1 << mNumBits) - 1));
    }

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
};
