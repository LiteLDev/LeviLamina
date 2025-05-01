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
    virtual ~ShapedRecipe() /*override*/ = default;

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
    MCNAPI uint64 getIngredientsHashOffset(int simulatedWidth, int simulatedHeight, int offsetX, int offsetY) const;

    MCNAPI bool matches(::CraftingContainer const& craftSlots, int xOffs, int yOffs, bool xFlip) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::ItemInstance> const& $assemble(::CraftingContainer&, ::CraftingContext&) const;

    MCNAPI int $getCraftingSize() const;

    MCNAPI ::RecipeIngredient const& $getIngredient(int x, int y) const;

    MCNAPI bool $isShapeless() const;

    MCNAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const;

    MCNAPI int $size() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
