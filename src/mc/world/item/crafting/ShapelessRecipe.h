#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShapelessRecipe : public ::Recipe {
public:
    // prevent constructor by default
    ShapelessRecipe& operator=(ShapelessRecipe const&);
    ShapelessRecipe(ShapelessRecipe const&);
    ShapelessRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ShapelessRecipe@@UEAA@XZ
    virtual ~ShapelessRecipe();

    // vIndex: 1, symbol:
    // ?assemble@ShapelessRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@ShapelessRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@ShapelessRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int x, int y) const;

    // vIndex: 4, symbol: ?isShapeless@ShapelessRecipe@@UEBA_NXZ
    virtual bool isShapeless() const;

    // vIndex: 5, symbol: ?matches@ShapelessRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 6, symbol: ?size@ShapelessRecipe@@UEBAHXZ
    virtual int size() const;

    // symbol: ??0ShapelessRecipe@@QEAA@$$QEAUConstructionContext@Recipe@@@Z
    MCAPI explicit ShapelessRecipe(struct Recipe::ConstructionContext&&);

    // NOLINTEND
};
