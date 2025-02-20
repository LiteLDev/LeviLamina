#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ItemStack;
class Player;
// clang-format on

class EnderChestBlockActor : public ::ChestBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnderChestBlockActor() /*override*/ = default;

    // vIndex: 48
    virtual void openBy(::Player& p) /*override*/;

    // vIndex: 26
    virtual ::std::string getName() const /*override*/;

    // vIndex: 29
    virtual bool canPushInItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 30
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 49
    virtual void playOpenSound(::BlockSource& region) /*override*/;

    // vIndex: 50
    virtual void playCloseSound(::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $openBy(::Player& p);

    MCAPI ::std::string $getName() const;

    MCFOLD bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCFOLD bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCAPI void $playOpenSound(::BlockSource& region);

    MCAPI void $playCloseSound(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForFillingContainer();

    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
