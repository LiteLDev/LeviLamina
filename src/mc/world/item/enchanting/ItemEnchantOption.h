#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/enchanting/ItemEnchants.h"

// auto generated forward declare list
// clang-format off
struct RecipeNetIdTag;
// clang-format on

class ItemEnchantOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>             mCost;
    ::ll::TypedStorage<8, 80, ::ItemEnchants> mEnchants;
    ::ll::TypedStorage<8, 32, ::std::string>  mEnchantName;
    ::ll::TypedStorage<4, 4, ::RecipeNetId>   mEnchantNetId;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemEnchantOption(ItemEnchantOption const&);
    ItemEnchantOption();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemEnchantOption(::ItemEnchantOption&&);

    MCAPI ::ItemEnchantOption& operator=(::ItemEnchantOption const&);

    MCAPI ~ItemEnchantOption();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemEnchantOption&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
