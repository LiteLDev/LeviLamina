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

    virtual ~MultiRecipe() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MultiRecipe(::std::string const& recipeId, ::HashedString tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& recipeId, ::HashedString tag);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isMultiRecipe() const;

    MCFOLD bool $isShapeless() const;

    MCFOLD bool $hasDataDrivenResult() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
