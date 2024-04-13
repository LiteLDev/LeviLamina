#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/RecipeNetIdTag.h"
#include "mc/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"

class MerchantRecipe {
public:
    // prevent constructor by default
    MerchantRecipe();

    ItemInstance mBuyA;             // this+0x0
    ItemInstance mBuyB;             // this+0x88
    ItemInstance mSell;             // this+0x110
    int          mTier;             // this+0x198
    int          mUses;             // this+0x19C
    int          mMaxUses;          // this+0x1A0
    uint         mTraderExp;        // this+0x1A4
    bool         mRewardExp;        // this+0x1A8
    int          mDemand;           // this+0x1AC
    int          mBuyCountA;        // this+0x1B0
    int          mBuyCountB;        // this+0x1B4
    float        mPriceMultiplierA; // this+0x1B8
    float        mPriceMultiplierB; // this+0x1BC
    RecipeNetId  mRecipeNetId;      // this+0x1C0

public:
    // NOLINTBEGIN
    // symbol: ??0MerchantRecipe@@QEAA@AEBV0@@Z
    MCAPI MerchantRecipe(class MerchantRecipe const&);

    // symbol: ??0MerchantRecipe@@QEAA@AEBVItemInstance@@0@Z
    MCAPI MerchantRecipe(class ItemInstance const& buy, class ItemInstance const& sell);

    // symbol: ??0MerchantRecipe@@QEAA@AEBVItemInstance@@00@Z
    MCAPI
    MerchantRecipe(class ItemInstance const& buyA, class ItemInstance const& buyB, class ItemInstance const& sell);

    // symbol: ?calculateDemandPrices@MerchantRecipe@@QEAAXHHHH_NVBaseGameVersion@@@Z
    MCAPI void calculateDemandPrices(int, int, int, int, bool, class BaseGameVersion);

    // symbol: ?calculateDemandPricesDefaults@MerchantRecipe@@QEAAXXZ
    MCAPI void calculateDemandPricesDefaults();

    // symbol:
    // ?createTag@MerchantRecipe@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
    MCAPI std::unique_ptr<class CompoundTag> createTag(bool includeNetInfo) const;

    // symbol: ?getBaseCountA@MerchantRecipe@@QEBAHXZ
    MCAPI int getBaseCountA() const;

    // symbol: ?getBaseCountB@MerchantRecipe@@QEBAHXZ
    MCAPI int getBaseCountB() const;

    // symbol: ?getBuyAItem@MerchantRecipe@@QEBAAEBVItemInstance@@XZ
    MCAPI class ItemInstance const& getBuyAItem() const;

    // symbol: ?getBuyBItem@MerchantRecipe@@QEBAAEBVItemInstance@@XZ
    MCAPI class ItemInstance const& getBuyBItem() const;

    // symbol: ?getDemand@MerchantRecipe@@QEBAHXZ
    MCAPI int getDemand() const;

    // symbol: ?getMaxUses@MerchantRecipe@@QEBAHXZ
    MCAPI int getMaxUses() const;

    // symbol: ?getSellItem@MerchantRecipe@@QEBAAEBVItemInstance@@XZ
    MCAPI class ItemInstance const& getSellItem() const;

    // symbol: ?getTier@MerchantRecipe@@QEBAHXZ
    MCAPI int getTier() const;

    // symbol: ?getTraderExp@MerchantRecipe@@QEBAIXZ
    MCAPI uint getTraderExp() const;

    // symbol: ?getUses@MerchantRecipe@@QEBAHXZ
    MCAPI int getUses() const;

    // symbol: ?hasSecondaryBuyItem@MerchantRecipe@@QEBA_NXZ
    MCAPI bool hasSecondaryBuyItem() const;

    // symbol: ?increaseMaxUses@MerchantRecipe@@QEAAXH@Z
    MCAPI void increaseMaxUses(int amount);

    // symbol: ?increaseUses@MerchantRecipe@@QEAAXXZ
    MCAPI void increaseUses();

    // symbol: ?init@MerchantRecipe@@QEAAXAEBVItemInstance@@00@Z
    MCAPI void init(class ItemInstance const& buyA, class ItemInstance const& buyB, class ItemInstance const& sell);

    // symbol: ?isOutOfUses@MerchantRecipe@@QEBA_NXZ
    MCAPI bool isOutOfUses() const;

    // symbol: ?isSame@MerchantRecipe@@QEBA_NAEBV1@@Z
    MCAPI bool isSame(class MerchantRecipe const& lhs) const;

    // symbol: ?legacyCalculateDemandPrices@MerchantRecipe@@QEAAXHH@Z
    MCAPI void legacyCalculateDemandPrices(int lowTierDiscount, int highTierDiscount);

    // symbol: ?load@MerchantRecipe@@QEAAXPEBVCompoundTag@@@Z
    MCAPI void load(class CompoundTag const* tag);

    // symbol: ??4MerchantRecipe@@QEAAAEAV0@AEBV0@@Z
    MCAPI class MerchantRecipe& operator=(class MerchantRecipe const&);

    // symbol: ?setDemand@MerchantRecipe@@QEAAXH@Z
    MCAPI void setDemand(int demand);

    // symbol: ?setMaxUses@MerchantRecipe@@QEAAXH@Z
    MCAPI void setMaxUses(int maxUses);

    // symbol: ?setPriceMultiplierA@MerchantRecipe@@QEAAXM@Z
    MCAPI void setPriceMultiplierA(float priceMultiplier);

    // symbol: ?setPriceMultiplierB@MerchantRecipe@@QEAAXM@Z
    MCAPI void setPriceMultiplierB(float priceMultiplier);

    // symbol: ?setRewardExp@MerchantRecipe@@QEAAX_N@Z
    MCAPI void setRewardExp(bool rewardExp);

    // symbol: ?setTier@MerchantRecipe@@QEAAXH@Z
    MCAPI void setTier(int tier);

    // symbol: ?setTraderExp@MerchantRecipe@@QEAAXI@Z
    MCAPI void setTraderExp(uint traderExp);

    // symbol: ?setUses@MerchantRecipe@@QEAAXH@Z
    MCAPI void setUses(int uses);

    // symbol: ?shouldRewardExp@MerchantRecipe@@QEBA_NXZ
    MCAPI bool shouldRewardExp() const;

    // symbol: ??1MerchantRecipe@@QEAA@XZ
    MCAPI ~MerchantRecipe();

    // NOLINTEND
};
