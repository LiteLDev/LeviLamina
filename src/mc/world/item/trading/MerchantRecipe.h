#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/RecipeNetIdTag.h"
#include "mc/world/item/ItemInstance.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    MerchantRecipe();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI MerchantRecipe();
#endif

    MCAPI explicit MerchantRecipe(::CompoundTag const* tag);

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

    MCFOLD int getBaseCountA() const;

    MCAPI int getBaseCountB() const;

    MCFOLD ::ItemInstance const& getBuyAItem() const;

    MCFOLD ::ItemInstance const& getBuyBItem() const;

    MCAPI int getDemand() const;

    MCFOLD int getMaxUses() const;

#ifdef LL_PLAT_C
    MCFOLD ::RecipeNetId const& getNetId() const;
#endif

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

    MCAPI void setDemand(int demand);

    MCAPI void setMaxUses(int maxUses);

    MCAPI void setPriceMultiplierA(float priceMultiplier);

    MCAPI void setPriceMultiplierB(float priceMultiplier);

    MCAPI void setRewardExp(bool rewardExp);

    MCFOLD void setTier(int tier);

    MCAPI void setTraderExp(uint traderExp);

    MCAPI void setUses(int uses);

    MCFOLD bool shouldRewardExp() const;

    MCAPI ~MerchantRecipe();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif

    MCAPI void* $ctor(::CompoundTag const* tag);

    MCAPI void* $ctor(::ItemInstance const& buy, ::ItemInstance const& sell);

    MCAPI void* $ctor(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
