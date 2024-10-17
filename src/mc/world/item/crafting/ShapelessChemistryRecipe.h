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
    // vIndex: 0
    virtual ~ShapelessChemistryRecipe() = default;

    // vIndex: 5
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const& craftingContext) const;

    // vIndex: 7
    virtual class mce::UUID const& getId() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class mce::UUID const& getId$() const;

    MCAPI bool matches$(class CraftingContainer const& craftSlots, class CraftingContext const& craftingContext) const;

    MCAPI static class mce::UUID const& ID();

    // NOLINTEND
};
