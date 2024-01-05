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
    // symbol: ?initState@BlockStateInstance@@QEAAXAEAIIIAEBVBlockState@@@Z
    MCAPI void initState(uint& startBit, uint numBits, uint variationCount, class BlockState const& state);

    // symbol: ?isValidData@BlockStateInstance@@QEBA_NI@Z
    MCAPI bool isValidData(uint data) const;

    // NOLINTEND
};
