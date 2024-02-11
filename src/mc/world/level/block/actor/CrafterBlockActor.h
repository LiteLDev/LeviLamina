#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/DispenserBlockActor.h"

class CrafterBlockActor : public ::DispenserBlockActor {
public:
    // CrafterBlockActor inner types declare
    // clang-format off
    class LruCache;
    // clang-format on

    // CrafterBlockActor inner types define
    class LruCache {
    public:
        // prevent constructor by default
        LruCache& operator=(LruCache const&);
        LruCache(LruCache const&);
        LruCache();

    public:
        // NOLINTBEGIN
        // symbol: ??1LruCache@CrafterBlockActor@@QEAA@XZ
        MCAPI ~LruCache();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CrafterBlockActor& operator=(CrafterBlockActor const&);
    CrafterBlockActor(CrafterBlockActor const&);
    CrafterBlockActor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@CrafterBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // symbol: ?_onUpdatePacket@CrafterBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ?canPushInItem@CrafterBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;

    // symbol: ?getName@CrafterBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?isSlotDisabled@CrafterBlockActor@@UEBA_NH@Z
    MCVAPI bool isSlotDisabled(int) const;

    // symbol: ?load@CrafterBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // symbol: ?save@CrafterBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag&) const;

    // symbol: ?tick@CrafterBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource&);

    // symbol: ?getDisabledSlotsCount@CrafterBlockActor@@QEBAHXZ
    MCAPI int getDisabledSlotsCount() const;

    // symbol: ?onDisabledSlotToggleRequested@CrafterBlockActor@@QEAAXAEAVBlockSource@@H_N@Z
    MCAPI void onDisabledSlotToggleRequested(class BlockSource&, int, bool);

    // symbol: ?setToCraftingVisualState@CrafterBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void setToCraftingVisualState(class BlockSource&);

    // symbol:
    // ?tryMoveItemsIntoContainer@CrafterBlockActor@@QEAA_NAEAVBlockSource@@AEAV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@@Z
    MCAPI bool tryMoveItemsIntoContainer(class BlockSource&, std::vector<class ItemInstance>&);

    // symbol:
    // ?getCraftableItem@CrafterBlockActor@@SA?AV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVLevel@@@Z
    MCAPI static std::vector<class ItemInstance> getCraftableItem(class CraftingContainer&, class Level&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getRecipesForCraftingGrid@CrafterBlockActor@@CA?AV?$vector@PEBVRecipe@@V?$allocator@PEBVRecipe@@@std@@@std@@AEAVLevel@@AEAVCraftingContainer@@@Z
    MCAPI static std::vector<class Recipe const*> _getRecipesForCraftingGrid(class Level&, class CraftingContainer&);

    // NOLINTEND
};
