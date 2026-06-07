#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class ClayBlock : public ::BlockType {
public:
    // prevent constructor by default
    ClayBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const
        /*override*/;

    virtual bool mayConsumeFertilizer(::BlockSource&) const /*override*/;

    virtual bool canBeFertilized(::BlockSource& aboveBlock, ::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool canBeOriginalSurface(bool) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClayBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const;

    MCFOLD bool $mayConsumeFertilizer(::BlockSource&) const;

    MCFOLD bool $canBeFertilized(::BlockSource& aboveBlock, ::BlockPos const&, ::Block const&) const;

    MCFOLD bool $canBeOriginalSurface(bool) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
