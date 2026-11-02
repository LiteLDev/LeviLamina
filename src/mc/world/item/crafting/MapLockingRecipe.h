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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& CartographyTableID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const;

    MCNAPI ::std::vector<::ItemInstance> const&
    $assemble(::CraftingContainer& craftSlots, ::CraftingContext& craftingContext) const;

    MCNAPI ::std::vector<::ItemInstance> const& $getResultItems() const;

    MCNAPI int $getCraftingSize() const;

    MCNAPI ::RecipeIngredient const& $getIngredient(int x, int y) const;

    MCNAPI int $size() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
