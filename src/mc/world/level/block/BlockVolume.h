#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span_mut.h"

class Block;

class BlockVolume {
public:
    // BlockVolume inner types declare
    // clang-format off
    struct BlockVolumeIter;
    // clang-format on

    // BlockVolume inner types define
    struct BlockVolumeIter {
        // Pos                                     pos;       // this+0x0
        // Pos                                     dims;      // this+0xC
        // buffer_span_mut<Block const*>::iterator blockIter; // this+0x18

        // prevent constructor by default
        BlockVolumeIter& operator=(BlockVolumeIter const&);
        BlockVolumeIter(BlockVolumeIter const&);
        BlockVolumeIter();

        // NOLINTBEGIN
        MCAPI bool operator!=(struct BlockVolume::BlockVolumeIter const& c) const;

        MCAPI std::pair<class Block const*, class Pos> const operator*();

        MCAPI struct BlockVolume::BlockVolumeIter& operator++();

        // NOLINTEND
    };

public:
    buffer_span_mut<Block const*> mBlocks;          // this+0x0
    uint                          mWidth;           // this+0x10
    uint                          mHeight;          // this+0x14
    uint                          mDepth;           // this+0x18
    int                           mDimensionBottom; // this+0x1C
    Block const*                  mInitBlock;       // this+0x20

    BlockVolume() = default;

    Block const*& block(uint index) { return mBlocks[index]; }

    Block const*& block(BlockPos const& pos) { return mBlocks[index(pos)]; }

public:
    // NOLINTBEGIN
    MCAPI BlockVolume(
        class buffer_span_mut<class Block const*> buffer,
        int                                       width,
        int                                       height,
        int                                       depth,
        class Block const&                        initBlock,
        int                                       dimensionBottom
    );

    MCAPI struct BlockVolume::BlockVolumeIter begin() const;

    MCAPI std::unique_ptr<std::vector<short>> computeHeightMap() const;

    MCAPI struct BlockVolume::BlockVolumeIter end() const;

    MCAPI short findHighestNonAirBlock() const;

    MCAPI short
    getAboveTopSolidBlock(class BlockPos const& start, bool dimensionShowsSky, bool includeWater, bool includeLeaves)
        const;

    MCAPI class Pos getDimensions() const;

    MCAPI uint getIndexBounds() const;

    MCAPI uint index(class BlockPos const& pos) const;

    MCAPI uint index(class Pos const& pos) const;

    MCAPI uint indexNoBoundsCheck(class BlockPos const& pos) const;

    MCAPI uint indexNoBoundsCheck(class Pos const& pos) const;

    MCAPI bool isInBounds(class BlockPos const& pos) const;

    MCAPI bool isInBounds(class Pos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class buffer_span_mut<class Block const*> buffer,
        int                                       width,
        int                                       height,
        int                                       depth,
        class Block const&                        initBlock,
        int                                       dimensionBottom
    );

    // NOLINTEND
};
