#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MerchantRecipe {

public:
    // prevent constructor by default
    MerchantRecipe() = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0MerchantRecipe\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MerchantRecipe(class MerchantRecipe const&);
    /**
     * @symbol ??0MerchantRecipe\@\@QEAA\@AEBVItemInstance\@\@0\@Z
     */
    MCAPI MerchantRecipe(class ItemInstance const&, class ItemInstance const&);
    /**
     * @symbol ??0MerchantRecipe\@\@QEAA\@AEBVItemInstance\@\@00\@Z
     */
    MCAPI MerchantRecipe(class ItemInstance const&, class ItemInstance const&, class ItemInstance const&);
    /**
     * @symbol ?calculateDemandPrices\@MerchantRecipe\@\@QEAAXHHH_N\@Z
     */
    MCAPI void calculateDemandPrices(int32_t, int32_t, int32_t, bool);
    /**
     * @symbol
     * ?createTag\@MerchantRecipe\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag(bool) const;
    /**
     * @symbol ?getBaseCountA\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int32_t getBaseCountA() const;
    /**
     * @symbol ?getBaseCountB\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int32_t getBaseCountB() const;
    /**
     * @symbol ?getBuyAItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getBuyAItem() const;
    /**
     * @symbol ?getBuyBItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getBuyBItem() const;
    /**
     * @symbol ?getDemand\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int32_t getDemand() const;
    /**
     * @symbol ?getMaxUses\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int32_t getMaxUses() const;
    /**
     * @symbol ?getSellItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getSellItem() const;
    /**
     * @symbol ?getTier\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int32_t getTier() const;
    /**
     * @symbol ?getTraderExp\@MerchantRecipe\@\@QEBAIXZ
     */
    MCAPI uint32_t getTraderExp() const;
    /**
     * @symbol ?getUses\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int32_t getUses() const;
    /**
     * @symbol ?hasSecondaryBuyItem\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool hasSecondaryBuyItem() const;
    /**
     * @symbol ?increaseMaxUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void increaseMaxUses(int32_t);
    /**
     * @symbol ?increaseUses\@MerchantRecipe\@\@QEAAXXZ
     */
    MCAPI void increaseUses();
    /**
     * @symbol ?init\@MerchantRecipe\@\@QEAAXAEBVItemInstance\@\@00\@Z
     */
    MCAPI void init(class ItemInstance const&, class ItemInstance const&, class ItemInstance const&);
    /**
     * @symbol ?isOutOfUses\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool isOutOfUses() const;
    /**
     * @symbol ?isSame\@MerchantRecipe\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isSame(class MerchantRecipe const&) const;
    /**
     * @symbol ?legacyCalculateDemandPrices\@MerchantRecipe\@\@QEAAXHH\@Z
     */
    MCAPI void legacyCalculateDemandPrices(int32_t, int32_t);
    /**
     * @symbol ?load\@MerchantRecipe\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const*);
    /**
     * @symbol ??4MerchantRecipe\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class MerchantRecipe& operator=(class MerchantRecipe const&);
    /**
     * @symbol ?setDemand\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setDemand(int32_t);
    /**
     * @symbol ?setMaxUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setMaxUses(int32_t);
    /**
     * @symbol ?setPriceMultiplierA\@MerchantRecipe\@\@QEAAXM\@Z
     */
    MCAPI void setPriceMultiplierA(float);
    /**
     * @symbol ?setPriceMultiplierB\@MerchantRecipe\@\@QEAAXM\@Z
     */
    MCAPI void setPriceMultiplierB(float);
    /**
     * @symbol ?setRewardExp\@MerchantRecipe\@\@QEAAX_N\@Z
     */
    MCAPI void setRewardExp(bool);
    /**
     * @symbol ?setTier\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setTier(int32_t);
    /**
     * @symbol ?setTraderExp\@MerchantRecipe\@\@QEAAXI\@Z
     */
    MCAPI void setTraderExp(uint32_t);
    /**
     * @symbol ?setUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setUses(int32_t);
    /**
     * @symbol ?shouldRewardExp\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool shouldRewardExp() const;
    /**
     * @symbol ??1MerchantRecipe\@\@QEAA\@XZ
     */
    MCAPI ~MerchantRecipe();
    // NOLINTEND
};
