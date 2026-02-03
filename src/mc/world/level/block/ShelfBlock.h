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
class Player;
class ShelfBlockActor;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
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
    // virtual functions
    // NOLINTBEGIN
    virtual void movedByPiston(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const
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

    virtual ~ShelfBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool
    _blockHasPoweredShelfType(::BlockSource const& region, ::BlockPos const& pos, ::ShelfBlock::PoweredType type) const;

    MCAPI ::std::tuple<::ShelfBlockActor*, ::ShelfBlockActor*, ::ShelfBlockActor*>
    _getPoweredShelfBlockActors(::BlockPos const& pos, ::BlockSource& region) const;

    MCAPI ::std::tuple<::ShelfBlockActor*, ::ShelfBlockActor*, ::ShelfBlockActor*>
    _getPoweredShelfBlockActorsForDoubleShelf(
        ::BlockSource&    region,
        ::BlockPos const& shelfLeft,
        ::BlockPos const& shelfRight
    ) const;

    MCAPI ::std::tuple<::ShelfBlockActor*, ::ShelfBlockActor*, ::ShelfBlockActor*>
    _getPoweredShelfBlockActorsForTripleShelf(
        ::BlockSource&    region,
        ::BlockPos const& shelfLeft,
        ::BlockPos const& shelfCenter,
        ::BlockPos const& shelfRight
    ) const;

    MCAPI ::ShelfBlock::SwapItemResult
    _getSwapItemWithHandResult(::ShelfBlockActor& shelfActor, int hitSlot, ::Player const& player) const;

    MCAPI bool _isMatchingPoweredShelfInMatchingDirection(
        ::BlockSource const& region,
        ::BlockPos const&    pos,
        ::BlockPos const&    neighbor
    ) const;

    MCAPI void _powerOnAndTryConnectNeighbors(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void
    _setShelfData(::BlockSource& region, ::BlockPos const& pos, bool powered, ::ShelfBlock::PoweredType type) const;

    MCAPI void
    _swapItemWithHand(::ShelfBlockActor& shelfActor, int hitSlot, ::Player& player, ::BlockSource const& region) const;

    MCAPI ::ShelfBlock::SwapItemResult _swapItemsWithHotbar(
        ::ShelfBlockActor&   shelfActor,
        int                  shelfSlot,
        ::Player&            player,
        int                  inventorySlot,
        ::BlockSource const& region
    ) const;

    MCAPI bool _swapItemsWithPoweredShelf(::Player& player, ::BlockPos const& pos, ::BlockSource& region) const;

    MCAPI bool _swapItemsWithUnpoweredShelf(
        ::Player&          player,
        ::BlockPos const&  pos,
        ::BlockSource&     region,
        ::ShelfBlockActor& blockActor,
        ::Vec3 const&      blockHit,
        uchar              hitFace
    ) const;

    MCAPI void _unpowerAndDisconnectFromNeighbors(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void _updatePoweredShelf(::BlockSource& region, ::BlockPos const& pos, bool isPowered) const;

    MCAPI void _validatePoweredShelfCurrentStateFromNeighbors(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AABB const& _getShape(::BlockPos const& pos, ::Block const& block, ::AABB& bufferValue);

    MCAPI_C static ::ShelfBlock::SlotState
    getBlockSlotState(::BlockPos const& blockPos, ::Vec3 const& blockHit, uchar faceHit, ::BlockSource const& region);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

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
