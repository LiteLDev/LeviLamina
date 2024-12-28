#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class BlockPos;
class BlockSource;
class Container;
class Experiments;
class ItemStack;
class Player;
class Random;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class DispenserBlock : public ::ActorBlockBase<::BlockLegacy> {
public:
    // prevent constructor by default
    DispenserBlock& operator=(DispenserBlock const&);
    DispenserBlock(DispenserBlock const&);
    DispenserBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 121
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar) const /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 29
    virtual bool isContainerBlock() const /*override*/;

    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 61
    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const
        /*override*/;

    // vIndex: 105
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 106
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 151
    virtual int getTickDelay() const;

    // vIndex: 141
    virtual bool allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const
        /*override*/;

    // vIndex: 152
    virtual void dispenseFrom(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~DispenserBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DispenserBlock(::std::string const& nameId, int id);

    MCAPI void ejectItem(
        ::BlockSource&     region,
        ::Vec3 const&      pos,
        uchar              face,
        ::ItemStack const& item,
        ::Container&       container,
        int                slot,
        int                countLimit
    ) const;

    MCAPI ::Vec3 getDispensePosition(::BlockSource& region, ::Vec3 const& pos) const;

    MCAPI uchar getFacing(::Block const& block) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void dropAllItemsFromContainer(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void
    ejectItem(::BlockSource& region, ::Vec3 const& pos, uchar face, ::ItemStack const& item, int countLimit);

    MCAPI static void setupConsumerRedstoneComponent(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getVariant(::Block const& block) const;

    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCAPI ::Block const&
    $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar) const;

    MCAPI bool $isInteractiveBlock() const;

    MCAPI bool $isContainerBlock() const;

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI int $getTickDelay() const;

    MCAPI bool $allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const;

    MCAPI void $dispenseFrom(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
