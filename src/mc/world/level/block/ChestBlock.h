#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/ChestType.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Container;
class Experiments;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class ChestBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ChestType> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockType& init() /*override*/;

    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    virtual void onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const /*override*/;

    virtual bool detachesOnPistonMove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const
        /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool isContainerBlock() const /*override*/;

    virtual bool isSignalSource() const /*override*/;

    virtual bool isChestBlock() const /*override*/;

    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~ChestBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChestBlock(::std::string const& nameId, int id, ::ChestType type, ::MaterialType materialType);

    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void updateSignalStrength(::BlockSource& region, ::BlockPos const& pos, int strength) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _tryEquipChest(::Actor& actor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::ChestType type, ::MaterialType materialType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockType& $init();

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI void $onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const;

    MCFOLD bool $detachesOnPistonMove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCFOLD int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCAPI bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $isContainerBlock() const;

    MCFOLD bool $isSignalSource() const;

    MCFOLD bool $isChestBlock() const;

    MCFOLD bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCFOLD bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
