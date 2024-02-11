#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class DecoratedPotRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    DecoratedPotRecipe& operator=(DecoratedPotRecipe const&);
    DecoratedPotRecipe(DecoratedPotRecipe const&);
    DecoratedPotRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DecoratedPotRecipe@@UEAA@XZ
    virtual ~DecoratedPotRecipe() = default;

    // vIndex: 1, symbol:
    // ?assemble@DecoratedPotRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@DecoratedPotRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@DecoratedPotRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int, int) const;

    // vIndex: 4, symbol:
    // ?getResultItem@DecoratedPotRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const& getResultItem() const;

    // vIndex: 6, symbol: ?matches@DecoratedPotRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 7, symbol: ?size@DecoratedPotRecipe@@UEBAHXZ
    virtual int size() const;

    // symbol: ??0DecoratedPotRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVUUID@mce@@@Z
    MCAPI DecoratedPotRecipe(std::string_view recipeId, class mce::UUID const& uuid);

    // symbol: ?ID@DecoratedPotRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const ID;

    // NOLINTEND
};
