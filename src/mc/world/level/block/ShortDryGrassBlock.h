#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
struct BlockAnimateTickData;
// clang-format on

class ShortDryGrassBlock : public ::FoliageBlock {
public:
    // prevent constructor by default
    ShortDryGrassBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const
        /*override*/;

    virtual void animateTick(::BlockAnimateTickData const& tickData) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ShortDryGrassBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCAPI bool $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const;

    MCAPI void $animateTick(::BlockAnimateTickData const& tickData) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
