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
    ::ll::UntypedStorage<1, 1> mUnk8214d9;
    // NOLINTEND

public:
    // prevent constructor by default
    ShapedRecipe& operator=(ShapedRecipe const&);
    ShapedRecipe(ShapedRecipe const&);
    ShapedRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShapedRecipe() /*override*/;

    // vIndex: 1
    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const /*override*/;

    // vIndex: 2
    virtual int getCraftingSize() const /*override*/;

    // vIndex: 3
    virtual ::RecipeIngredient const& getIngredient(int x, int y) const /*override*/;

    // vIndex: 4
    virtual bool isShapeless() const /*override*/;

    // vIndex: 5
    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const /*override*/;

    // vIndex: 6
    virtual int size() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ShapedRecipe(::Recipe::ConstructionContext&& context, int width, int height, bool assumeSymmetry);

    MCFOLD bool assumeSymmetry() const;

    MCAPI uint64 getIngredientsHashOffset(int simulatedWidth, int simulatedHeight, int offsetX, int offsetY) const;

    MCAPI bool matches(::CraftingContainer const& craftSlots, int xOffs, int yOffs, bool xFlip) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Recipe::ConstructionContext&& context, int width, int height, bool assumeSymmetry);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
