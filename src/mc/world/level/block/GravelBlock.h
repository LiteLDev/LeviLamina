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
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color getDustColor(::Block const& block) const /*override*/;

    virtual ::std::string getDustParticleName(::Block const& block) const /*override*/;

    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    virtual bool mayConsumeFertilizer(::BlockSource& region) const /*override*/;

    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    virtual bool canBeOriginalSurface(bool) const /*override*/;

    virtual ~GravelBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::mce::Color $getDustColor(::Block const& block) const;

    MCFOLD ::std::string $getDustParticleName(::Block const& block) const;

    MCFOLD bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $mayConsumeFertilizer(::BlockSource& region) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCFOLD bool $canBeOriginalSurface(bool) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
