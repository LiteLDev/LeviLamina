#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class InventoryAction;
class InventorySource;
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
    // prevent constructor by default
    InventoryTransaction& operator=(InventoryTransaction const&);
    InventoryTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventoryTransaction(::InventoryTransaction const&);

    MCAPI void _logTransaction(bool isClientSide) const;

    MCAPI void addAction(::InventoryAction const& action);

    MCAPI void addItemToContent(::ItemStack const& item, int count);

    MCAPI ::InventoryTransactionError executeFull(::Player& p, bool isSenderAuthority) const;

    MCAPI void forceBalanceTransaction();

    MCAPI ::std::vector<::InventoryAction> const& getActions(::InventorySource const& source) const;

    MCAPI void postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCAPI void serialize(::BinaryStream& stream, bool isClientSide) const;

    MCAPI ::InventoryTransactionError verifyFull(::Player& p, bool isSenderAuthority) const;

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::InventoryTransaction const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
