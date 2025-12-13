#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C MerchantRecipe();

    MCAPI MerchantRecipe(::MerchantRecipe&&);

    MCAPI MerchantRecipe(::MerchantRecipe const&);

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

    MCAPI ::std::unique_ptr<::CompoundTag> createTag(bool includeNetInfo, ::SaveContext const& saveContext) const;

    MCAPI bool isSame(::MerchantRecipe const& lhs) const;

    MCAPI void legacyCalculateDemandPrices(int lowTierDiscount, int highTierDiscount);

    MCAPI void load(::CompoundTag const* tag);

    MCAPI ::MerchantRecipe& operator=(::MerchantRecipe const&);

    MCAPI ~MerchantRecipe();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI void* $ctor(::MerchantRecipe&&);

    MCFOLD void* $ctor(::MerchantRecipe const&);

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
