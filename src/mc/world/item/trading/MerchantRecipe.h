#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/RecipeNetIdTag.h"
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
    MCAPI MerchantRecipe(class MerchantRecipe const&);

    MCAPI MerchantRecipe(class ItemInstance const& buy, class ItemInstance const& sell);

    MCAPI
    MerchantRecipe(class ItemInstance const& buyA, class ItemInstance const& buyB, class ItemInstance const& sell);

    MCAPI void calculateDemandPrices(
        int                   minorPositiveGossip,
        int                   majorPositiveGossip,
        int                   nearbyCuredDiscount,
        int                   heroEffectAmplifier,
        bool                  hasHeroOfTheVillage,
        class BaseGameVersion baseGameVersion
    );

    MCAPI void calculateDemandPricesDefaults();

    MCAPI std::unique_ptr<class CompoundTag> createTag(bool includeNetInfo) const;

    MCAPI int getBaseCountA() const;

    MCAPI int getBaseCountB() const;

    MCAPI class ItemInstance const& getBuyAItem() const;

    MCAPI class ItemInstance const& getBuyBItem() const;

    MCAPI int getDemand() const;

    MCAPI int getMaxUses() const;

    MCAPI class ItemInstance const& getSellItem() const;

    MCAPI int getTier() const;

    MCAPI uint getTraderExp() const;

    MCAPI int getUses() const;

    MCAPI bool hasSecondaryBuyItem() const;

    MCAPI void increaseMaxUses(int amount);

    MCAPI void increaseUses();

    MCAPI void init(class ItemInstance const& buyA, class ItemInstance const& buyB, class ItemInstance const& sell);

    MCAPI bool isOutOfUses() const;

    MCAPI bool isSame(class MerchantRecipe const& lhs) const;

    MCAPI void legacyCalculateDemandPrices(int lowTierDiscount, int highTierDiscount);

    MCAPI void load(class CompoundTag const* tag);

    MCAPI class MerchantRecipe& operator=(class MerchantRecipe const&);

    MCAPI void setDemand(int demand);

    MCAPI void setMaxUses(int maxUses);

    MCAPI void setPriceMultiplierA(float priceMultiplier);

    MCAPI void setPriceMultiplierB(float priceMultiplier);

    MCAPI void setRewardExp(bool rewardExp);

    MCAPI void setTier(int tier);

    MCAPI void setTraderExp(uint traderExp);

    MCAPI void setUses(int uses);

    MCAPI bool shouldRewardExp() const;

    MCAPI ~MerchantRecipe();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
