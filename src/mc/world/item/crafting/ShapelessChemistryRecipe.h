#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
namespace mce { class UUID; }
// clang-format on

class ShapelessChemistryRecipe : public ::ShapelessRecipe {
public:
    // prevent constructor by default
    ShapelessChemistryRecipe& operator=(ShapelessChemistryRecipe const&);
    ShapelessChemistryRecipe(ShapelessChemistryRecipe const&);
    ShapelessChemistryRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual ::mce::UUID const& getId() const /*override*/;

    // vIndex: 5
    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const
        /*override*/;

    // vIndex: 0
    virtual ~ShapelessChemistryRecipe() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::UUID const& $getId() const;

    MCAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
