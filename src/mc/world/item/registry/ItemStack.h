#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

// auto generated inclusion list
#include "mc/network/TypedClientNetId.h"
#include "mc/network/TypedServerNetId.h"
#include "mc/world/item/ItemStackBase.h"
#include "mc/world/item/components/ItemUseMethod.h"

class ItemStack : public ::ItemStackBase {
public:
    ItemStackNetIdVariant mNetIdVariant;

    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStack();

    // vIndex: 1
    virtual void reinit(class Item const& item, int count = 1, int auxValue = 0);

    // vIndex: 2
    virtual void reinit(class BlockLegacy const& blockLegacy, int count = 1);

    // vIndex: 3
    virtual void reinit(std::string_view name, int count = 1, int auxValue = 0);

    // vIndex: 4
    virtual void setNull(std::optional<std::string> reason);

    // vIndex: 5
    virtual std::string toString() const;

    // vIndex: 6
    virtual std::string toDebugString() const;

    MCAPI ItemStack();

    MCAPI explicit ItemStack(class ItemInstance const& rhs);

    MCAPI ItemStack(class ItemStack const& rhs);

    MCAPI explicit ItemStack(class RecipeIngredient const& ingredient);

    MCAPI ItemStack(class BlockLegacy const& blockLegacy, int count = 1);

    MCAPI ItemStack(class Block const& block, int count = 1, class CompoundTag const* userData = nullptr);

    MCAPI
    ItemStack(class Item const& item, int count = 1, int auxValue = 0, class CompoundTag const* userData = nullptr);

    MCAPI
    ItemStack(std::string_view name, int count = 1, int auxValue = 0, class CompoundTag const* userData = nullptr);

    MCAPI void _assignNetIdVariant(class ItemStack const& fromItem) const;

    MCAPI void clientInitLegacyRequestId(ItemStackLegacyRequestId const& legacyClientRequestId);

    MCAPI class ItemStack clone() const;

    MCAPI float getDestroySpeed(class Block const& block) const;

    MCAPI struct ItemStackNetIdVariant const& getItemStackNetIdVariant() const;

    MCAPI int getMaxUseDuration() const;

    MCAPI class ItemStack getStrippedNetworkItem() const;

    MCAPI bool hasItemStackNetId() const;

    MCAPI bool inventoryTick(class Level& level, class Actor& owner, int slot, bool selected);

    MCAPI bool matchesAndNetIdVariantMatches(class ItemStack const& other) const;

    MCAPI bool matchesNetIdVariant(class ItemStack const& other) const;

    MCAPI class ItemStack& operator=(class ItemStack const& rhs);

    MCAPI void playSoundIncrementally(class Mob& mob) const;

    MCAPI void releaseUsing(class Player* player, int durationLeft);

    MCAPI bool sameItemAndAuxAndBlockData(class ItemStack const& otherItemStack) const;

    MCAPI void serverInitNetId();

    MCAPI ItemStackNetId const* tryGetItemStackNetId() const;

    MCAPI class ItemStack& use(class Player& player);

    MCAPI void useAsFuel();

    MCAPI class InteractionResult
    useOn(class Actor& entity, int x, int y, int z, uchar face, class Vec3 const& clickPos);

    MCAPI ::ItemUseMethod useTimeDepleted(class Level* level, class Player* player);

    MCAPI static class ItemStack fromDescriptor(
        class NetworkItemStackDescriptor const& descriptor,
        class BlockPalette&                     blockPalette,
        bool                                    isClientSide
    );

    MCAPI static class ItemStack fromTag(class CompoundTag const& tag);

    MCAPI static class ItemStack fromTag(class CompoundTag const& tag, class Level& level);

    MCAPI static class ItemStack const EMPTY_ITEM;

    // NOLINTEND
};
