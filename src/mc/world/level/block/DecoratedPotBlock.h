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
class ItemInstance;
class ItemStack;
class Player;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class DecoratedPotBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    DecoratedPotBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemInstance asItemInstance(::Block const& blockActor, ::BlockActor const*) const /*override*/;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const&) const /*override*/;

    virtual bool canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const /*override*/;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const&, uchar) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DecoratedPotBlock(::std::string const& name, int id);

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::CompoundTag>
    getItemInstanceUserData(::gsl::not_null<::DecoratedPotBlockActor const*> pot);

    MCAPI static ::std::vector<::ItemStack> getSherdItems(::DecoratedPotBlockActor const& decoratedPotBlockActor);

    MCAPI static bool isShatteringItem(::ItemStack const& item);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemInstance $asItemInstance(::Block const& blockActor, ::BlockActor const*) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const&) const;

    MCFOLD bool $canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const;

    MCFOLD bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const&, uchar) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
