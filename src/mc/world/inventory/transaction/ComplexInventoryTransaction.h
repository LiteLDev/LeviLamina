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
    // vIndex: 0, symbol: ??1ComplexInventoryTransaction@@UEAA@XZ
    virtual ~ComplexInventoryTransaction();

    // vIndex: 1, symbol:
    // ?read@ComplexInventoryTransaction@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 2, symbol: ?write@ComplexInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 3, symbol: ?postLoadItems@ComplexInventoryTransaction@@UEAAXAEAVBlockPalette@@_N@Z
    virtual void postLoadItems(class BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4, symbol: ?handle@ComplexInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
    virtual ::InventoryTransactionError handle(class Player& player, bool isSenderAuthority) const;

    // vIndex: 5, symbol:
    // ?onTransactionError@ComplexInventoryTransaction@@UEBAXAEAVPlayer@@W4InventoryTransactionError@@@Z
    virtual void onTransactionError(class Player& player, ::InventoryTransactionError error) const;

    // symbol: ??0ComplexInventoryTransaction@@QEAA@W4Type@0@@Z
    MCAPI explicit ComplexInventoryTransaction(::ComplexInventoryTransaction::Type);

    // symbol:
    // ?fromType@ComplexInventoryTransaction@@SA?AV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@W4Type@1@@Z
    MCAPI static std::unique_ptr<class ComplexInventoryTransaction> fromType(::ComplexInventoryTransaction::Type type);

    // symbol:
    // ?fromType@ComplexInventoryTransaction@@SA?AV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@W4Type@1@AEBVInventoryTransaction@@@Z
    MCAPI static std::unique_ptr<class ComplexInventoryTransaction>
    fromType(::ComplexInventoryTransaction::Type type, class InventoryTransaction const& transaction);

    // symbol:
    // ?getTransactionTypeName@ComplexInventoryTransaction@@SA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@1@@Z
    MCAPI static std::string const getTransactionTypeName(::ComplexInventoryTransaction::Type);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_setDepenetrationOverride@ComplexInventoryTransaction@@IEBAXAEAVEntityContext@@@Z
    MCAPI void _setDepenetrationOverride(class EntityContext&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?transactionTypeMap@ComplexInventoryTransaction@@0V?$BidirectionalUnorderedMap@W4Type@ComplexInventoryTransaction@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
    MCAPI static class BidirectionalUnorderedMap<::ComplexInventoryTransaction::Type, std::string> const
        transactionTypeMap;

    // NOLINTEND
};
