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

class MapLockingRecipe : public ::MultiRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk56c855;
    ::ll::UntypedStorage<8, 8>  mUnkcdc078;
    // NOLINTEND

public:
    // prevent constructor by default
    MapLockingRecipe& operator=(MapLockingRecipe const&);
    MapLockingRecipe(MapLockingRecipe const&);
    MapLockingRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const
        /*override*/;

    // vIndex: 1
    virtual ::std::vector<::ItemInstance> const&
    assemble(::CraftingContainer& craftSlots, ::CraftingContext& craftingContext) const /*override*/;

    // vIndex: 8
    virtual ::std::vector<::ItemInstance> const& getResultItems() const /*override*/;

    // vIndex: 2
    virtual int getCraftingSize() const /*override*/;

    // vIndex: 3
    virtual ::RecipeIngredient const& getIngredient(int x, int y) const /*override*/;

    // vIndex: 6
    virtual int size() const /*override*/;

    // vIndex: 0
    virtual ~MapLockingRecipe() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MapLockingRecipe(::std::string const& recipeId, ::mce::UUID const& id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& CartographyTableID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& recipeId, ::mce::UUID const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const;

    MCAPI ::std::vector<::ItemInstance> const&
    $assemble(::CraftingContainer& craftSlots, ::CraftingContext& craftingContext) const;

    MCAPI ::std::vector<::ItemInstance> const& $getResultItems() const;

    MCAPI int $getCraftingSize() const;

    MCAPI ::RecipeIngredient const& $getIngredient(int x, int y) const;

    MCAPI int $size() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
