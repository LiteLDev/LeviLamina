#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FaceDirectionalActorBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ChiseledBookshelfBlockActor;
class ItemInstance;
class ItemStack;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class ChiseledBookshelfBlock : public ::FaceDirectionalActorBlock {
public:
    // ChiseledBookshelfBlock inner types define
    enum class SlotState : int {
        Free     = 0,
        Occupied = 1,
        Invalid  = 2,
    };

public:
    // prevent constructor by default
    ChiseledBookshelfBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const&, uchar) const
        /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChiseledBookshelfBlock(::std::string const& nameId, int id);

    MCAPI bool _retrieveBook(::Player& player, ::ChiseledBookshelfBlockActor& bookshelfActor, int hitSlot) const;

    MCAPI void
    _setBook(::Player& player, ::ItemStack heldItem, ::ChiseledBookshelfBlockActor& bookshelfActor, int hitSlot) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::ChiseledBookshelfBlock::SlotState
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
    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const&, uchar) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
