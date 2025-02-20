#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InventoryAction;
class ItemStack;
// clang-format on

class InventoryTransactionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3df60a;
    ::ll::UntypedStorage<8, 8>  mUnk3a87e0;
    ::ll::UntypedStorage<8, 24> mUnkddc924;
    ::ll::UntypedStorage<1, 1>  mUnkda4522;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryTransactionManager& operator=(InventoryTransactionManager const&);
    InventoryTransactionManager(InventoryTransactionManager const&);
    InventoryTransactionManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _createServerSideAction(::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI void addAction(::InventoryAction const& action, bool forceBalanced);

    MCAPI void forceBalanceTransaction();

    MCAPI ~InventoryTransactionManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
