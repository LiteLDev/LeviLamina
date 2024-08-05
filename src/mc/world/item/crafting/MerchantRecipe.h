#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MerchantRecipe {
public:
    // prevent constructor by default
    MerchantRecipe();

public:
    // NOLINTBEGIN
    MCAPI MerchantRecipe(class MerchantRecipe const&);

    MCAPI MerchantRecipe(class ItemInstance const& buy, class ItemInstance const& sell);

    MCAPI
    MerchantRecipe(class ItemInstance const& buyA, class ItemInstance const& buyB, class ItemInstance const& sell);

    MCAPI void calculateDemandPrices(int, int, int, int, bool, class BaseGameVersion);

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
};
