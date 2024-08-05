#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span_mut.h"

class BlockVolume {
public:
    // BlockVolume inner types declare
    // clang-format off
    struct BlockVolumeIter;
    // clang-format on

    // BlockVolume inner types define
    struct BlockVolumeIter {
    public:
        // prevent constructor by default
        BlockVolumeIter& operator=(BlockVolumeIter const&);
        BlockVolumeIter(BlockVolumeIter const&);
        BlockVolumeIter();

    public:
        // NOLINTBEGIN
        MCAPI bool operator!=(struct BlockVolume::BlockVolumeIter const& c) const;

        MCAPI std::pair<class Block const*, class Pos> const operator*();

        MCAPI struct BlockVolume::BlockVolumeIter& operator++();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockVolume& operator=(BlockVolume const&);
    BlockVolume(BlockVolume const&);
    BlockVolume();

public:
    // NOLINTBEGIN
    MCAPI BlockVolume(
        class buffer_span_mut<class Block const*> buffer,
        int                                       width,
        int                                       height,
        int                                       depth,
        class Block const&                        initBlock,
        int
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
};
