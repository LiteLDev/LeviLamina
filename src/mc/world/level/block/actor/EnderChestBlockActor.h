#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/ChestBlockActor.h"

class EnderChestBlockActor : public ::ChestBlockActor {
public:
    // prevent constructor by default
    EnderChestBlockActor& operator=(EnderChestBlockActor const&);
    EnderChestBlockActor(EnderChestBlockActor const&);
    EnderChestBlockActor();

public:
    // NOLINTBEGIN
    // symbol: ?canPullOutItem@EnderChestBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const;

    // symbol: ?canPushInItem@EnderChestBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;

    // symbol: ?getName@EnderChestBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?playCloseSound@EnderChestBlockActor@@MEAAXAEAVBlockSource@@@Z
    MCVAPI void playCloseSound(class BlockSource& region);

    // symbol: ?playOpenSound@EnderChestBlockActor@@MEAAXAEAVBlockSource@@@Z
    MCVAPI void playOpenSound(class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ITEMS_SIZE@EnderChestBlockActor@@0HB
    MCAPI static int const ITEMS_SIZE;

    // NOLINTEND
};
