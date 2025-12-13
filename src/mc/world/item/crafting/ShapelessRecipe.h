#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class ItemInstance;
class RecipeIngredient;
// clang-format on

class ShapelessRecipe : public ::Recipe {
public:
    // prevent constructor by default
    ShapelessRecipe& operator=(ShapelessRecipe const&);
    ShapelessRecipe(ShapelessRecipe const&);
    ShapelessRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const /*override*/;

    virtual int getCraftingSize() const /*override*/;

    virtual ::RecipeIngredient const& getIngredient(int x, int y) const /*override*/;

    virtual bool isShapeless() const /*override*/;

    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const /*override*/;

    virtual int size() const /*override*/;

    virtual ~ShapelessRecipe() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ShapelessRecipe(::ShapelessRecipe&& recipe);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::ShapelessRecipe&& recipe);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::vector<::ItemInstance> const& $assemble(::CraftingContainer&, ::CraftingContext&) const;

    MCAPI int $getCraftingSize() const;

    MCFOLD ::RecipeIngredient const& $getIngredient(int x, int y) const;

    MCFOLD bool $isShapeless() const;

    MCAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const;

    MCAPI int $size() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
