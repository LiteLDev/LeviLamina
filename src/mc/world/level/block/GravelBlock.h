#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

class GravelBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    GravelBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    virtual bool onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const
        /*override*/;

    virtual bool mayConsumeFertilizer(::BlockSource&) const /*override*/;

    virtual bool canBeFertilized(::BlockSource& aboveBlock, ::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool canBeOriginalSurface(bool) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GravelBlock(::std::string const& nameId, int type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int type);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCFOLD ::std::string $getDustParticleName(::Block const&) const;

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
