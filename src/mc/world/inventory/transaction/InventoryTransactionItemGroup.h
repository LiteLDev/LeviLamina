#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemStack;
// clang-format on

class InventoryTransactionItemGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mItemId;
    ::ll::TypedStorage<4, 4, int>                              mItemAux;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mTag;
    ::ll::TypedStorage<4, 4, int>                              mCount;
    ::ll::TypedStorage<1, 1, bool>                             mOverflow;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryTransactionItemGroup(InventoryTransactionItemGroup const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool equals(::ItemStack const& item) const;

    MCNAPI ::ItemStack getItemInstance() const;

    MCNAPI ::InventoryTransactionItemGroup& operator=(::InventoryTransactionItemGroup const& rhs);

    MCNAPI ~InventoryTransactionItemGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
