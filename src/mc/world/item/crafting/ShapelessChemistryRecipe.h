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

    // vIndex: 6, symbol: ?matches@ShapelessChemistryRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 8, symbol: ?getId@ShapelessChemistryRecipe@@UEBAAEBVUUID@mce@@XZ
    virtual class mce::UUID const& getId() const;

    // symbol:
    // ??0ShapelessChemistryRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@2@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@2@VHashedString@@HPEBVUUID@mce@@V?$optional@VRecipeUnlockingRequirement@@@2@AEBVSemVersion@@@Z
    MCAPI
    ShapelessChemistryRecipe(std::string_view, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, int, class mce::UUID const*, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&);

    // symbol: ?ID@ShapelessChemistryRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const ID;

    // NOLINTEND
};
