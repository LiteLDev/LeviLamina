#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateInstance {

public:
    // prevent constructor by default
    BlockStateInstance& operator=(BlockStateInstance const&) = delete;
    BlockStateInstance(BlockStateInstance const&)            = delete;
    BlockStateInstance()                                     = delete;

public:
    /**
     * @symbol ?initState\@BlockStateInstance\@\@QEAAXAEAIIIAEBVBlockState\@\@\@Z
     */
    MCAPI void initState(unsigned int&, unsigned int, unsigned int, class BlockState const&); // NOLINT
    /**
     * @symbol ?isValidData\@BlockStateInstance\@\@QEBA_NI\@Z
     */
    MCAPI bool isValidData(unsigned int) const; // NOLINT
};
