#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class ShelfBlock : public ::ActorBlock {
public:
    // ShelfBlock inner types define
    enum class NeighborDirection : uchar {
        Right = 0,
        Left  = 1,
    };

    enum class PoweredType : int {
        Unconnected = 0,
        Right       = 1,
        Center      = 2,
        Left        = 3,
        Count       = 4,
    };

    enum class SlotState : uchar {
        Free     = 0,
        Occupied = 1,
        Invalid  = 2,
    };

    enum class SwapItemResult : int {
        NoItemsTransferred = 0,
        SingleItemTransfer = 1,
        TwoItemsSwapped    = 2,
    };

public:
    // prevent constructor by default
    ShelfBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void movedByPiston(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::AABB&           bufferAABB
    ) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const /*override*/;

    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ShelfBlock(::std::string const& nameId, int id);

    MCAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::ShelfBlock::SlotState
    getBlockSlotState(::BlockPos const& blockPos, ::Vec3 const& blockHit, uchar faceHit, ::BlockSource const& region);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCFOLD ::AABB const& $getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::AABB&           bufferAABB
    ) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const;

    MCAPI bool $liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
