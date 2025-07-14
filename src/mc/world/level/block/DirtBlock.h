#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
class ItemStack;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class DirtBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 89
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    // vIndex: 73
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 74
    virtual bool mayConsumeFertilizer(::BlockSource& region) const /*override*/;

    // vIndex: 75
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 45
    virtual bool canBeOriginalSurface() const /*override*/;

    // vIndex: 82
    virtual bool tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const
        /*override*/;

    // vIndex: 143
    virtual ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 0
    virtual ~DirtBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCFOLD bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $mayConsumeFertilizer(::BlockSource& region) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCFOLD bool $canBeOriginalSurface() const;

    MCAPI bool $tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;

    MCFOLD ::mce::Color $getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
