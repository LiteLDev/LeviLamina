/**
 * @file  MC/MerchantRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MerchantRecipe.
 *
 */
class MerchantRecipe {

#define AFTER_EXTRA
// Add Member There

    ItemInstance mBuyA;      //0
    ItemInstance mBuyB;      //136
    ItemInstance mSell;      //272
    int mTier;               //408
    int mUses;               //412
    int mMaxUses;            //416
    int mTraderExp;          //420
    int mRewardExp;          //424
    int mDemand;             //428
    int mBuyCountA;          //432
    int mBuyCountB;          //436
    float mPriceMultiplierA; //440
    float mPriceMultiplierB; //444
    TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> mRecipeNetId; //448
public:
    inline TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> getRecipeNetId()
    {
        return mRecipeNetId;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MERCHANTRECIPE
public:
    class MerchantRecipe& operator=(class MerchantRecipe const &) = delete;
    MerchantRecipe() = delete;
#endif

public:
    /**
     * @hash   132598070
     * @symbol ??0MerchantRecipe@@QEAA@AEBVItemInstance@@0@Z
     */
    MCAPI MerchantRecipe(class ItemInstance const &, class ItemInstance const &);
    /**
     * @hash   1818992743
     * @symbol ??0MerchantRecipe@@QEAA@AEBVItemInstance@@00@Z
     */
    MCAPI MerchantRecipe(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    /**
     * @hash   -1949279390
     * @symbol ??0MerchantRecipe@@QEAA@PEBVCompoundTag@@@Z
     */
    MCAPI MerchantRecipe(class CompoundTag const *);
    /**
     * @hash   45100705
     * @symbol ??0MerchantRecipe@@QEAA@AEBV0@@Z
     */
    MCAPI MerchantRecipe(class MerchantRecipe const &);
    /**
     * @hash   1258601965
     * @symbol ?calculateDemandPrices@MerchantRecipe@@QEAAXHHH_N@Z
     */
    MCAPI void calculateDemandPrices(int, int, int, bool);
    /**
     * @hash   -193745705
     * @symbol ?createTag@MerchantRecipe@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag(bool) const;
    /**
     * @hash   166684710
     * @symbol ?getBaseCountA@MerchantRecipe@@QEBAHXZ
     */
    MCAPI int getBaseCountA() const;
    /**
     * @hash   308348182
     * @symbol ?getBaseCountB@MerchantRecipe@@QEBAHXZ
     */
    MCAPI int getBaseCountB() const;
    /**
     * @hash   -1293277608
     * @symbol ?getBuyAItem@MerchantRecipe@@QEBAAEBVItemInstance@@XZ
     */
    MCAPI class ItemInstance const & getBuyAItem() const;
    /**
     * @hash   -797675606
     * @symbol ?getBuyBItem@MerchantRecipe@@QEBAAEBVItemInstance@@XZ
     */
    MCAPI class ItemInstance const & getBuyBItem() const;
    /**
     * @hash   2047957670
     * @symbol ?getDemand@MerchantRecipe@@QEBAHXZ
     */
    MCAPI int getDemand() const;
    /**
     * @hash   1532903640
     * @symbol ?getMaxUses@MerchantRecipe@@QEBAHXZ
     */
    MCAPI int getMaxUses() const;
    /**
     * @hash   789864719
     * @symbol ?getNetId@MerchantRecipe@@QEBAAEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@XZ
     */
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const & getNetId() const;
    /**
     * @hash   1380230150
     * @symbol ?getSellItem@MerchantRecipe@@QEBAAEBVItemInstance@@XZ
     */
    MCAPI class ItemInstance const & getSellItem() const;
    /**
     * @hash   1977586822
     * @symbol ?getTier@MerchantRecipe@@QEBAHXZ
     */
    MCAPI int getTier() const;
    /**
     * @hash   -337555326
     * @symbol ?getTraderExp@MerchantRecipe@@QEBAIXZ
     */
    MCAPI unsigned int getTraderExp() const;
    /**
     * @hash   -2111757594
     * @symbol ?getUses@MerchantRecipe@@QEBAHXZ
     */
    MCAPI int getUses() const;
    /**
     * @hash   -865162590
     * @symbol ?hasSecondaryBuyItem@MerchantRecipe@@QEBA_NXZ
     */
    MCAPI bool hasSecondaryBuyItem() const;
    /**
     * @hash   -701928664
     * @symbol ?increaseMaxUses@MerchantRecipe@@QEAAXH@Z
     */
    MCAPI void increaseMaxUses(int);
    /**
     * @hash   -336547531
     * @symbol ?increaseUses@MerchantRecipe@@QEAAXXZ
     */
    MCAPI void increaseUses();
    /**
     * @hash   1044625142
     * @symbol ?init@MerchantRecipe@@QEAAXAEBVItemInstance@@00@Z
     */
    MCAPI void init(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    /**
     * @hash   -311421454
     * @symbol ?isOutOfUses@MerchantRecipe@@QEBA_NXZ
     */
    MCAPI bool isOutOfUses() const;
    /**
     * @hash   -1941597462
     * @symbol ?isSame@MerchantRecipe@@QEBA_NAEBV1@@Z
     */
    MCAPI bool isSame(class MerchantRecipe const &) const;
    /**
     * @hash   -1428285890
     * @symbol ?isSameButBetter@MerchantRecipe@@QEBA_NAEAV1@@Z
     */
    MCAPI bool isSameButBetter(class MerchantRecipe &) const;
    /**
     * @hash   2138904283
     * @symbol ?legacyCalculateDemandPrices@MerchantRecipe@@QEAAXHH@Z
     */
    MCAPI void legacyCalculateDemandPrices(int, int);
    /**
     * @hash   -1622167329
     * @symbol ?load@MerchantRecipe@@QEAAXPEBVCompoundTag@@@Z
     */
    MCAPI void load(class CompoundTag const *);
    /**
     * @hash   739362008
     * @symbol ?setDemand@MerchantRecipe@@QEAAXH@Z
     */
    MCAPI void setDemand(int);
    /**
     * @hash   -1375238842
     * @symbol ?setMaxUses@MerchantRecipe@@QEAAXH@Z
     */
    MCAPI void setMaxUses(int);
    /**
     * @hash   1267296605
     * @symbol ?setNetId@MerchantRecipe@@QEAAXAEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
     */
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @hash   822417782
     * @symbol ?setPriceMultiplierA@MerchantRecipe@@QEAAXM@Z
     */
    MCAPI void setPriceMultiplierA(float);
    /**
     * @hash   1812676326
     * @symbol ?setPriceMultiplierB@MerchantRecipe@@QEAAXM@Z
     */
    MCAPI void setPriceMultiplierB(float);
    /**
     * @hash   -1271925902
     * @symbol ?setRewardExp@MerchantRecipe@@QEAAX_N@Z
     */
    MCAPI void setRewardExp(bool);
    /**
     * @hash   2094744232
     * @symbol ?setTier@MerchantRecipe@@QEAAXH@Z
     */
    MCAPI void setTier(int);
    /**
     * @hash   1703000480
     * @symbol ?setTraderExp@MerchantRecipe@@QEAAXI@Z
     */
    MCAPI void setTraderExp(unsigned int);
    /**
     * @hash   -121803640
     * @symbol ?setUses@MerchantRecipe@@QEAAXH@Z
     */
    MCAPI void setUses(int);
    /**
     * @hash   -2020737110
     * @symbol ?shouldRewardExp@MerchantRecipe@@QEBA_NXZ
     */
    MCAPI bool shouldRewardExp() const;
    /**
     * @hash   -1838503536
     * @symbol ??1MerchantRecipe@@QEAA@XZ
     */
    MCAPI ~MerchantRecipe();

};