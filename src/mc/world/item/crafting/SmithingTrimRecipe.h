#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class SmithingTrimRecipe : public ::ShapelessRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkda36da;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTrimRecipe& operator=(SmithingTrimRecipe const&);
    SmithingTrimRecipe(SmithingTrimRecipe const&);
    SmithingTrimRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool matches(::CraftingContainer const& craftingContainer, ::CraftingContext const& craftingContext) const
        /*override*/;

    virtual ::std::vector<::ItemInstance> const&
    assemble(::CraftingContainer& craftingContainer, ::CraftingContext& craftingContext) const /*override*/;

    virtual bool hasDataDrivenResult() const /*override*/;

#ifdef LL_PLAT_S
    virtual ~SmithingTrimRecipe() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~SmithingTrimRecipe() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C SmithingTrimRecipe(::SmithingTrimRecipe&&);

    MCAPI SmithingTrimRecipe(
        ::std::string const&      recipeId,
        ::RecipeIngredient const& templateIngredient,
        ::RecipeIngredient const& baseIngredient,
        ::RecipeIngredient const& additionIngredient,
        ::HashedString const&     tag
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::SmithingTrimRecipe&&);

    MCAPI void* $ctor(
        ::std::string const&      recipeId,
        ::RecipeIngredient const& templateIngredient,
        ::RecipeIngredient const& baseIngredient,
        ::RecipeIngredient const& additionIngredient,
        ::HashedString const&     tag
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $matches(::CraftingContainer const& craftingContainer, ::CraftingContext const& craftingContext) const;

    MCAPI ::std::vector<::ItemInstance> const&
    $assemble(::CraftingContainer& craftingContainer, ::CraftingContext& craftingContext) const;

    MCFOLD bool $hasDataDrivenResult() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
