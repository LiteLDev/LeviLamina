#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

class EnderChestBlockActor : public ::ChestBlockActor {
public:
    // prevent constructor by default
    EnderChestBlockActor& operator=(EnderChestBlockActor const&);
    EnderChestBlockActor(EnderChestBlockActor const&);
    EnderChestBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const;

    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;

    MCVAPI std::string getName() const;

    MCVAPI void openBy(class Player& p);

    MCVAPI void playCloseSound(class BlockSource& region);

    MCVAPI void playOpenSound(class BlockSource& region);

    MCAPI EnderChestBlockActor(
        ::BlockActorType       type,
        std::string const&     id,
        ::BlockActorRendererId renderId,
        class BlockPos const&  pos
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForFillingContainer();

    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();

    MCAPI void*
    ctor$(::BlockActorType type, std::string const& id, ::BlockActorRendererId renderId, class BlockPos const& pos);

    MCAPI bool canPullOutItem$(int, int, class ItemStack const&) const;

    MCAPI bool canPushInItem$(int, int, class ItemStack const&) const;

    MCAPI std::string getName$() const;

    MCAPI void openBy$(class Player& p);

    MCAPI void playCloseSound$(class BlockSource& region);

    MCAPI void playOpenSound$(class BlockSource& region);

    MCAPI static int const& ITEMS_SIZE();

    // NOLINTEND
};
