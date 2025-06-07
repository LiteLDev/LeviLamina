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

    // vIndex: 49
    virtual void openBy(::Player& p) /*override*/;

    // vIndex: 27
    virtual ::std::string getName() const /*override*/;

    // vIndex: 32
    virtual bool canPushInItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 33
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 50
    virtual void playOpenSound(::BlockSource& region) /*override*/;

    // vIndex: 51
    virtual void playCloseSound(::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $openBy(::Player& p);

    MCNAPI ::std::string $getName() const;

    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCNAPI void $playOpenSound(::BlockSource& region);

    MCNAPI void $playCloseSound(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForFillingContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
