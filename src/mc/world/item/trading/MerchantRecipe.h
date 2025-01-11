#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class ItemInstance;
class SaveContext;
struct RecipeNetIdTag;
// clang-format on

class MerchantRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mBuyA;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mBuyB;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mSell;
    ::ll::TypedStorage<4, 4, int>              mTier;
    ::ll::TypedStorage<4, 4, int>              mUses;
    ::ll::TypedStorage<4, 4, int>              mMaxUses;
    ::ll::TypedStorage<4, 4, uint>             mTraderExp;
    ::ll::TypedStorage<1, 1, bool>             mRewardExp;
    ::ll::TypedStorage<4, 4, int>              mDemand;
    ::ll::TypedStorage<4, 4, int>              mBuyCountA;
    ::ll::TypedStorage<4, 4, int>              mBuyCountB;
    ::ll::TypedStorage<4, 4, float>            mPriceMultiplierA;
    ::ll::TypedStorage<4, 4, float>            mPriceMultiplierB;
    ::ll::TypedStorage<4, 4, ::RecipeNetId>    mRecipeNetId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MerchantRecipe(::MerchantRecipe const&);

    MCAPI MerchantRecipe(::ItemInstance const& buy, ::ItemInstance const& sell);

    MCAPI MerchantRecipe(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);

    MCAPI void calculateDemandPrices(
        int               minorPositiveGossip,
        int               majorPositiveGossip,
        int               nearbyCuredDiscount,
        int               heroEffectAmplifier,
        bool              hasHeroOfTheVillage,
        ::BaseGameVersion baseGameVersion
    );

    MCAPI void calculateDemandPricesDefaults();

    MCAPI ::std::unique_ptr<::CompoundTag> createTag(bool includeNetInfo, ::SaveContext const& saveContext) const;

    MCAPI int getBaseCountA() const;

    MCAPI int getBaseCountB() const;

    MCFOLD ::ItemInstance const& getBuyAItem() const;

    MCFOLD ::ItemInstance const& getBuyBItem() const;

    MCAPI int getDemand() const;

    MCAPI int getMaxUses() const;

    MCFOLD ::ItemInstance const& getSellItem() const;

    MCFOLD int getTier() const;

    MCFOLD uint getTraderExp() const;

    MCFOLD int getUses() const;

    MCAPI bool hasSecondaryBuyItem() const;

    MCAPI void increaseMaxUses(int amount);

    MCAPI void increaseUses(int count);

    MCAPI void init(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);

    MCAPI bool isOutOfUses() const;

    MCAPI bool isSame(::MerchantRecipe const& lhs) const;

    MCAPI void legacyCalculateDemandPrices(int lowTierDiscount, int highTierDiscount);

    MCAPI void load(::CompoundTag const* tag);

    MCAPI ::MerchantRecipe& operator=(::MerchantRecipe const&);

    MCAPI void setDemand(int demand);

    MCAPI void setMaxUses(int maxUses);

    MCAPI void setPriceMultiplierA(float priceMultiplier);

    MCAPI void setPriceMultiplierB(float priceMultiplier);

    MCAPI void setRewardExp(bool rewardExp);

    MCAPI void setTier(int tier);

    MCAPI void setTraderExp(uint traderExp);

    MCFOLD void setUses(int uses);

    MCFOLD bool shouldRewardExp() const;

    MCAPI ~MerchantRecipe();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MerchantRecipe const&);

    MCAPI void* $ctor(::ItemInstance const& buy, ::ItemInstance const& sell);

    MCAPI void* $ctor(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
