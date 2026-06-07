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
    ::ll::TypedStorage<8, 8, ::Player&>                                 mPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::InventoryTransaction>> mCurrentTransaction;
    ::ll::TypedStorage<8, 24, ::std::vector<::InventoryAction>>         mExpectedActions;
    ::ll::TypedStorage<1, 1, bool>                                      mEnableLogs;
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

    MCFOLD void _logExpectedActions() const;

    MCAPI void addAction(::InventoryAction const& action, bool forceBalanced);

    MCAPI void addExpectedAction(::InventoryAction const& action);

    MCAPI bool checkActionExpected(::InventoryAction const& action);

    MCAPI void forceBalanceTransaction();

    MCFOLD ::std::unique_ptr<::InventoryTransaction> const& getCurrentTransaction() const;

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
