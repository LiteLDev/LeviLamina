/**
 * @file  MerchantRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0MerchantRecipe\@\@QEAA\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI MerchantRecipe(class CompoundTag const *);
    /**
     * @symbol  ??0MerchantRecipe\@\@QEAA\@AEBVItemInstance\@\@0\@Z
     */
    MCAPI MerchantRecipe(class ItemInstance const &, class ItemInstance const &);
    /**
     * @symbol  ??0MerchantRecipe\@\@QEAA\@AEBVItemInstance\@\@00\@Z
     */
    MCAPI MerchantRecipe(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    /**
     * @symbol  ??0MerchantRecipe\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MerchantRecipe(class MerchantRecipe const &);
    /**
     * @symbol  ?calculateDemandPrices\@MerchantRecipe\@\@QEAAXHHH_N\@Z
     */
    MCAPI void calculateDemandPrices(int, int, int, bool);
    /**
     * @symbol  ?createTag\@MerchantRecipe\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag(bool) const;
    /**
     * @symbol  ?getBaseCountA\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getBaseCountA() const;
    /**
     * @symbol  ?getBaseCountB\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getBaseCountB() const;
    /**
     * @symbol  ?getBuyAItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getBuyAItem() const;
    /**
     * @symbol  ?getBuyBItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getBuyBItem() const;
    /**
     * @symbol  ?getDemand\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getDemand() const;
    /**
     * @symbol  ?getMaxUses\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getMaxUses() const;
    /**
     * @symbol  ?getNetId\@MerchantRecipe\@\@QEBAAEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const & getNetId() const;
    /**
     * @symbol  ?getSellItem\@MerchantRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getSellItem() const;
    /**
     * @symbol  ?getTier\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getTier() const;
    /**
     * @symbol  ?getTraderExp\@MerchantRecipe\@\@QEBAIXZ
     */
    MCAPI unsigned int getTraderExp() const;
    /**
     * @symbol  ?getUses\@MerchantRecipe\@\@QEBAHXZ
     */
    MCAPI int getUses() const;
    /**
     * @symbol  ?hasSecondaryBuyItem\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool hasSecondaryBuyItem() const;
    /**
     * @symbol  ?increaseMaxUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void increaseMaxUses(int);
    /**
     * @symbol  ?increaseUses\@MerchantRecipe\@\@QEAAXXZ
     */
    MCAPI void increaseUses();
    /**
     * @symbol  ?init\@MerchantRecipe\@\@QEAAXAEBVItemInstance\@\@00\@Z
     */
    MCAPI void init(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    /**
     * @symbol  ?isOutOfUses\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool isOutOfUses() const;
    /**
     * @symbol  ?isSame\@MerchantRecipe\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isSame(class MerchantRecipe const &) const;
    /**
     * @symbol  ?isSameButBetter\@MerchantRecipe\@\@QEBA_NAEAV1\@\@Z
     */
    MCAPI bool isSameButBetter(class MerchantRecipe &) const;
    /**
     * @symbol  ?legacyCalculateDemandPrices\@MerchantRecipe\@\@QEAAXHH\@Z
     */
    MCAPI void legacyCalculateDemandPrices(int, int);
    /**
     * @symbol  ?load\@MerchantRecipe\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const *);
    /**
     * @symbol  ?setDemand\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setDemand(int);
    /**
     * @symbol  ?setMaxUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setMaxUses(int);
    /**
     * @symbol  ?setNetId\@MerchantRecipe\@\@QEAAXAEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @symbol  ?setPriceMultiplierA\@MerchantRecipe\@\@QEAAXM\@Z
     */
    MCAPI void setPriceMultiplierA(float);
    /**
     * @symbol  ?setPriceMultiplierB\@MerchantRecipe\@\@QEAAXM\@Z
     */
    MCAPI void setPriceMultiplierB(float);
    /**
     * @symbol  ?setRewardExp\@MerchantRecipe\@\@QEAAX_N\@Z
     */
    MCAPI void setRewardExp(bool);
    /**
     * @symbol  ?setTier\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setTier(int);
    /**
     * @symbol  ?setTraderExp\@MerchantRecipe\@\@QEAAXI\@Z
     */
    MCAPI void setTraderExp(unsigned int);
    /**
     * @symbol  ?setUses\@MerchantRecipe\@\@QEAAXH\@Z
     */
    MCAPI void setUses(int);
    /**
     * @symbol  ?shouldRewardExp\@MerchantRecipe\@\@QEBA_NXZ
     */
    MCAPI bool shouldRewardExp() const;
    /**
     * @symbol  ??1MerchantRecipe\@\@QEAA\@XZ
     */
    MCAPI ~MerchantRecipe();

};