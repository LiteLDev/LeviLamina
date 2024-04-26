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

    // vIndex: 6, symbol: ?matches@ShapedChemistryRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 8, symbol: ?getId@ShapedChemistryRecipe@@UEBAAEBVUUID@mce@@XZ
    virtual class mce::UUID const& getId() const;

    // symbol:
    // ??0ShapedChemistryRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@HHAEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@2@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@2@VHashedString@@_NHPEBVUUID@mce@@V?$optional@VRecipeUnlockingRequirement@@@2@AEBVSemVersion@@@Z
    MCAPI
    ShapedChemistryRecipe(std::string_view, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, bool, int, class mce::UUID const*, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&);

    // symbol: ?ID@ShapedChemistryRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const ID;

    // NOLINTEND
};
