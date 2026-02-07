#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockTessellatorCache;
struct AirAndSimpleBlockBits;
// clang-format on

class BlockOccluder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<6>>         mFacingOccluded;
    ::ll::TypedStorage<8, 8, ::BlockTessellatorCache&> mBlockCache;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockOccluder& operator=(BlockOccluder const&);
    BlockOccluder(BlockOccluder const&);
    BlockOccluder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockOccluder(
        ::BlockTessellatorCache&       cache,
        ::Block const&                 block,
        ::BlockPos const&              blockPos,
        ::AABB const&                  shape,
        ::gsl::span<uchar const>       checkFace,
        bool                           renderingGUI,
        ::AirAndSimpleBlockBits const* airAndSimpleBlocks
    );

    MCAPI bool _shouldOcclude(uchar face, ::AABB const& shape, ::BlockPos const& p) const;

    MCAPI bool _shouldOccludeIce(uchar face, ::AABB const& shape, ::BlockPos const& pos) const;

    MCAPI bool _shouldOccludeLeaves(uchar face, ::AABB const& shape, ::BlockPos const& p) const;

    MCAPI bool _shouldOccludeLiquid(uchar face, ::AABB const& shape, ::BlockPos const& pos) const;

    MCAPI bool _shouldOccludePortal(uchar face, ::AABB const& shape, ::BlockPos const& pos) const;

    MCAPI bool _shouldOccludeSlab(uchar face, ::AABB const& shape, ::BlockPos const& pos) const;

    MCAPI bool
    _shouldRenderFace(::BlockPos const& neighborPos, uchar face, ::AABB const& shape, ::BlockPos const& pos) const;

    MCAPI void _updateRenderFace(::Block const& block, ::BlockPos const& p, ::AABB const& shape, uchar face);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockTessellatorCache&       cache,
        ::Block const&                 block,
        ::BlockPos const&              blockPos,
        ::AABB const&                  shape,
        ::gsl::span<uchar const>       checkFace,
        bool                           renderingGUI,
        ::AirAndSimpleBlockBits const* airAndSimpleBlocks
    );
    // NOLINTEND
};
