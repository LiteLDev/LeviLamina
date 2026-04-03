#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on

struct RepairItemEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mItems;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                mRepairAmount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RepairItemEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
