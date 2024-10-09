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
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource&);

    MCVAPI bool canPushInItem(int slot, int, class ItemStack const& item) const;

    MCVAPI std::string getName() const;

    MCVAPI bool isSlotDisabled(int slot) const;

    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void tick(class BlockSource& region);

    MCAPI explicit CrafterBlockActor(class BlockPos pos);

    MCAPI int getDisabledSlotsCount() const;

    MCAPI void onDisabledSlotToggleRequested(class BlockSource& region, int slot, bool shouldDisable);

    MCAPI void setToCraftingVisualState(class BlockSource& region);

    MCAPI bool tryMoveItemsIntoContainer(class BlockSource& region, std::vector<class ItemInstance>& items);

    MCAPI static std::vector<class ItemInstance>
    getCraftableItem(class CraftingContainer& craftingGrid, class Level& level);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<class Recipe const*>
    _getRecipesForCraftingGrid(class Level& level, class CraftingContainer& craftingContainer);

    // NOLINTEND
};
