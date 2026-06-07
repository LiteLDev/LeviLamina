#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/LeavesBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class HashedString;
struct BlockGraphicsModeChangeContext;
// clang-format on

class SeasonsAgnosticLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    SeasonsAgnosticLeavesBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockRenderLayer getRenderLayer(::Block const& region, ::BlockSource& pos, ::BlockPos const&) const
        /*override*/;

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SeasonsAgnosticLeavesBlock(
        ::std::string const&                           nameId,
        int                                            id,
        ::HashedString const&                          sapling,
        ::std::optional<::LeavesBlock::ParticleParams> particleParams
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                           nameId,
        int                                            id,
        ::HashedString const&                          sapling,
        ::std::optional<::LeavesBlock::ParticleParams> particleParams
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockRenderLayer $getRenderLayer(::Block const& region, ::BlockSource& pos, ::BlockPos const&) const;

    MCAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
