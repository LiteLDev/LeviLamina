#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on

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
    MCAPI BoostItem(::BoostItem const&);

    MCAPI void setReplacementItemDescriptor(::ItemDescriptor const& replacementItemDescriptor);

    MCAPI ~BoostItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BoostItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
