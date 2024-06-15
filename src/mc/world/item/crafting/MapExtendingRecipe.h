#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class MapExtendingRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    MapExtendingRecipe& operator=(MapExtendingRecipe const&);
    MapExtendingRecipe(MapExtendingRecipe const&);
    MapExtendingRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MapExtendingRecipe@@UEAA@XZ
    virtual ~MapExtendingRecipe() = default;

    // vIndex: 1, symbol:
    // ?assemble@MapExtendingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@MapExtendingRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@MapExtendingRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int x, int y) const;

    // vIndex: 5, symbol: ?matches@MapExtendingRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 6, symbol: ?size@MapExtendingRecipe@@UEBAHXZ
    virtual int size() const;

    // vIndex: 8, symbol:
    // ?getResultItems@MapExtendingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const& getResultItems() const;

    // symbol:
    // ??0MapExtendingRecipe@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z
    MCAPI MapExtendingRecipe(std::string const&, class mce::UUID const&);

    // symbol: ?CartographyTableID@MapExtendingRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const CartographyTableID;

    // symbol: ?CraftingTableID@MapExtendingRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const CraftingTableID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updateMapInstance@MapExtendingRecipe@@AEBAXAEAVItemInstance@@AEAVCraftingContext@@@Z
    MCAPI void _updateMapInstance(class ItemInstance& mapInstance, class CraftingContext&) const;

    // NOLINTEND
};
