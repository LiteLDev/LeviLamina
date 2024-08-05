#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/ChestBlockActor.h"
#include "mc/world/level/block/utils/BlockActorRendererId.h"
#include "mc/world/level/block/utils/BlockActorType.h"

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

    MCVAPI void openBy(class Player&);

    MCVAPI void playCloseSound(class BlockSource& region);

    MCVAPI void playOpenSound(class BlockSource& region);

    MCAPI EnderChestBlockActor(
        ::BlockActorType       type,
        std::string const&     id,
        ::BlockActorRendererId renderId,
        class BlockPos const&  pos
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const ITEMS_SIZE;

    // NOLINTEND
};
