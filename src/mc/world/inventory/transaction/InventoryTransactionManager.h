#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InventoryAction;
class InventoryTransaction;
class ItemStack;
class Player;
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
    MCAPI explicit InventoryTransactionManager(::Player& player);

    MCAPI void _createServerSideAction(::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI void _logExpectedActions() const;

    MCAPI void addAction(::InventoryAction const& action, bool forceBalanced);

    MCAPI void addExpectedAction(::InventoryAction const& action);

    MCAPI void forceBalanceTransaction();

    MCAPI ::std::unique_ptr<::InventoryTransaction> const& getCurrentTransaction() const;

    MCAPI void reset();

    MCAPI void resetExpectedActions();

    MCAPI ~InventoryTransactionManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
