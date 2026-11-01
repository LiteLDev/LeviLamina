#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class MultiRecipe : public ::Recipe {
public:
    // prevent constructor by default
    MultiRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isMultiRecipe() const /*override*/;

    virtual bool isShapeless() const /*override*/;

    virtual bool hasDataDrivenResult() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiRecipe(::std::string const& recipeId, ::HashedString tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& recipeId, ::HashedString tag);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isMultiRecipe() const;

    MCNAPI bool $isShapeless() const;

    MCNAPI bool $hasDataDrivenResult() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
