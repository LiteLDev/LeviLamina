#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
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
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mResults;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                mOriginalMapId;
    // NOLINTEND

public:
    // prevent constructor by default
    MapLockingRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const
        /*override*/;

    virtual ::std::vector<::ItemInstance> const&
    assemble(::CraftingContainer& craftSlots, ::CraftingContext& craftingContext) const /*override*/;

    virtual ::std::vector<::ItemInstance> const& getResultItems() const /*override*/;

    virtual int getCraftingSize() const /*override*/;

    virtual ::RecipeIngredient const& getIngredient(int x, int y) const /*override*/;

    virtual int size() const /*override*/;

    virtual ~MapLockingRecipe() /*override*/ = default;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const;

    MCAPI ::std::vector<::ItemInstance> const&
    $assemble(::CraftingContainer& craftSlots, ::CraftingContext& craftingContext) const;

    MCFOLD ::std::vector<::ItemInstance> const& $getResultItems() const;

    MCFOLD int $getCraftingSize() const;

    MCFOLD ::RecipeIngredient const& $getIngredient(int x, int y) const;

    MCFOLD int $size() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
