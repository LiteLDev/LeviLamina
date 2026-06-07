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
class HashedString;
class IRandom;
class ItemStack;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class GrassBlockBase : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&> mTillsIntoBlock;
    ::ll::TypedStorage<8, 8, ::HashedString const&> mGrowsOnBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    GrassBlockBase& operator=(GrassBlockBase const&);
    GrassBlockBase(GrassBlockBase const&);
    GrassBlockBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const
        /*override*/;

    virtual bool canBeFertilized(::BlockSource& aboveBlock, ::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool canBeOriginalSurface(bool) const /*override*/;

    virtual bool tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const
        /*override*/;

    virtual bool _plantGrass(::BlockSource& region, ::BlockPos const& abovePos, ::IRandom& random) const = 0;

    virtual bool _shouldStopRandomWalk(::BlockSource& region, ::BlockPos& pos) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canBeGrass(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool _isGrowthBlockingSolidBlock(::Block const& block) const;

    MCAPI bool _isGrowthBlockingStairBlock(::Block const& block) const;

    MCAPI bool fertilize(::BlockSource& region, ::BlockPos const& pos, ::IRandom& random) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const;

    MCFOLD bool $canBeFertilized(::BlockSource& aboveBlock, ::BlockPos const&, ::Block const&) const;

    MCFOLD bool $canBeOriginalSurface(bool) const;

    MCFOLD bool $tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
