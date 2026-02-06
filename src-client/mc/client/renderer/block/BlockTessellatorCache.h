#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BrightnessPair.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockGraphics;
class BlockSource;
// clang-format on

class BlockTessellatorCache {
public:
    // BlockTessellatorCache inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // BlockTessellatorCache inner types define
    struct LocalRegistry {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockTessellatorCache::LocalRegistry>             mLocalRegistry;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mPos;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                     mRegion;
    ::ll::TypedStorage<1, 16000, ::std::array<::BrightnessPair, 8000>>           mLightColors;
    ::ll::TypedStorage<8, 64000, ::std::array<::Block const*, 8000>>             mBlocks;
    ::ll::TypedStorage<8, 64000, ::std::array<::Block const*, 8000>>             mExtraBlocks;
    ::ll::TypedStorage<8, 128000, ::std::array<::BlockGraphics const*, 8000>[2]> mBlockGraphics;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Block const& getBlock(::BlockPos const& p);

    MCAPI ::BlockGraphics const* getBlockGraphics(::BlockPos const& p, ::Block const& block, uint layer);

    MCAPI ::BrightnessPair getLightColor(::BlockPos const& p, ::Block const* blockHint);

    MCAPI ::std::pair<::Block const*, uint> getLiquidBlockAndLayer(::BlockPos const& p);

    MCAPI void reset(::BlockSource* region, ::BlockPos const& startPostion);

    MCAPI void resetToAir(::BlockSource* region, ::BlockPos const& startPostion);
    // NOLINTEND
};
