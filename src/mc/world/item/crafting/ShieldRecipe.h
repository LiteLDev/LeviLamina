#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShieldRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    ShieldRecipe& operator=(ShieldRecipe const&);
    ShieldRecipe(ShieldRecipe const&);
    ShieldRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShieldRecipe@@UEAA@XZ
    virtual ~ShieldRecipe() = default;

    // vIndex: 1, symbol:
    // ?assemble@ShieldRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@ShieldRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@ShieldRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int, int) const;

    // vIndex: 4, symbol:
    // ?getResultItem@ShieldRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const& getResultItem() const;

    // vIndex: 5, symbol: ?isShapeless@ShieldRecipe@@UEBA_NXZ
    virtual bool isShapeless() const;

    // vIndex: 6, symbol: ?matches@ShieldRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 7, symbol: ?size@ShieldRecipe@@UEBAHXZ
    virtual int size() const;

    // symbol: ??0ShieldRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBVUUID@mce@@@Z
    MCAPI ShieldRecipe(std::string_view recipeId, class mce::UUID const* uuid);

    // symbol: ?ID@ShieldRecipe@@2VUUID@mce@@A
    MCAPI static class mce::UUID ID;

    // NOLINTEND
};
