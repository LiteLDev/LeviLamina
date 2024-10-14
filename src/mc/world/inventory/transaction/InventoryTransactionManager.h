#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryTransactionManager {
public:
    // prevent constructor by default
    InventoryTransactionManager& operator=(InventoryTransactionManager const&);
    InventoryTransactionManager(InventoryTransactionManager const&);
    InventoryTransactionManager();

public:
    // NOLINTBEGIN
    MCAPI explicit InventoryTransactionManager(class Player& player);

    MCAPI void _createServerSideAction(class ItemStack const& oldItem, class ItemStack const& newItem);

    MCAPI void _logExpectedActions() const;

    MCAPI void addAction(class InventoryAction const& action, bool forceBalanced);

    MCAPI void addExpectedAction(class InventoryAction const& action);

    MCAPI void forceBalanceTransaction();

    MCAPI std::unique_ptr<class InventoryTransaction> const& getCurrentTransaction() const;

    MCAPI void reset();

    MCAPI void resetExpectedActions();

    MCAPI ~InventoryTransactionManager();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
