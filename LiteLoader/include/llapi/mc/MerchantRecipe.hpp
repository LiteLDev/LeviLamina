/**
 * @file  MerchantRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1077767710
     * @symbol  ??0MerchantRecipe\@\@QEAA\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI MerchantRecipe(class CompoundTag const *);
    /**
     * @hash   1004109750
     * @symbol  ??0MerchantRecipe\@\@QEAA\@AEBVItemInstance\@\@0\@Z
     */
    MCAPI MerchantRecipe(class ItemInstance const &, class ItemInstance const &);
    /**
     * @hash   -1604462873
     * @symbol  ??0MerchantRecipe\@\@QEAA\@AEBVItemInstance\@\@00\@Z
     */
    MCAPI MerchantRecipe(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    /**
     * @hash   176888401
     * @symbol  ??0MerchantRecipe\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MerchantRecipe(class MerchantRecipe const &);
    /**
     * @hash   2130113645
     * @symbol  ?calculateDemandPrices\@MerchantRecipe\@\@QEAAXHHH_N\@Z
     */
    MCAPI void calculateDemandPrices(int, int, int, bool);
    /**
     * @hash   677765975
     * @symbol  ?createTag\@MerchantRecipe\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag(bool) const;
    /**
     * @hash   39013190
     * @symbol  ?getBaseCountA\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getBaseCountA() const;
    /**
     * @hash   1165821574
     * @symbol  ?getBaseCountB\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getBaseCountB() const;
    /**
     * @hash   -1196654824
     * @symbol  ?getBuyAItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getBuyAItem() const;
    /**
     * @hash   -667240998
     * @symbol  ?getBuyBItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getBuyBItem() const;
    /**
     * @hash   -1389551610
     * @symbol  ?getDemand\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getDemand() const;
    /**
     * @hash   -1890582728
     * @symbol  ?getMaxUses\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getMaxUses() const;
    /**
     * @hash   1588325023
     * @symbol  ?getNetId\@MerchantRecipe\@\@QEBAAEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const & getNetId() const;
    /**
     * @hash   1486493686
     * @symbol  ?getSellItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getSellItem() const;
    /**
     * @hash   -1445899546
     * @symbol  ?getTier\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getTier() const;
    /**
     * @hash   533925602
     * @symbol  ?getTraderExp\@MerchantRecipe\@\@QEBAIXZ
     */
    MCAPI unsigned int getTraderExp() const;
    /**
     * @hash   -1240276666
     * @symbol  ?getUses\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getUses() const;
    /**
     * @hash   6318338
     * @symbol  ?hasSecondaryBuyItem\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool hasSecondaryBuyItem() const;
    /**
     * @hash   169552264
     * @symbol  ?increaseMaxUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void increaseMaxUses(int);
    /**
     * @hash   534933397
     * @symbol  ?increaseUses\@MerchantRecipe\@\@QEAAXXZ
     */
    MCAPI void increaseUses();
    /**
     * @hash   1916106070
     * @symbol  ?init\@MerchantRecipe\@\@QEAAXAEBVItemInstance\@\@00\@Z
     */
    MCAPI void init(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    /**
     * @hash   560059474
     * @symbol  ?isOutOfUses\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool isOutOfUses() const;
    /**
     * @hash   -1070116534
     * @symbol  ?isSame\@MerchantRecipe\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isSame(class MerchantRecipe const &) const;
    /**
     * @hash   -556804962
     * @symbol  ?isSameButBetter\@MerchantRecipe\@\@QEBA_NAEAV1\@\@Z
     */
    MCAPI bool isSameButBetter(class MerchantRecipe &) const;
    /**
     * @hash   -1284582085
     * @symbol  ?legacyCalculateDemandPrices\@MerchantRecipe\@\@QEAAXHH\@Z
     */
    MCAPI void legacyCalculateDemandPrices(int, int);
    /**
     * @hash   -750686401
     * @symbol  ?load\@MerchantRecipe\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const *);
    /**
     * @hash   1596881528
     * @symbol  ?setDemand\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setDemand(int);
    /**
     * @hash   -503711786
     * @symbol  ?setMaxUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setMaxUses(int);
    /**
     * @hash   2138823661
     * @symbol  ?setNetId\@MerchantRecipe\@\@QEAAXAEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @hash   1693944838
     * @symbol  ?setPriceMultiplierA\@MerchantRecipe\@\@QEAAXM\@Z
     */
    MCAPI void setPriceMultiplierA(float);
    /**
     * @hash   -1610763914
     * @symbol  ?setPriceMultiplierB\@MerchantRecipe\@\@QEAAXM\@Z
     */
    MCAPI void setPriceMultiplierB(float);
    /**
     * @hash   -2115068862
     * @symbol  ?setRewardExp\@MerchantRecipe\@\@QEAAX_N\@Z
     */
    MCAPI void setRewardExp(bool);
    /**
     * @hash   -1328696008
     * @symbol  ?setTier\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setTier(int);
    /**
     * @hash   -1720439760
     * @symbol  ?setTraderExp\@MerchantRecipe\@\@QEAAXI\@Z
     */
    MCAPI void setTraderExp(unsigned int);
    /**
     * @hash   749723416
     * @symbol  ?setUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setUses(int);
    /**
     * @hash   1431087226
     * @symbol  ?shouldRewardExp\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool shouldRewardExp() const;
    /**
     * @hash   -1706715840
     * @symbol  ??1MerchantRecipe\@\@QEAA\@XZ
     */
    MCAPI ~MerchantRecipe();

};