#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/transaction/InventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class EntityContext;
class Player;
// clang-format on

class ComplexInventoryTransaction {
public:
    // ComplexInventoryTransaction inner types define
    enum class Type : uint {
        NormalTransaction          = 0,
        InventoryMismatch          = 1,
        ItemUseTransaction         = 2,
        ItemUseOnEntityTransaction = 3,
        ItemReleaseTransaction     = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ComplexInventoryTransaction::Type> mType;
    ::ll::TypedStorage<8, 88, ::InventoryTransaction>             mTransaction;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComplexInventoryTransaction() = default;

    virtual void postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    virtual ::InventoryTransactionError handle(::Player& player, bool isSenderAuthority) const;

    virtual void onTransactionError(::Player& player, ::InventoryTransactionError error) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _setDepenetrationOverride(::EntityContext& entity);

    MCAPI static ::std::unique_ptr<::ComplexInventoryTransaction>
    fromType(::ComplexInventoryTransaction::Type type, ::InventoryTransaction const& transaction);

    MCNAPI static ::std::string const getTransactionTypeName(::ComplexInventoryTransaction::Type type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<::ComplexInventoryTransaction::Type, ::std::string> const&
    transactionTypeMap();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCNAPI ::InventoryTransactionError $handle(::Player& player, bool isSenderAuthority) const;

    MCNAPI void $onTransactionError(::Player& player, ::InventoryTransactionError error) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
