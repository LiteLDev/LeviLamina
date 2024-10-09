#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BannerAddPatternRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    BannerAddPatternRecipe& operator=(BannerAddPatternRecipe const&);
    BannerAddPatternRecipe(BannerAddPatternRecipe const&);
    BannerAddPatternRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BannerAddPatternRecipe() = default;

    // vIndex: 1
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 2
    virtual int getCraftingSize() const;

    // vIndex: 3
    virtual class RecipeIngredient const& getIngredient(int, int) const;

    // vIndex: 5
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 6
    virtual int size() const;

    // vIndex: 8
    virtual std::vector<class ItemInstance> const& getResultItems() const;

    MCAPI BannerAddPatternRecipe(std::string const& recipeId, class mce::UUID const& uuid);

    MCAPI class Bedrock::NonOwnerPointer<class BannerPattern const> const
    matchPatterns(class CraftingContainer const& craftSlots) const;

    MCAPI static class mce::UUID const ID;

    // NOLINTEND
};
