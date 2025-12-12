#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/ShapedRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
namespace mce { class UUID; }
// clang-format on

class ShapedChemistryRecipe : public ::ShapedRecipe {
public:
    // prevent constructor by default
    ShapedChemistryRecipe& operator=(ShapedChemistryRecipe const&);
    ShapedChemistryRecipe(ShapedChemistryRecipe const&);
    ShapedChemistryRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::UUID const& getId() const /*override*/;

    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const
        /*override*/;

#ifdef LL_PLAT_S
    virtual ~ShapedChemistryRecipe() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ShapedChemistryRecipe() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ShapedChemistryRecipe(::ShapedChemistryRecipe&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::ShapedChemistryRecipe&&);
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
