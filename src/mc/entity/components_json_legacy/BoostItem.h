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
    ::ll::UntypedStorage<8, 16> mUnk2e488f;
    ::ll::UntypedStorage<8, 16> mUnk9187b0;
    ::ll::UntypedStorage<4, 4>  mUnkc812af;
    // NOLINTEND

public:
    // prevent constructor by default
    BoostItem& operator=(BoostItem const&);
    BoostItem(BoostItem const&);
    BoostItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setReplacementItemDescriptor(::ItemDescriptor const& replacementItemDescriptor);

    MCAPI ~BoostItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
