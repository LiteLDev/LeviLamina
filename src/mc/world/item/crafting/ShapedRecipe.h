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

class ShapedRecipe : public ::Recipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAssumeSymmetry;
    // NOLINTEND

public:
    // prevent constructor by default
    ShapedRecipe& operator=(ShapedRecipe const&);
    ShapedRecipe(ShapedRecipe const&);
    ShapedRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ShapedRecipe() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ShapedRecipe() /*override*/;
#endif

    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const /*override*/;

    virtual int getCraftingSize() const /*override*/;

    virtual ::RecipeIngredient const& getIngredient(int x, int y) const /*override*/;

    virtual bool isShapeless() const /*override*/;

    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const /*override*/;

    virtual int size() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ShapedRecipe(::ShapedRecipe&& recipe);

    MCAPI uint64 getIngredientsHashOffset(int simulatedWidth, int simulatedHeight, int offsetX, int offsetY) const;

    MCAPI bool matches(::CraftingContainer const& craftSlots, int xOffs, int yOffs, bool xFlip) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::ShapedRecipe&& recipe);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
