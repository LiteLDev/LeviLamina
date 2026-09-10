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
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::ItemInstance> const&
    assemble(::CraftingContainer& craftingContainer, ::CraftingContext& craftingContext) const /*override*/;

    virtual int getCraftingSize() const /*override*/;

    virtual ::RecipeIngredient const& getIngredient(int x, int y) const /*override*/;

    virtual bool isShapeless() const /*override*/;

#ifdef LL_PLAT_S
    virtual bool matches(::CraftingContainer const& craftingContainer, ::CraftingContext const& craftingContext) const
        /*override*/;
#else // LL_PLAT_C
    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const
        /*override*/;
#endif

    virtual int size() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::vector<::ItemInstance> const&
    $assemble(::CraftingContainer& craftingContainer, ::CraftingContext& craftingContext) const;

    MCAPI int $getCraftingSize() const;

    MCFOLD ::RecipeIngredient const& $getIngredient(int x, int y) const;

    MCFOLD bool $isShapeless() const;

#ifdef LL_PLAT_S
    MCAPI bool $matches(::CraftingContainer const& craftingContainer, ::CraftingContext const& craftingContext) const;
#else // LL_PLAT_C
    MCAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const;
#endif

    MCAPI int $size() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
