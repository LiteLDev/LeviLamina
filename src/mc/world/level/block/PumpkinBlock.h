#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/level/material/Material.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Container;
class ItemInstance;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class PumpkinBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mLit;
    ::ll::TypedStorage<1, 1, bool> mCarved;
    // NOLINTEND

public:
    /// The game additionally calls
    /// `BlockType::_subscribeForEvent<BlockEvents::BlockPlaceEvent, PumpkinBlock>(&PumpkinBlock::onPlace, false)`
    /// at the end of this constructor. That call only wires up event plumbing (it bottoms out in
    /// `BlockEventManager::_getOrAddExecutor` / `BlockEventPublishingExecutor::_subscribe`, whose own
    /// dependencies were not worth restoring), so it is omitted here.
    PumpkinBlock(::std::string const& nameId, int id, bool lit, bool carved)
    : ::BlockType(nameId, id, ::Material::getMaterial(::SharedTypes::v1_26_20::MaterialType::Solid)) {
        mLit        = lit;
        mCarved     = carved;
        mIsMobPiece = true;
    }

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
