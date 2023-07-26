#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPosIterator {
public:
    // BlockPosIterator inner types declare
    // clang-format off
    class FromCenter;
    class ManhattanDistance;
    // clang-format on

    // BlockPosIterator inner types define
    class FromCenter {

    public:
        // prevent constructor by default
        FromCenter& operator=(FromCenter const&) = delete;
        FromCenter(FromCenter const&)            = delete;
        FromCenter()                             = delete;

    public:
        /**
         * @symbol ??0FromCenter\@BlockPosIterator\@\@QEAA\@AEBVBlockPos\@\@0\@Z
         */
        MCAPI FromCenter(class BlockPos const&, class BlockPos const&); // NOLINT
        /**
         * @symbol ?begin\@FromCenter\@BlockPosIterator\@\@QEBA?AV12\@XZ
         */
        MCAPI class BlockPosIterator::FromCenter begin() const; // NOLINT
        /**
         * @symbol ?end\@FromCenter\@BlockPosIterator\@\@QEBA?AV12\@XZ
         */
        MCAPI class BlockPosIterator::FromCenter end() const; // NOLINT
        /**
         * @symbol ??9FromCenter\@BlockPosIterator\@\@QEBA_NAEBV01\@\@Z
         */
        MCAPI bool operator!=(class BlockPosIterator::FromCenter const&) const; // NOLINT
        /**
         * @symbol ??DFromCenter\@BlockPosIterator\@\@QEAAAEBVBlockPos\@\@XZ
         */
        MCAPI class BlockPos const& operator*(); // NOLINT
        /**
         * @symbol ??EFromCenter\@BlockPosIterator\@\@QEAAAEAV01\@XZ
         */
        MCAPI class BlockPosIterator::FromCenter& operator++(); // NOLINT
    };

    class ManhattanDistance {

    public:
        // prevent constructor by default
        ManhattanDistance& operator=(ManhattanDistance const&) = delete;
        ManhattanDistance(ManhattanDistance const&)            = delete;
        ManhattanDistance()                                    = delete;

    public:
        /**
         * @symbol ??0ManhattanDistance\@BlockPosIterator\@\@QEAA\@AEBVBlockPos\@\@H\@Z
         */
        MCAPI ManhattanDistance(class BlockPos const&, int); // NOLINT
        /**
         * @symbol ?begin\@ManhattanDistance\@BlockPosIterator\@\@QEBA?AV12\@XZ
         */
        MCAPI class BlockPosIterator::ManhattanDistance begin() const; // NOLINT
        /**
         * @symbol ?end\@ManhattanDistance\@BlockPosIterator\@\@QEBA?AV12\@XZ
         */
        MCAPI class BlockPosIterator::ManhattanDistance end() const; // NOLINT
        /**
         * @symbol ??9ManhattanDistance\@BlockPosIterator\@\@QEBA_NAEBV01\@\@Z
         */
        MCAPI bool operator!=(class BlockPosIterator::ManhattanDistance const&) const; // NOLINT
        /**
         * @symbol ??DManhattanDistance\@BlockPosIterator\@\@QEAAAEBVBlockPos\@\@XZ
         */
        MCAPI class BlockPos const& operator*(); // NOLINT
        /**
         * @symbol ??EManhattanDistance\@BlockPosIterator\@\@QEAAAEAV01\@XZ
         */
        MCAPI class BlockPosIterator::ManhattanDistance& operator++(); // NOLINT
    };

public:
    // prevent constructor by default
    BlockPosIterator& operator=(BlockPosIterator const&) = delete;
    BlockPosIterator(BlockPosIterator const&)            = delete;
    BlockPosIterator()                                   = delete;

public:
    /**
     * @symbol ??0BlockPosIterator\@\@QEAA\@AEBVBlockPos\@\@0\@Z
     */
    MCAPI BlockPosIterator(class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?begin\@BlockPosIterator\@\@QEBA?AV1\@XZ
     */
    MCAPI class BlockPosIterator begin() const; // NOLINT
    /**
     * @symbol ?end\@BlockPosIterator\@\@QEBA?AV1\@XZ
     */
    MCAPI class BlockPosIterator end() const; // NOLINT
    /**
     * @symbol ??9BlockPosIterator\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class BlockPosIterator const&) const; // NOLINT
    /**
     * @symbol ??DBlockPosIterator\@\@QEAAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& operator*(); // NOLINT
    /**
     * @symbol ??EBlockPosIterator\@\@QEAAAEAV0\@XZ
     */
    MCAPI class BlockPosIterator& operator++(); // NOLINT
};
