#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MerchantRecipe {

public:
    // prevent constructor by default
    MerchantRecipe() = delete;

public:
    /**
     * @symbol ??0MerchantRecipe\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MerchantRecipe(class MerchantRecipe const&); // NOLINT
    /**
     * @symbol ??0MerchantRecipe\@\@QEAA\@AEBVItemInstance\@\@00\@Z
     */
    MCAPI MerchantRecipe(class ItemInstance const&, class ItemInstance const&, class ItemInstance const&); // NOLINT
    /**
     * @symbol ??0MerchantRecipe\@\@QEAA\@AEBVItemInstance\@\@0\@Z
     */
    MCAPI MerchantRecipe(class ItemInstance const&, class ItemInstance const&); // NOLINT
    /**
     * @symbol ?calculateDemandPrices\@MerchantRecipe\@\@QEAAXHHH_N\@Z
     */
    MCAPI void calculateDemandPrices(int, int, int, bool); // NOLINT
    /**
     * @symbol
     * ?createTag\@MerchantRecipe\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag(bool) const; // NOLINT
    /**
     * @symbol ?getBaseCountA\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getBaseCountA() const; // NOLINT
    /**
     * @symbol ?getBaseCountB\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getBaseCountB() const; // NOLINT
    /**
     * @symbol ?getBuyAItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getBuyAItem() const; // NOLINT
    /**
     * @symbol ?getBuyBItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getBuyBItem() const; // NOLINT
    /**
     * @symbol ?getDemand\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getDemand() const; // NOLINT
    /**
     * @symbol ?getMaxUses\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getMaxUses() const; // NOLINT
    /**
     * @symbol ?getSellItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getSellItem() const; // NOLINT
    /**
     * @symbol ?getTier\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getTier() const; // NOLINT
    /**
     * @symbol ?getTraderExp\@MerchantRecipe\@\@QEBAIXZ
     */
    MCAPI unsigned int getTraderExp() const; // NOLINT
    /**
     * @symbol ?getUses\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getUses() const; // NOLINT
    /**
     * @symbol ?hasSecondaryBuyItem\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool hasSecondaryBuyItem() const; // NOLINT
    /**
     * @symbol ?increaseMaxUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void increaseMaxUses(int); // NOLINT
    /**
     * @symbol ?increaseUses\@MerchantRecipe\@\@QEAAXXZ
     */
    MCAPI void increaseUses(); // NOLINT
    /**
     * @symbol ?init\@MerchantRecipe\@\@QEAAXAEBVItemInstance\@\@00\@Z
     */
    MCAPI void init(class ItemInstance const&, class ItemInstance const&, class ItemInstance const&); // NOLINT
    /**
     * @symbol ?isOutOfUses\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool isOutOfUses() const; // NOLINT
    /**
     * @symbol ?isSame\@MerchantRecipe\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isSame(class MerchantRecipe const&) const; // NOLINT
    /**
     * @symbol ?legacyCalculateDemandPrices\@MerchantRecipe\@\@QEAAXHH\@Z
     */
    MCAPI void legacyCalculateDemandPrices(int, int); // NOLINT
    /**
     * @symbol ?load\@MerchantRecipe\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const*); // NOLINT
    /**
     * @symbol ??4MerchantRecipe\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class MerchantRecipe& operator=(class MerchantRecipe const&); // NOLINT
    /**
     * @symbol ?setDemand\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setDemand(int); // NOLINT
    /**
     * @symbol ?setMaxUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setMaxUses(int); // NOLINT
    /**
     * @symbol ?setPriceMultiplierA\@MerchantRecipe\@\@QEAAXM\@Z
     */
    MCAPI void setPriceMultiplierA(float); // NOLINT
    /**
     * @symbol ?setPriceMultiplierB\@MerchantRecipe\@\@QEAAXM\@Z
     */
    MCAPI void setPriceMultiplierB(float); // NOLINT
    /**
     * @symbol ?setRewardExp\@MerchantRecipe\@\@QEAAX_N\@Z
     */
    MCAPI void setRewardExp(bool); // NOLINT
    /**
     * @symbol ?setTier\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setTier(int); // NOLINT
    /**
     * @symbol ?setTraderExp\@MerchantRecipe\@\@QEAAXI\@Z
     */
    MCAPI void setTraderExp(unsigned int); // NOLINT
    /**
     * @symbol ?setUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setUses(int); // NOLINT
    /**
     * @symbol ?shouldRewardExp\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool shouldRewardExp() const; // NOLINT
    /**
     * @symbol ??1MerchantRecipe\@\@QEAA\@XZ
     */
    MCAPI ~MerchantRecipe(); // NOLINT
};
