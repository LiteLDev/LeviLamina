#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/transaction/InventoryTransaction.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/enums/InventoryTransactionError.h"

class ComplexInventoryTransaction {
public:
    // ComplexInventoryTransaction inner types define
    enum class Type : int {
        NormalTransaction          = 0x0,
        InventoryMismatch          = 0x1,
        ItemUseTransaction         = 0x2,
        ItemUseOnEntityTransaction = 0x3,
        ItemReleaseTransaction     = 0x4,
    };

    Type                 type;
    InventoryTransaction data;

public:
    // prevent constructor by default
    ComplexInventoryTransaction& operator=(ComplexInventoryTransaction const&);
    ComplexInventoryTransaction(ComplexInventoryTransaction const&);
    ComplexInventoryTransaction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ComplexInventoryTransaction();

    // vIndex: 1
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 2
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 3
    virtual void postLoadItems(class BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4
    virtual ::InventoryTransactionError handle(class Player& player, bool isSenderAuthority) const;

    // vIndex: 5
    virtual void onTransactionError(class Player& player, ::InventoryTransactionError error) const;

    MCAPI explicit ComplexInventoryTransaction(::ComplexInventoryTransaction::Type);

    MCAPI static std::unique_ptr<class ComplexInventoryTransaction> fromType(::ComplexInventoryTransaction::Type type);

    MCAPI static std::unique_ptr<class ComplexInventoryTransaction>
    fromType(::ComplexInventoryTransaction::Type type, class InventoryTransaction const& transaction);

    MCAPI static std::string const getTransactionTypeName(::ComplexInventoryTransaction::Type);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _setDepenetrationOverride(class EntityContext&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::ComplexInventoryTransaction::Type, std::string> const
        transactionTypeMap;

    // NOLINTEND
};
