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
    ::ll::UntypedStorage<4, 4> mUnkeee94f;
    ::ll::UntypedStorage<4, 4> mUnk58db0e;
    ::ll::UntypedStorage<4, 4> mUnk3e3d8a;
    ::ll::UntypedStorage<4, 4> mUnk787411;
    ::ll::UntypedStorage<1, 1> mUnk163307;
    ::ll::UntypedStorage<8, 8> mUnkd127d6;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateInstance& operator=(BlockStateInstance const&);
    BlockStateInstance(BlockStateInstance const&);
    BlockStateInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initState(uint& startBit, uint numBits, uint variationCount, ::BlockState const& state);

    MCAPI bool isValidData(uint data) const;
    // NOLINTEND
};
