#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShulkerBoxRecipe : public ::ShapelessRecipe {
public:
    // prevent constructor by default
    ShulkerBoxRecipe& operator=(ShulkerBoxRecipe const&);
    ShulkerBoxRecipe(ShulkerBoxRecipe const&);
    ShulkerBoxRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShulkerBoxRecipe@@UEAA@XZ
    virtual ~ShulkerBoxRecipe() = default;

    // vIndex: 1, symbol:
    // ?assemble@ShulkerBoxRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 12, symbol: ?itemsMatch@ShulkerBoxRecipe@@UEBA_NAEBVItemDescriptor@@0@Z
    virtual bool itemsMatch(class ItemDescriptor const& lhs, class ItemDescriptor const& rhs) const;

    // symbol: ??0ShulkerBoxRecipe@@QEAA@$$QEAUConstructionContext@Recipe@@@Z
    MCAPI explicit ShulkerBoxRecipe(struct Recipe::ConstructionContext&&);

    // symbol: ?ID@ShulkerBoxRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const ID;

    // NOLINTEND
};
