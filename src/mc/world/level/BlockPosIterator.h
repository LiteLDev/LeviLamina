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
        FromCenter& operator=(FromCenter const&);
        FromCenter(FromCenter const&);
        FromCenter();

    public:
        // NOLINTBEGIN
        // symbol: ??0FromCenter@BlockPosIterator@@QEAA@AEBVBlockPos@@0@Z
        MCAPI FromCenter(class BlockPos const& pos, class BlockPos const& reach);

        // symbol: ?begin@FromCenter@BlockPosIterator@@QEBA?AV12@XZ
        MCAPI class BlockPosIterator::FromCenter begin() const;

        // symbol: ?end@FromCenter@BlockPosIterator@@QEBA?AV12@XZ
        MCAPI class BlockPosIterator::FromCenter end() const;

        // symbol: ??9FromCenter@BlockPosIterator@@QEBA_NAEBV01@@Z
        MCAPI bool operator!=(class BlockPosIterator::FromCenter const& other) const;

        // symbol: ??DFromCenter@BlockPosIterator@@QEAAAEBVBlockPos@@XZ
        MCAPI class BlockPos const& operator*();

        // symbol: ??EFromCenter@BlockPosIterator@@QEAAAEAV01@XZ
        MCAPI class BlockPosIterator::FromCenter& operator++();

        // NOLINTEND
    };

    class ManhattanDistance {
    public:
        // prevent constructor by default
        ManhattanDistance& operator=(ManhattanDistance const&);
        ManhattanDistance(ManhattanDistance const&);
        ManhattanDistance();

    public:
        // NOLINTBEGIN
        // symbol: ??0ManhattanDistance@BlockPosIterator@@QEAA@AEBVBlockPos@@H@Z
        MCAPI ManhattanDistance(class BlockPos const& pos, int distance);

        // symbol: ?begin@ManhattanDistance@BlockPosIterator@@QEBA?AV12@XZ
        MCAPI class BlockPosIterator::ManhattanDistance begin() const;

        // symbol: ?end@ManhattanDistance@BlockPosIterator@@QEBA?AV12@XZ
        MCAPI class BlockPosIterator::ManhattanDistance end() const;

        // symbol: ??9ManhattanDistance@BlockPosIterator@@QEBA_NAEBV01@@Z
        MCAPI bool operator!=(class BlockPosIterator::ManhattanDistance const& other) const;

        // symbol: ??DManhattanDistance@BlockPosIterator@@QEAAAEBVBlockPos@@XZ
        MCAPI class BlockPos const& operator*();

        // symbol: ??EManhattanDistance@BlockPosIterator@@QEAAAEAV01@XZ
        MCAPI class BlockPosIterator::ManhattanDistance& operator++();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockPosIterator& operator=(BlockPosIterator const&);
    BlockPosIterator(BlockPosIterator const&);
    BlockPosIterator();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockPosIterator@@QEAA@AEBVBlockPos@@0@Z
    MCAPI BlockPosIterator(class BlockPos const& a, class BlockPos const& b);

    // symbol: ?begin@BlockPosIterator@@QEBA?AV1@XZ
    MCAPI class BlockPosIterator begin() const;

    // symbol: ?end@BlockPosIterator@@QEBA?AV1@XZ
    MCAPI class BlockPosIterator end() const;

    // symbol: ??9BlockPosIterator@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class BlockPosIterator const& other) const;

    // symbol: ??DBlockPosIterator@@QEAAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& operator*();

    // symbol: ??EBlockPosIterator@@QEAAAEAV0@XZ
    MCAPI class BlockPosIterator& operator++();

    // NOLINTEND
};
