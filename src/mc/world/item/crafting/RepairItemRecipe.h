#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class RepairItemRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    RepairItemRecipe& operator=(RepairItemRecipe const&);
    RepairItemRecipe(RepairItemRecipe const&);
    RepairItemRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RepairItemRecipe@@UEAA@XZ
    virtual ~RepairItemRecipe() = default;

    // vIndex: 1, symbol:
    // ?assemble@RepairItemRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@RepairItemRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@RepairItemRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int x, int y) const;

    // vIndex: 4, symbol:
    // ?getResultItem@RepairItemRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const& getResultItem() const;

    // vIndex: 6, symbol: ?matches@RepairItemRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 7, symbol: ?size@RepairItemRecipe@@UEBAHXZ
    virtual int size() const;

    // symbol: ??0RepairItemRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBVUUID@mce@@@Z
    MCAPI RepairItemRecipe(std::string_view recipeId, class mce::UUID const* uuid);

    // symbol: ?ID@RepairItemRecipe@@2VUUID@mce@@A
    MCAPI static class mce::UUID ID;

    // NOLINTEND
};
