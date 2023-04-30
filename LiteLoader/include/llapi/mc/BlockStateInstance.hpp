/**
 * @file  BlockStateInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockStateInstance {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEINSTANCE
public:
    class BlockStateInstance& operator=(class BlockStateInstance const &) = delete;
    BlockStateInstance(class BlockStateInstance const &) = delete;
    BlockStateInstance() = delete;
#endif

public:
    /**
     * @symbol ?initState\@BlockStateInstance\@\@QEAAXAEAIIIAEBVBlockState\@\@\@Z
     */
    MCAPI void initState(unsigned int &, unsigned int, unsigned int, class BlockState const &);
    /**
     * @symbol ?isValidData\@BlockStateInstance\@\@QEBA_NI\@Z
     */
    MCAPI bool isValidData(unsigned int) const;

};
