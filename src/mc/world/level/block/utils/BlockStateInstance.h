#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateInstance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEINSTANCE
public:
    BlockStateInstance& operator=(BlockStateInstance const&) = delete;
    BlockStateInstance(BlockStateInstance const&)            = delete;
    BlockStateInstance()                                     = delete;
#endif

public:
    /**
     * @symbol ?initState\@BlockStateInstance\@\@QEAAXAEAIIIAEBVBlockState\@\@\@Z
     */
    MCAPI void initState(unsigned int&, unsigned int, unsigned int, class BlockState const&);
    /**
     * @symbol ?isValidData\@BlockStateInstance\@\@QEBA_NI\@Z
     */
    MCAPI bool isValidData(unsigned int) const;
};
