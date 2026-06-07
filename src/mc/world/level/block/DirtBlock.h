#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class HashedString;
class ItemInstance;
class ItemStack;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class DirtBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&> mBlockToTillInto;
    // NOLINTEND

public:
    // prevent constructor by default
    DirtBlock& operator=(DirtBlock const&);
    DirtBlock(DirtBlock const&);
    DirtBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    virtual bool onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const
        /*override*/;

    virtual bool mayConsumeFertilizer(::BlockSource&) const /*override*/;

    virtual bool canBeFertilized(::BlockSource& aboveBlock, ::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool canBeOriginalSurface(bool) const /*override*/;

    virtual bool tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const
        /*override*/;

    virtual ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DirtBlock(::std::string const& nameId, int id, ::HashedString const& blockToTillInto);

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::HashedString const& blockToTillInto);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCFOLD bool $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const;

    MCFOLD bool $mayConsumeFertilizer(::BlockSource&) const;

    MCFOLD bool $canBeFertilized(::BlockSource& aboveBlock, ::BlockPos const&, ::Block const&) const;

    MCFOLD bool $canBeOriginalSurface(bool) const;

    MCFOLD bool $tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;

    MCFOLD ::mce::Color $getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
