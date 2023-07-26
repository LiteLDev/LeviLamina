#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedClientNetId.h"
#include "mc/network/TypedServerNetId.h"
#include "mc/world/item/ItemStackBase.h"

class ItemStack : public ::ItemStackBase {

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?reinit\@ItemStack\@\@UEAAXAEBVItem\@\@HH\@Z
     */
    virtual void reinit(class Item const&, int, int); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?reinit\@ItemStack\@\@UEAAXAEBVBlockLegacy\@\@H\@Z
     */
    virtual void reinit(class BlockLegacy const&, int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?reinit\@ItemStack\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HH\@Z
     */
    virtual void reinit(class std::basic_string_view<char, struct std::char_traits<char>>, int, int); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?setNull\@ItemStack\@\@UEAAXV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    virtual void setNull(class std::optional<std::string>); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?toString\@ItemStack\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?toDebugString\@ItemStack\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toDebugString() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemStack(); // NOLINT
#endif
    /**
     * @symbol ??0ItemStack\@\@QEAA\@AEBVRecipeIngredient\@\@\@Z
     */
    MCAPI ItemStack(class RecipeIngredient const&); // NOLINT
    /**
     * @symbol ??0ItemStack\@\@QEAA\@AEBVItemInstance\@\@\@Z
     */
    MCAPI ItemStack(class ItemInstance const&); // NOLINT
    /**
     * @symbol ??0ItemStack\@\@QEAA\@XZ
     */
    MCAPI ItemStack(); // NOLINT
    /**
     * @symbol ??0ItemStack\@\@QEAA\@AEBVItem\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStack(class Item const&, int, int, class CompoundTag const*); // NOLINT
    /**
     * @symbol ??0ItemStack\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI
    ItemStack(class std::basic_string_view<char, struct std::char_traits<char>>, int, int, class CompoundTag const*); // NOLINT
    /**
     * @symbol ??0ItemStack\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemStack(class ItemStack const&); // NOLINT
    /**
     * @symbol ??0ItemStack\@\@QEAA\@AEBVBlock\@\@HPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStack(class Block const&, int, class CompoundTag const*); // NOLINT
    /**
     * @symbol ??0ItemStack\@\@QEAA\@AEBVBlockLegacy\@\@H\@Z
     */
    MCAPI ItemStack(class BlockLegacy const&, int); // NOLINT
    /**
     * @symbol ?_assignNetIdVariant\@ItemStack\@\@QEBAXAEBV1\@\@Z
     */
    MCAPI void _assignNetIdVariant(class ItemStack const&) const; // NOLINT
    /**
     * @symbol
     * ?clientInitLegacyRequestId\@ItemStack\@\@QEAAXAEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI void
    clientInitLegacyRequestId(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const&); // NOLINT
    /**
     * @symbol ?clone\@ItemStack\@\@QEBA?AV1\@XZ
     */
    MCAPI class ItemStack clone() const; // NOLINT
    /**
     * @symbol ?getDestroySpeed\@ItemStack\@\@QEBAMAEBVBlock\@\@\@Z
     */
    MCAPI float getDestroySpeed(class Block const&) const; // NOLINT
    /**
     * @symbol ?getItemStackNetIdVariant\@ItemStack\@\@QEBAAEBUItemStackNetIdVariant\@\@XZ
     */
    MCAPI struct ItemStackNetIdVariant const& getItemStackNetIdVariant() const; // NOLINT
    /**
     * @symbol ?getMaxUseDuration\@ItemStack\@\@QEBAHXZ
     */
    MCAPI int getMaxUseDuration() const; // NOLINT
    /**
     * @symbol ?getStrippedNetworkItem\@ItemStack\@\@QEBA?AV1\@XZ
     */
    MCAPI class ItemStack getStrippedNetworkItem() const; // NOLINT
    /**
     * @symbol ?hasItemStackNetId\@ItemStack\@\@QEBA_NXZ
     */
    MCAPI bool hasItemStackNetId() const; // NOLINT
    /**
     * @symbol ?inventoryTick\@ItemStack\@\@QEAA_NAEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    MCAPI bool inventoryTick(class Level&, class Actor&, int, bool); // NOLINT
    /**
     * @symbol ?matchesAndNetIdVariantMatches\@ItemStack\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matchesAndNetIdVariantMatches(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?matchesNetIdVariant\@ItemStack\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matchesNetIdVariant(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?mineBlock\@ItemStack\@\@QEAAXAEBVBlock\@\@HHHPEAVMob\@\@\@Z
     */
    MCAPI void mineBlock(class Block const&, int, int, int, class Mob*); // NOLINT
    /**
     * @symbol ??4ItemStack\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemStack& operator=(class ItemStack const&); // NOLINT
    /**
     * @symbol ?playSoundIncrementally\@ItemStack\@\@QEBAXAEAVMob\@\@\@Z
     */
    MCAPI void playSoundIncrementally(class Mob&) const; // NOLINT
    /**
     * @symbol ?releaseUsing\@ItemStack\@\@QEAAXPEAVPlayer\@\@H\@Z
     */
    MCAPI void releaseUsing(class Player*, int); // NOLINT
    /**
     * @symbol ?sameItemAndAuxAndBlockData\@ItemStack\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool sameItemAndAuxAndBlockData(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?serverInitNetId\@ItemStack\@\@QEAAXXZ
     */
    MCAPI void serverInitNetId(); // NOLINT
    /**
     * @symbol ?tryGetItemStackNetId\@ItemStack\@\@QEBAPEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const* tryGetItemStackNetId() const; // NOLINT
    /**
     * @symbol ?use\@ItemStack\@\@QEAAAEAV1\@AEAVPlayer\@\@\@Z
     */
    MCAPI class ItemStack& use(class Player&); // NOLINT
    /**
     * @symbol ?useAsFuel\@ItemStack\@\@QEAAXXZ
     */
    MCAPI void useAsFuel(); // NOLINT
    /**
     * @symbol ?useOn\@ItemStack\@\@QEAA?AVInteractionResult\@\@AEAVActor\@\@HHHEAEBVVec3\@\@\@Z
     */
    MCAPI class InteractionResult useOn(class Actor&, int, int, int, unsigned char, class Vec3 const&); // NOLINT
    /**
     * @symbol ?useTimeDepleted\@ItemStack\@\@QEAA?AW4ItemUseMethod\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI enum class ItemUseMethod useTimeDepleted(class Level*, class Player*); // NOLINT
    /**
     * @symbol ?fromDescriptor\@ItemStack\@\@SA?AV1\@AEBVNetworkItemStackDescriptor\@\@AEAVBlockPalette\@\@_N\@Z
     */
    MCAPI static class ItemStack
    fromDescriptor(class NetworkItemStackDescriptor const&, class BlockPalette&, bool); // NOLINT
    /**
     * @symbol ?fromTag\@ItemStack\@\@SA?AV1\@AEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static class ItemStack fromTag(class CompoundTag const&, class Level&); // NOLINT
    /**
     * @symbol ?fromTag\@ItemStack\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class ItemStack fromTag(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?EMPTY_ITEM\@ItemStack\@\@2V1\@B
     */
    MCAPI static class ItemStack const EMPTY_ITEM; // NOLINT
};
