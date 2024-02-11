#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
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
    // vIndex: 0, symbol: __gen_??1BannerAddPatternRecipe@@UEAA@XZ
    virtual ~BannerAddPatternRecipe() = default;

    // vIndex: 1, symbol:
    // ?assemble@BannerAddPatternRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@BannerAddPatternRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@BannerAddPatternRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int x, int y) const;

    // vIndex: 4, symbol:
    // ?getResultItem@BannerAddPatternRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const& getResultItem() const;

    // vIndex: 6, symbol: ?matches@BannerAddPatternRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 7, symbol: ?size@BannerAddPatternRecipe@@UEBAHXZ
    virtual int size() const;

    // symbol: ??0BannerAddPatternRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVUUID@mce@@@Z
    MCAPI BannerAddPatternRecipe(std::string_view recipeId, class mce::UUID const& uuid);

    // symbol:
    // ?matchPatterns@BannerAddPatternRecipe@@QEBA?BV?$NonOwnerPointer@$$CBVBannerPattern@@@Bedrock@@AEBVCraftingContainer@@@Z
    MCAPI class Bedrock::NonOwnerPointer<class BannerPattern const> const
    matchPatterns(class CraftingContainer const& craftSlots) const;

    // symbol: ?ID@BannerAddPatternRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const ID;

    // NOLINTEND
};
