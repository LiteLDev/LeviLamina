#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class MapUpgradingRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    MapUpgradingRecipe& operator=(MapUpgradingRecipe const&);
    MapUpgradingRecipe(MapUpgradingRecipe const&);
    MapUpgradingRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?assemble@MapUpgradingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@MapUpgradingRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@MapUpgradingRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int, int) const;

    // vIndex: 4, symbol:
    // ?getResultItem@MapUpgradingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const& getResultItem() const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?matches@MapUpgradingRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const;

    // vIndex: 7, symbol: ?size@MapUpgradingRecipe@@UEBAHXZ
    virtual int size() const;

    // symbol: ??0MapUpgradingRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVUUID@mce@@@Z
    MCAPI MapUpgradingRecipe(std::string_view, class mce::UUID const&);

    // symbol: ?CartographyTableID@MapUpgradingRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const CartographyTableID;

    // symbol: ?CraftingTableID@MapUpgradingRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const CraftingTableID;

    // NOLINTEND
};
