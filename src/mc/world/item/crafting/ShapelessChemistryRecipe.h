#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShapelessChemistryRecipe : public ::ShapelessRecipe {
public:
    // prevent constructor by default
    ShapelessChemistryRecipe& operator=(ShapelessChemistryRecipe const&);
    ShapelessChemistryRecipe(ShapelessChemistryRecipe const&);
    ShapelessChemistryRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShapelessChemistryRecipe@@UEAA@XZ
    virtual ~ShapelessChemistryRecipe() = default;

    // vIndex: 5, symbol: ?matches@ShapelessChemistryRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 7, symbol: ?getId@ShapelessChemistryRecipe@@UEBAAEBVUUID@mce@@XZ
    virtual class mce::UUID const& getId() const;

    // symbol: ?ID@ShapelessChemistryRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const ID;

    // NOLINTEND
};
