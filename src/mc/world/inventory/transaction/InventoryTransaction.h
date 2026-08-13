#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/transaction/InventorySource.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class InventoryAction;
class InventoryTransactionItemGroup;
class ItemStack;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class InventoryTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::InventorySource, ::std::vector<::InventoryAction>>> mActions;
    ::ll::TypedStorage<8, 24, ::std::vector<::InventoryTransactionItemGroup>>                            mContents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAction(::InventoryAction const& action);

    MCAPI void addItemToContent(::ItemStack const& item, int count);

#ifdef LL_PLAT_C
    MCAPI ::InventoryTransactionError executeFull(::Player& p, bool isSenderAuthority) const;
#endif

    MCAPI void forceBalanceTransaction();

#ifdef LL_PLAT_C
    MCAPI void recalculateBalance();

    MCAPI ::InventoryTransactionError verifyFull(::Player& p, bool isSenderAuthority) const;
#endif

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~InventoryTransaction();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool checkTransactionItemsMatch(::ItemStack const& serverItem, ::ItemStack const& clientItem);

    MCAPI static ::Bedrock::Result<::InventoryTransaction> deserialize(::ReadOnlyBinaryStream& stream);

    MCAPI static ::std::string const getInventoryTransactionErrorName(::InventoryTransactionError type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::InventoryTransactionError, ::std::string> const&
    inventoryTransactionErrorMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
