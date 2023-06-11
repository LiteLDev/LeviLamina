/**
 * @file  ItemContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ItemContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCONTEXT
public:
    class ItemContext& operator=(class ItemContext const &) = delete;
    ItemContext(class ItemContext const &) = delete;
    ItemContext() = delete;
#endif

public:
    /**
     * @symbol ??0ItemContext\@\@QEAA\@AEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI ItemContext(class BlockSource &, class BlockPos const &, int);
    /**
     * @symbol ??0ItemContext\@\@QEAA\@AEBVWeakEntityRef\@\@W4EquipmentSlot\@\@\@Z
     */
    MCAPI ItemContext(class WeakEntityRef const &, enum class EquipmentSlot);
    /**
     * @symbol ??0ItemContext\@\@QEAA\@AEBVWeakEntityRef\@\@H\@Z
     */
    MCAPI ItemContext(class WeakEntityRef const &, int);
    /**
     * @symbol ?clone\@ItemContext\@\@QEBA?AV?$optional\@VItemStack\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class ItemStack> clone() const;
    /**
     * @symbol ?getAmount\@ItemContext\@\@QEBA?AV?$optional\@H\@std\@\@XZ
     */
    MCAPI class std::optional<int> getAmount() const;
    /**
     * @symbol ?getId\@ItemContext\@\@QEBA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::string> getId() const;
    /**
     * @symbol ?getItem\@ItemContext\@\@QEBA?AV?$optional\@VItemStack\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class ItemStack> getItem() const;
    /**
     * @symbol ?getKeepOnDeath\@ItemContext\@\@QEBA?AV?$optional\@_N\@std\@\@XZ
     */
    MCAPI class std::optional<bool> getKeepOnDeath() const;
    /**
     * @symbol ?getLockMode\@ItemContext\@\@QEBA?AV?$optional\@W4ItemLockMode\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<enum class ItemLockMode> getLockMode() const;
    /**
     * @symbol ?getLore\@ItemContext\@\@QEBA?AV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::vector<std::string>> getLore() const;
    /**
     * @symbol ?getMaxAmount\@ItemContext\@\@QEBA?AV?$optional\@H\@std\@\@XZ
     */
    MCAPI class std::optional<int> getMaxAmount() const;
    /**
     * @symbol ?getNameTag\@ItemContext\@\@QEBA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::string> getNameTag() const;
    /**
     * @symbol ?getTags\@ItemContext\@\@QEBA?AV?$optional\@V?$vector\@UItemTag\@\@V?$allocator\@UItemTag\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::vector<struct ItemTag>> getTags() const;
    /**
     * @symbol ?hasTag\@ItemContext\@\@QEBA?AV?$optional\@_N\@std\@\@AEBUItemTag\@\@\@Z
     */
    MCAPI class std::optional<bool> hasTag(struct ItemTag const &) const;
    /**
     * @symbol ?isStackable\@ItemContext\@\@QEBA?AV?$optional\@_N\@std\@\@XZ
     */
    MCAPI class std::optional<bool> isStackable() const;
    /**
     * @symbol ?isStackableWith\@ItemContext\@\@QEBA?AV?$optional\@_N\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI class std::optional<bool> isStackableWith(class ItemStackBase const &) const;
    /**
     * @symbol ?isValid\@ItemContext\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?setAmount\@ItemContext\@\@QEAA_NH\@Z
     */
    MCAPI bool setAmount(int);
    /**
     * @symbol ?setCanDestroy\@ItemContext\@\@QEAA?AV?$optional\@_N\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<bool> setCanDestroy(std::vector<std::string> const &);
    /**
     * @symbol ?setCanPlaceOn\@ItemContext\@\@QEAA?AV?$optional\@_N\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<bool> setCanPlaceOn(std::vector<std::string> const &);
    /**
     * @symbol ?setItem\@ItemContext\@\@QEAA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool setItem(class ItemStack const &);
    /**
     * @symbol ?setKeepOnDeath\@ItemContext\@\@QEAA_N_N\@Z
     */
    MCAPI bool setKeepOnDeath(bool);
    /**
     * @symbol ?setLockMode\@ItemContext\@\@QEAA_NW4ItemLockMode\@\@\@Z
     */
    MCAPI bool setLockMode(enum class ItemLockMode);
    /**
     * @symbol ?setLore\@ItemContext\@\@QEAA_NAEBV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool setLore(class std::optional<std::vector<std::string>> const &);
    /**
     * @symbol ?setNameTag\@ItemContext\@\@QEAA_NV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool setNameTag(class std::optional<std::string>);
    /**
     * @symbol ??1ItemContext\@\@QEAA\@XZ
     */
    MCAPI ~ItemContext();
    /**
     * @symbol ?setEquipment\@ItemContext\@\@SAXAEBVItemStack\@\@W4EquipmentSlot\@\@AEAVMob\@\@\@Z
     */
    MCAPI static void setEquipment(class ItemStack const &, enum class EquipmentSlot, class Mob &);

//private:
    /**
     * @symbol ?_getItem\@ItemContext\@\@AEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & _getItem() const;
    /**
     * @symbol ?_setItem\@ItemContext\@\@AEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _setItem(class ItemStack const &);
    /**
     * @symbol ?_tryGetChestContainer\@ItemContext\@\@AEBAPEAVContainer\@\@XZ
     */
    MCAPI class Container * _tryGetChestContainer() const;
    /**
     * @symbol ?_tryGetContainerFromEntity\@ItemContext\@\@AEBAPEAVContainer\@\@XZ
     */
    MCAPI class Container * _tryGetContainerFromEntity() const;

private:

};
