#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateInstance {
public:
    // prevent constructor by default
    BlockStateInstance& operator=(BlockStateInstance const&);
    BlockStateInstance(BlockStateInstance const&);
    BlockStateInstance();

public:
    // NOLINTBEGIN
    MCAPI void initState(uint& startBit, uint numBits, uint variationCount, class BlockState const& state);

    MCAPI bool isValidData(uint data) const;

    // NOLINTEND
};
