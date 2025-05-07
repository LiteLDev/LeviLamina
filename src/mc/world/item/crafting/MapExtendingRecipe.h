#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class HashedString;
class ItemInstance;
class RecipeIngredient;
namespace mce { class UUID; }
// clang-format on

class MapExtendingRecipe : public ::MultiRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk75a6f4;
    // NOLINTEND

public:
    // prevent constructor by default
    MapExtendingRecipe& operator=(MapExtendingRecipe const&);
    MapExtendingRecipe(MapExtendingRecipe const&);
    MapExtendingRecipe();

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
    virtual ~MapExtendingRecipe() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _updateMapInstance(::ItemInstance& mapInstance, ::CraftingContext& craftingContext) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString _getTagForUUID(::mce::UUID const& uuid);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& CartographyTableID();

    MCAPI static ::mce::UUID const& CraftingTableID();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
