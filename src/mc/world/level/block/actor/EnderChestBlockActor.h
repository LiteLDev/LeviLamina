#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemStack;
class Player;
// clang-format on

class EnderChestBlockActor : public ::ChestBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnderChestBlockActor() /*override*/ = default;

    virtual void openBy(::Player& p) /*override*/;

    virtual bool canPushInItem(int, int, ::ItemStack const&) const /*override*/;

    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::unique_ptr<::EnderChestBlockActor> createEnderChestBlockEntity(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $openBy(::Player& p);

    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForFillingContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
