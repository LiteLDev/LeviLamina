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
    MultiRecipe& operator=(MultiRecipe const&);
    MultiRecipe(MultiRecipe const&);
    MultiRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 9
    virtual bool isMultiRecipe() const /*override*/;

    // vIndex: 4
    virtual bool isShapeless() const /*override*/;

    // vIndex: 10
    virtual bool hasDataDrivenResult() const /*override*/;

    // vIndex: 0
    virtual ~MultiRecipe() /*override*/;
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isMultiRecipe() const;

    MCAPI bool $isShapeless() const;

    MCAPI bool $hasDataDrivenResult() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
