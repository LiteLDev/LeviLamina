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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BoostItem(::BoostItem const&);

    MCNAPI void setReplacementItemDescriptor(::ItemDescriptor const& replacementItemDescriptor);

    MCNAPI ~BoostItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BoostItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
