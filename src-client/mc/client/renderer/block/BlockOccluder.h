#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockGraphics;
class BlockPos;
class BlockTessellatorCache;
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
    MCAPI bool _isHalfCubeOpaque(::Block const& block, ::BlockGraphics const& blockGraphics) const;

    MCAPI bool
    _shouldRenderFace(::BlockPos const& neighborPos, uchar face, ::AABB const& shape, ::BlockPos const& pos) const;

    MCAPI void _updateRenderFace(::Block const& block, ::BlockPos const& p, ::AABB const& shape, uchar face);
    // NOLINTEND
};
