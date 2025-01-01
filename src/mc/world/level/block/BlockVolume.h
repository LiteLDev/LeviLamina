#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Pos;
// clang-format on

class BlockVolume {
public:
    // BlockVolume inner types declare
    // clang-format off
    struct BlockVolumeIter;
    // clang-format on

    // BlockVolume inner types define
    struct BlockVolumeIter {
    public:
        // BlockVolumeIter inner types define
        using iterator_category = ::std::forward_iterator_tag;

        using reference = ::std::pair<::Block const*, ::Pos> const&;

        using value_type = ::std::pair<::Block const*, ::Pos> const;

        using pointer = ::std::pair<::Block const*, ::Pos> const*;

        using difference_type = int64;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Pos>                                      pos;
        ::ll::TypedStorage<4, 12, ::Pos>                                      dims;
        ::ll::TypedStorage<8, 8, ::buffer_span_mut<::Block const*>::iterator> blockIter;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator!=(::BlockVolume::BlockVolumeIter const& c) const;

        MCAPI ::std::pair<::Block const*, ::Pos> const operator*();

        MCAPI ::BlockVolume::BlockVolumeIter& operator++();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::buffer_span_mut<::Block const*>> mBlocks;
    ::ll::TypedStorage<4, 4, uint>                               mWidth;
    ::ll::TypedStorage<4, 4, uint>                               mHeight;
    ::ll::TypedStorage<4, 4, uint>                               mDepth;
    ::ll::TypedStorage<4, 4, int>                                mDimensionBottom;
    ::ll::TypedStorage<8, 8, ::Block const*>                     mInitBlock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockVolume(
        ::buffer_span_mut<::Block const*> buffer,
        int                               width,
        int                               height,
        int                               depth,
        ::Block const&                    initBlock,
        int                               dimensionBottom
    );

    MCAPI ::BlockVolume::BlockVolumeIter begin() const;

    MCAPI ::std::unique_ptr<::std::vector<short>> computeHeightMap() const;

    MCAPI ::BlockVolume::BlockVolumeIter end() const;

    MCAPI short findHighestNonAirBlock() const;

    MCAPI short
    getAboveTopSolidBlock(::BlockPos const& start, bool dimensionShowsSky, bool includeWater, bool includeLeaves) const;

    MCAPI ::Pos getDimensions() const;

    MCAPI uint getIndexBounds() const;

    MCAPI uint index(::BlockPos const& pos) const;

    MCAPI uint index(::Pos const&) const;

    MCAPI uint indexNoBoundsCheck(::Pos const& pos) const;

    MCAPI uint indexNoBoundsCheck(::BlockPos const&) const;

    MCAPI bool isInBounds(::BlockPos const& pos) const;

    MCAPI bool isInBounds(::Pos const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::buffer_span_mut<::Block const*> buffer,
        int                               width,
        int                               height,
        int                               depth,
        ::Block const&                    initBlock,
        int                               dimensionBottom
    );
    // NOLINTEND
};
