#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class ItemStack;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class RootedDirtBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 73
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 75
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 82
    virtual bool tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const
        /*override*/;

    // vIndex: 45
    virtual bool canBeOriginalSurface() const /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~RootedDirtBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI bool $tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;

    MCFOLD bool $canBeOriginalSurface() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
