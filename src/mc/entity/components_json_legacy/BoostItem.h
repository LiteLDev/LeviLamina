#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

struct BoostItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mItemDescriptor;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mReplacementItemDescriptor;
    ::ll::TypedStorage<4, 4, int>               mDamageAmount;
    // NOLINTEND

public:
    // prevent constructor by default
    BoostItem& operator=(BoostItem const&);
    BoostItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BoostItem(::BoostItem const&);

    MCAPI void setReplacementItemDescriptor(::ItemDescriptor const& replacementItemDescriptor);

    MCAPI ~BoostItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::BoostItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
