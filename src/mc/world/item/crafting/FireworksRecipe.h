#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class FireworksRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    FireworksRecipe& operator=(FireworksRecipe const&);
    FireworksRecipe(FireworksRecipe const&);
    FireworksRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FireworksRecipe@@UEAA@XZ
    virtual ~FireworksRecipe() = default;

    // vIndex: 1, symbol:
    // ?assemble@FireworksRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@FireworksRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@FireworksRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int, int) const;

    // vIndex: 4, symbol:
    // ?getResultItem@FireworksRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const& getResultItem() const;

    // vIndex: 5, symbol: ?isShapeless@FireworksRecipe@@UEBA_NXZ
    virtual bool isShapeless() const;

    // vIndex: 6, symbol: ?matches@FireworksRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 7, symbol: ?size@FireworksRecipe@@UEBAHXZ
    virtual int size() const;

    // symbol: ??0FireworksRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBVUUID@mce@@@Z
    MCAPI FireworksRecipe(std::string_view recipeId, class mce::UUID const* uuid);

    // symbol: ?ID@FireworksRecipe@@2VUUID@mce@@A
    MCAPI static class mce::UUID ID;

    // NOLINTEND
};
