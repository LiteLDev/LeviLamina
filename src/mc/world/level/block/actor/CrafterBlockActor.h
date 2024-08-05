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

    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;

    MCVAPI std::string getName() const;

    MCVAPI bool isSlotDisabled(int) const;

    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    MCVAPI bool save(class CompoundTag&) const;

    MCVAPI void tick(class BlockSource&);

    MCAPI explicit CrafterBlockActor(class BlockPos);

    MCAPI int getDisabledSlotsCount() const;

    MCAPI void onDisabledSlotToggleRequested(class BlockSource&, int, bool);

    MCAPI void setToCraftingVisualState(class BlockSource&);

    MCAPI bool tryMoveItemsIntoContainer(class BlockSource&, std::vector<class ItemInstance>&);

    MCAPI static std::vector<class ItemInstance> getCraftableItem(class CraftingContainer&, class Level&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<class Recipe const*> _getRecipesForCraftingGrid(class Level&, class CraftingContainer&);

    // NOLINTEND
};
