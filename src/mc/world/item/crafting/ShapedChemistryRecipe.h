#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/ShapedRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShapedChemistryRecipe : public ::ShapedRecipe {
public:
    // prevent constructor by default
    ShapedChemistryRecipe& operator=(ShapedChemistryRecipe const&);
    ShapedChemistryRecipe(ShapedChemistryRecipe const&);
    ShapedChemistryRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShapedChemistryRecipe@@UEAA@XZ
    virtual ~ShapedChemistryRecipe() = default;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?matches@ShapedChemistryRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 8, symbol: ?getId@ShapedChemistryRecipe@@UEBAAEBVUUID@mce@@XZ
    virtual class mce::UUID const& getId() const;

    // symbol: ?ID@ShapedChemistryRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const ID;

    // NOLINTEND
};
