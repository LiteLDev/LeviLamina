#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"

class MerchantRecipeList {
public:
    // prevent constructor by default
    MerchantRecipeList& operator=(MerchantRecipeList const&);
    MerchantRecipeList(MerchantRecipeList const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MerchantRecipeList() = default;

    // vIndex: 1
    virtual class MerchantRecipe*
    getRecipeFor(class ItemInstance const& buyA, class ItemInstance const& buyB, int selectionHint);

    // vIndex: 2
    virtual void addIfNewOrBetter(class MerchantRecipe* toMatch);

    // vIndex: 3
    virtual class MerchantRecipe* getMatchingRecipeFor(
        class ItemInstance const& buyA,
        class ItemInstance const& buyB,
        class ItemInstance const& sell
    );

    // vIndex: 4
    virtual class MerchantRecipe* getMatchingRecipeFor(class MerchantRecipe const& recipe);

    // vIndex: 5
    virtual void load(class CompoundTag const& tag);

    // vIndex: 6
    virtual std::unique_ptr<class CompoundTag> createTag(bool includeNetInfo) const;

    MCAPI MerchantRecipeList();

    MCAPI void assignNetIds();

    MCAPI class MerchantRecipe const* getRecipeByNetId(RecipeNetId const& netId) const;

    MCAPI std::optional<uint64> getRecipeIndexByNetId(RecipeNetId const& netId) const;

    MCAPI bool isRequiredItem(class ItemInstance const& offer, class ItemInstance const& requiredItem);

    // NOLINTEND
};
