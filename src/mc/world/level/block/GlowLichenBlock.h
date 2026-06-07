#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/MultifaceBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Material;
// clang-format on

class GlowLichenBlock : public ::MultifaceBlock {
public:
    // prevent constructor by default
    GlowLichenBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const
        /*override*/;

    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const&) const /*override*/;

    virtual ::BlockType& init() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GlowLichenBlock(::std::string const& nameId, int id, ::Material const& material);

    MCAPI bool fertilize(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const;

    MCAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const&) const;

    MCAPI ::BlockType& $init();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
