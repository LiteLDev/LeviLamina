#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class MapLockingRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    MapLockingRecipe& operator=(MapLockingRecipe const&);
    MapLockingRecipe(MapLockingRecipe const&);
    MapLockingRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MapLockingRecipe@@UEAA@XZ
    virtual ~MapLockingRecipe() = default;

    // vIndex: 1, symbol:
    // ?assemble@MapLockingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@MapLockingRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@MapLockingRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int x, int y) const;

    // vIndex: 5, symbol: ?matches@MapLockingRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 6, symbol: ?size@MapLockingRecipe@@UEBAHXZ
    virtual int size() const;

    // vIndex: 8, symbol:
    // ?getResultItems@MapLockingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const& getResultItems() const;

    // symbol:
    // ??0MapLockingRecipe@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z
    MCAPI MapLockingRecipe(std::string const&, class mce::UUID const&);

    // symbol: ?CartographyTableID@MapLockingRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const CartographyTableID;

    // NOLINTEND
};
