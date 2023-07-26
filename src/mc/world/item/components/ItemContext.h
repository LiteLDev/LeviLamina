#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemContext {

public:
    // prevent constructor by default
    ItemContext& operator=(ItemContext const&) = delete;
    ItemContext(ItemContext const&)            = delete;
    ItemContext()                              = delete;

public:
    /**
     * @symbol ??0ItemContext\@\@QEAA\@AEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI ItemContext(class BlockSource&, class BlockPos const&, int); // NOLINT
    /**
     * @symbol ??0ItemContext\@\@QEAA\@AEBVWeakEntityRef\@\@W4EquipmentSlot\@\@\@Z
     */
    MCAPI ItemContext(class WeakEntityRef const&, enum class EquipmentSlot); // NOLINT
    /**
     * @symbol ??0ItemContext\@\@QEAA\@AEBVWeakEntityRef\@\@H\@Z
     */
    MCAPI ItemContext(class WeakEntityRef const&, int); // NOLINT
    /**
     * @symbol ?getAmount\@ItemContext\@\@QEBA?AV?$optional\@H\@std\@\@XZ
     */
    MCAPI class std::optional<int> getAmount() const; // NOLINT
    /**
     * @symbol
     * ?getId\@ItemContext\@\@QEBA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::string> getId() const; // NOLINT
    /**
     * @symbol ?getItem\@ItemContext\@\@QEBA?AV?$optional\@VItemStack\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class ItemStack> getItem() const; // NOLINT
    /**
     * @symbol ?getKeepOnDeath\@ItemContext\@\@QEBA?AV?$optional\@_N\@std\@\@XZ
     */
    MCAPI class std::optional<bool> getKeepOnDeath() const; // NOLINT
    /**
     * @symbol ?getLockMode\@ItemContext\@\@QEBA?AV?$optional\@W4ItemLockMode\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<enum class ItemLockMode> getLockMode() const; // NOLINT
    /**
     * @symbol
     * ?getLore\@ItemContext\@\@QEBA?AV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::vector<std::string>> getLore() const; // NOLINT
    /**
     * @symbol ?getMaxAmount\@ItemContext\@\@QEBA?AV?$optional\@H\@std\@\@XZ
     */
    MCAPI class std::optional<int> getMaxAmount() const; // NOLINT
    /**
     * @symbol
     * ?getNameTag\@ItemContext\@\@QEBA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::string> getNameTag() const; // NOLINT
    /**
     * @symbol
     * ?getTags\@ItemContext\@\@QEBA?AV?$optional\@V?$vector\@UItemTag\@\@V?$allocator\@UItemTag\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::vector<struct ItemTag>> getTags() const; // NOLINT
    /**
     * @symbol ?hasTag\@ItemContext\@\@QEBA?AV?$optional\@_N\@std\@\@AEBUItemTag\@\@\@Z
     */
    MCAPI class std::optional<bool> hasTag(struct ItemTag const&) const; // NOLINT
    /**
     * @symbol ?isStackable\@ItemContext\@\@QEBA?AV?$optional\@_N\@std\@\@XZ
     */
    MCAPI class std::optional<bool> isStackable() const; // NOLINT
    /**
     * @symbol ?isStackableWith\@ItemContext\@\@QEBA?AV?$optional\@_N\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI class std::optional<bool> isStackableWith(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?isValid\@ItemContext\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ?setAmount\@ItemContext\@\@QEAA_NH\@Z
     */
    MCAPI bool setAmount(int); // NOLINT
    /**
     * @symbol
     * ?setCanDestroy\@ItemContext\@\@QEAA?AV?$optional\@_N\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<bool> setCanDestroy(std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?setCanPlaceOn\@ItemContext\@\@QEAA?AV?$optional\@_N\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<bool> setCanPlaceOn(std::vector<std::string> const&); // NOLINT
    /**
     * @symbol ?setItem\@ItemContext\@\@QEAA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool setItem(class ItemStack const&); // NOLINT
    /**
     * @symbol ?setKeepOnDeath\@ItemContext\@\@QEAA_N_N\@Z
     */
    MCAPI bool setKeepOnDeath(bool); // NOLINT
    /**
     * @symbol ?setLockMode\@ItemContext\@\@QEAA_NW4ItemLockMode\@\@\@Z
     */
    MCAPI bool setLockMode(enum class ItemLockMode); // NOLINT
    /**
     * @symbol
     * ?setLore\@ItemContext\@\@QEAA_NAEBV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool setLore(class std::optional<std::vector<std::string>> const&); // NOLINT
    /**
     * @symbol
     * ?setNameTag\@ItemContext\@\@QEAA_NV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool setNameTag(class std::optional<std::string>); // NOLINT
    /**
     * @symbol ??1ItemContext\@\@QEAA\@XZ
     */
    MCAPI ~ItemContext(); // NOLINT
    /**
     * @symbol ?setEquipment\@ItemContext\@\@SAXAEBVItemStack\@\@W4EquipmentSlot\@\@AEAVMob\@\@\@Z
     */
    MCAPI static void setEquipment(class ItemStack const&, enum class EquipmentSlot, class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_getItem\@ItemContext\@\@AEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& _getItem() const; // NOLINT
    /**
     * @symbol ?_setItem\@ItemContext\@\@AEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _setItem(class ItemStack const&); // NOLINT
    /**
     * @symbol ?_tryGetChestContainer\@ItemContext\@\@AEBAPEAVContainer\@\@XZ
     */
    MCAPI class Container* _tryGetChestContainer() const; // NOLINT
    /**
     * @symbol ?_tryGetContainerFromEntity\@ItemContext\@\@AEBAPEAVContainer\@\@XZ
     */
    MCAPI class Container* _tryGetContainerFromEntity() const; // NOLINT

private:
};
