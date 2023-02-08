/**
 * @file  BlockPosIterator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockPosIterator.
 *
 */
class BlockPosIterator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSITERATOR
public:
    class BlockPosIterator& operator=(class BlockPosIterator const &) = delete;
    BlockPosIterator(class BlockPosIterator const &) = delete;
    BlockPosIterator() = delete;
#endif

public:
    /**
     * @hash   -1310548170
     * @symbol  ??0BlockPosIterator\@\@QEAA\@AEBVBlockPos\@\@0\@Z
     */
    MCAPI BlockPosIterator(class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -530798070
     * @symbol  ?begin\@BlockPosIterator\@\@QEBA?AV1\@XZ
     */
    MCAPI class BlockPosIterator begin() const;
    /**
     * @hash   -822519126
     * @symbol  ?end\@BlockPosIterator\@\@QEBA?AV1\@XZ
     */
    MCAPI class BlockPosIterator end() const;
    /**
     * @hash   -1356611563
     * @symbol  ??9BlockPosIterator\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class BlockPosIterator const &) const;
    /**
     * @hash   -783213886
     * @symbol  ??DBlockPosIterator\@\@QEAAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & operator*();
    /**
     * @hash   -1930745622
     * @symbol  ??EBlockPosIterator\@\@QEAAAEAV0\@XZ
     */
    MCAPI class BlockPosIterator & operator++();

};