#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
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
    // prevent constructor by default
    MerchantRecipe();

public:
    // member functions
    // NOLINTBEGIN
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

    MCAPI bool isSame(::MerchantRecipe const& lhs) const;

    MCAPI void legacyCalculateDemandPrices(int lowTierDiscount, int highTierDiscount);

    MCAPI ~MerchantRecipe();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemInstance const& buy, ::ItemInstance const& sell);

    MCAPI void* $ctor(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
