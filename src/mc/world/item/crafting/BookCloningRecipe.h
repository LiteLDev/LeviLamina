#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class ItemInstance;
class RecipeIngredient;
namespace mce { class UUID; }
// clang-format on

class BookCloningRecipe : public ::MultiRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke4c903;
    // NOLINTEND

public:
    // prevent constructor by default
    BookCloningRecipe& operator=(BookCloningRecipe const&);
    BookCloningRecipe(BookCloningRecipe const&);
    BookCloningRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const /*override*/;

    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const
        /*override*/;

    virtual ::std::vector<::ItemInstance> const& getResultItems() const /*override*/;

    virtual int getCraftingSize() const /*override*/;

    virtual ::RecipeIngredient const& getIngredient(int x, int y) const /*override*/;

    virtual int size() const /*override*/;

    virtual ~BookCloningRecipe() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BookCloningRecipe(::std::string const& recipeId, ::mce::UUID const& uuid);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& recipeId, ::mce::UUID const& uuid);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const&) const;

    MCAPI ::std::vector<::ItemInstance> const& $assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const;

    MCFOLD ::std::vector<::ItemInstance> const& $getResultItems() const;

    MCFOLD int $getCraftingSize() const;

    MCFOLD ::RecipeIngredient const& $getIngredient(int x, int y) const;

    MCFOLD int $size() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
