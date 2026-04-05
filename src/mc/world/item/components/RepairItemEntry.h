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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    RepairItemEntry(RepairItemEntry const&);
    RepairItemEntry();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ::RepairItemEntry& operator=(::RepairItemEntry const&);
#endif

    MCAPI ~RepairItemEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
