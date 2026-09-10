#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class HashedString;
class ItemInstance;
class RecipeIngredient;
namespace mce { class UUID; }
// clang-format on

class SmithingTransformRecipe : public ::ShapelessRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mRuntimeResults;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    SmithingTransformRecipe();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool matches(::CraftingContainer const& craftingContainer, ::CraftingContext const&) const /*override*/;

    virtual ::std::vector<::ItemInstance> const&
    assemble(::CraftingContainer& craftingContainer, ::CraftingContext&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI SmithingTransformRecipe(
        ::std::string const&      recipeId,
        ::RecipeIngredient const& templateIngredient,
        ::RecipeIngredient const& baseIngredient,
        ::RecipeIngredient const& additionIngredient,
        ::Recipe::Results&&       results,
        ::HashedString const&     tag
    );
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::string const&      recipeId,
        ::RecipeIngredient const& templateIngredient,
        ::RecipeIngredient const& baseIngredient,
        ::RecipeIngredient const& additionIngredient,
        ::Recipe::Results&&       results,
        ::HashedString const&     tag
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $matches(::CraftingContainer const& craftingContainer, ::CraftingContext const&) const;

    MCAPI ::std::vector<::ItemInstance> const&
    $assemble(::CraftingContainer& craftingContainer, ::CraftingContext&) const;


    // NOLINTEND
};
