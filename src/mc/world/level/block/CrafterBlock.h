#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Flip.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class CrafterBlock : public ::ActorBlockBase<::BlockType> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 136
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 28
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

    // vIndex: 120
    virtual ::Block const& getRenderBlock() const /*override*/;

    // vIndex: 121
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 122
    virtual ::Flip getFaceFlip(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 137
    virtual bool allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~CrafterBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void dispenseFrom(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getVariant(::Block const& block) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCFOLD void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $isContainerBlock() const;

    MCFOLD void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI ::Block const& $getRenderBlock() const;

    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCAPI ::Flip $getFaceFlip(uchar face, ::Block const& block) const;

    MCFOLD bool $allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
