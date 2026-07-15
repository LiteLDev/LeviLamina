#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
// clang-format on

class BlockStateInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                 mVariationCount;
    ::ll::TypedStorage<4, 4, uint>                                 mNumBits;
    ::ll::TypedStorage<4, 4, uint>                                 mEndBit;
    ::ll::TypedStorage<4, 4, uint>                                 mMask;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockState const*>> mState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Block const*
    _trySet(ushort data, uint value, ::std::vector<::std::unique_ptr<::Block>> const& blockPermutations) const;
    // NOLINTEND
};
