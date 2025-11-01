#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
namespace mce { class UUID; }
// clang-format on

class UserDataShapelessRecipe : public ::ShapelessRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mResults;
    // NOLINTEND

public:
    // prevent constructor by default
    UserDataShapelessRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const /*override*/;

    // vIndex: 13
    virtual bool itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs) const /*override*/;

    // vIndex: 0
    virtual ~UserDataShapelessRecipe() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UserDataShapelessRecipe(::Recipe::ConstructionContext&& context);

    MCAPI bool _itemShouldKeepUserData(::ItemStack const& item) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Recipe::ConstructionContext&& context);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::ItemInstance> const& $assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const;

    MCAPI bool $itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
