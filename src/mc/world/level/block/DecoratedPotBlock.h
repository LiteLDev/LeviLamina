#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/FaceDirectionalActorBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DecoratedPotBlockActor;
class Experiments;
class ItemInstance;
class ItemStack;
class Player;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class DecoratedPotBlock : public ::FaceDirectionalActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 89
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const* blockActor) const /*override*/;

    // vIndex: 88
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 131
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 135
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 16
    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const&) const /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    // vIndex: 56
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 104
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 105
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~DecoratedPotBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::CompoundTag>
    getItemInstanceUserData(::gsl::not_null<::DecoratedPotBlockActor const*> pot);

    MCNAPI static ::std::vector<::ItemStack> getSherdItems(::DecoratedPotBlockActor const& decoratedPotBlockActor);

    MCNAPI static bool isShatteringItem(::ItemStack const& item);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const* blockActor) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
