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
    // member functions
    // NOLINTBEGIN
    MCAPI void setReplacementItemDescriptor(::ItemDescriptor const& replacementItemDescriptor);
    // NOLINTEND
};
