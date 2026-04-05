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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    UserDataShapelessRecipe();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    UserDataShapelessRecipe& operator=(UserDataShapelessRecipe const&);
    UserDataShapelessRecipe(UserDataShapelessRecipe const&);
    UserDataShapelessRecipe();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const
        /*override*/;

    virtual bool itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs) const /*override*/;

    virtual ~UserDataShapelessRecipe() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI UserDataShapelessRecipe(::UserDataShapelessRecipe&&);
#endif

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
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::UserDataShapelessRecipe&&);
#endif

    MCAPI void* $ctor(::Recipe::ConstructionContext&& context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
