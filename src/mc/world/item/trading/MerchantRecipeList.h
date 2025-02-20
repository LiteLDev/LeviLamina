#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemInstance;
class MerchantRecipe;
class SaveContext;
// clang-format on

class MerchantRecipeList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::MerchantRecipe>> mRecipeList;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>             mTierExpRequirements;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MerchantRecipeList() = default;

    // vIndex: 1
    virtual ::MerchantRecipe* getRecipeFor(::ItemInstance const& buyA, ::ItemInstance const& buyB, int selectionHint);

    // vIndex: 2
    virtual void addIfNewOrBetter(::MerchantRecipe* toMatch);

    // vIndex: 4
    virtual ::MerchantRecipe*
    getMatchingRecipeFor(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);

    // vIndex: 3
    virtual ::MerchantRecipe* getMatchingRecipeFor(::MerchantRecipe const& recipe);

    // vIndex: 5
    virtual void load(::CompoundTag const& tag);

    // vIndex: 6
    virtual ::std::unique_ptr<::CompoundTag> createTag(bool includeNetInfo, ::SaveContext const& saveContext) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isRequiredItem(::ItemInstance const& offer, ::ItemInstance const& requiredItem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MerchantRecipe* $getRecipeFor(::ItemInstance const& buyA, ::ItemInstance const& buyB, int selectionHint);

    MCAPI void $addIfNewOrBetter(::MerchantRecipe* toMatch);

    MCAPI ::MerchantRecipe*
    $getMatchingRecipeFor(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);

    MCAPI ::MerchantRecipe* $getMatchingRecipeFor(::MerchantRecipe const& recipe);

    MCAPI void $load(::CompoundTag const& tag);

    MCAPI ::std::unique_ptr<::CompoundTag> $createTag(bool includeNetInfo, ::SaveContext const& saveContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
