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
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::UUID const& getId() const /*override*/;

    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const
        /*override*/;

#ifdef LL_PLAT_S
    virtual ~ShapelessChemistryRecipe() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ShapelessChemistryRecipe() /*override*/;
#endif

    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
