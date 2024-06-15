#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShapedRecipe : public ::Recipe {
public:
    // prevent constructor by default
    ShapedRecipe& operator=(ShapedRecipe const&);
    ShapedRecipe(ShapedRecipe const&);
    ShapedRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ShapedRecipe@@UEAA@XZ
    virtual ~ShapedRecipe();

    // vIndex: 1, symbol:
    // ?assemble@ShapedRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@ShapedRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@ShapedRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int x, int y) const;

    // vIndex: 4, symbol: ?isShapeless@ShapedRecipe@@UEBA_NXZ
    virtual bool isShapeless() const;

    // vIndex: 5, symbol: ?matches@ShapedRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 6, symbol: ?size@ShapedRecipe@@UEBAHXZ
    virtual int size() const;

    // symbol: ??0ShapedRecipe@@QEAA@$$QEAUConstructionContext@Recipe@@HH_N@Z
    MCAPI ShapedRecipe(struct Recipe::ConstructionContext&&, int, int, bool);

    // symbol: ?assumeSymmetry@ShapedRecipe@@QEBA_NXZ
    MCAPI bool assumeSymmetry() const;

    // symbol: ?getIngredientsHashOffset@ShapedRecipe@@QEBA_KHHHH@Z
    MCAPI uint64 getIngredientsHashOffset(int, int, int offsetX, int offsetY) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?matches@ShapedRecipe@@AEBA_NAEBVCraftingContainer@@HH_N@Z
    MCAPI bool matches(class CraftingContainer const& craftSlots, int xOffs, int yOffs, bool xFlip) const;

    // NOLINTEND
};
