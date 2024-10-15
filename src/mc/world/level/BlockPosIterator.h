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
        MCAPI FromCenter(class BlockPos const& pos, class BlockPos const& reach);

        MCAPI class BlockPosIterator::FromCenter begin() const;

        MCAPI class BlockPosIterator::FromCenter end() const;

        MCAPI bool operator!=(class BlockPosIterator::FromCenter const& other) const;

        MCAPI class BlockPos const& operator*();

        MCAPI class BlockPosIterator::FromCenter& operator++();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(class BlockPos const& pos, class BlockPos const& reach);

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
        MCAPI ManhattanDistance(class BlockPos const& pos, int distance);

        MCAPI class BlockPosIterator::ManhattanDistance begin() const;

        MCAPI class BlockPosIterator::ManhattanDistance end() const;

        MCAPI bool operator!=(class BlockPosIterator::ManhattanDistance const& other) const;

        MCAPI class BlockPos const& operator*();

        MCAPI class BlockPosIterator::ManhattanDistance& operator++();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(class BlockPos const& pos, int distance);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockPosIterator& operator=(BlockPosIterator const&);
    BlockPosIterator(BlockPosIterator const&);
    BlockPosIterator();

public:
    // NOLINTBEGIN
    MCAPI BlockPosIterator(class BlockPos const& a, class BlockPos const& b);

    MCAPI class BlockPosIterator begin() const;

    MCAPI class BlockPosIterator end() const;

    MCAPI bool operator!=(class BlockPosIterator const& other) const;

    MCAPI class BlockPos const& operator*();

    MCAPI class BlockPosIterator& operator++();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class BlockPos const& a, class BlockPos const& b);

    // NOLINTEND
};
