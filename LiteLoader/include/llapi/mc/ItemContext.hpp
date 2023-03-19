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
     * @symbol ??0ItemContext\@\@QEAA\@AEBVWeakEntityRef\@\@H\@Z
     */
    MCAPI ItemContext(class WeakEntityRef const &, int);
    /**
     * @symbol ?clone\@ItemContext\@\@QEBA?AVItemStack\@\@XZ
     */
    MCAPI class ItemStack clone() const;
    /**
     * @symbol ?getAmount\@ItemContext\@\@QEBAHXZ
     */
    MCAPI int getAmount() const;
    /**
     * @symbol ?getData\@ItemContext\@\@QEBAHXZ
     */
    MCAPI int getData() const;
    /**
     * @symbol ?getId\@ItemContext\@\@QEBA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::string> getId() const;
    /**
     * @symbol ?getItem\@ItemContext\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getItem() const;
    /**
     * @symbol ?getKeepOnDeath\@ItemContext\@\@QEBA_NXZ
     */
    MCAPI bool getKeepOnDeath() const;
    /**
     * @symbol ?getLockMode\@ItemContext\@\@QEBA?AW4ItemLockMode\@\@XZ
     */
    MCAPI enum class ItemLockMode getLockMode() const;
    /**
     * @symbol ?getLore\@ItemContext\@\@QEBA?AV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::vector<std::string>> getLore() const;
    /**
     * @symbol ?getMaxAmount\@ItemContext\@\@QEBAHXZ
     */
    MCAPI int getMaxAmount() const;
    /**
     * @symbol ?getNameTag\@ItemContext\@\@QEBA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<std::string> getNameTag() const;
    /**
     * @symbol ?isStackable\@ItemContext\@\@QEBA_NXZ
     */
    MCAPI bool isStackable() const;
    /**
     * @symbol ?isStackableWith\@ItemContext\@\@QEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI bool isStackableWith(class ItemStackBase const &) const;
    /**
     * @symbol ?isValid\@ItemContext\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?setAmount\@ItemContext\@\@QEAAXH\@Z
     */
    MCAPI void setAmount(int);
    /**
     * @symbol ?setCanDestroy\@ItemContext\@\@QEAA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI bool setCanDestroy(std::vector<std::string> const &);
    /**
     * @symbol ?setCanPlaceOn\@ItemContext\@\@QEAA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI bool setCanPlaceOn(std::vector<std::string> const &);
    /**
     * @symbol ?setData\@ItemContext\@\@QEAAXH\@Z
     */
    MCAPI void setData(int);
    /**
     * @symbol ?setItem\@ItemContext\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setItem(class ItemStack const &);
    /**
     * @symbol ?setKeepOnDeath\@ItemContext\@\@QEAAX_N\@Z
     */
    MCAPI void setKeepOnDeath(bool);
    /**
     * @symbol ?setLockMode\@ItemContext\@\@QEAAXW4ItemLockMode\@\@\@Z
     */
    MCAPI void setLockMode(enum class ItemLockMode);
    /**
     * @symbol ?setLore\@ItemContext\@\@QEAAXAEBV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setLore(class std::optional<std::vector<std::string>> const &);
    /**
     * @symbol ?setNameTag\@ItemContext\@\@QEAAXV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setNameTag(class std::optional<std::string>);
    /**
     * @symbol ??1ItemContext\@\@QEAA\@XZ
     */
    MCAPI ~ItemContext();

//private:
    /**
     * @symbol ?_tryGetContainerFromEntity\@ItemContext\@\@AEBAPEAVContainer\@\@XZ
     */
    MCAPI class Container * _tryGetContainerFromEntity() const;

private:

};
