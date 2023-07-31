#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/transaction/InventoryTransaction.h"

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
    ComplexInventoryTransaction& operator=(ComplexInventoryTransaction const&) = delete;
    ComplexInventoryTransaction(ComplexInventoryTransaction const&)            = delete;
    ComplexInventoryTransaction()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?read\@ComplexInventoryTransaction\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @vftbl 2
     * @symbol ?write\@ComplexInventoryTransaction\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 3
     * @symbol ?postLoadItems\@ComplexInventoryTransaction\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    virtual void postLoadItems(class BlockPalette&, bool);
    /**
     * @vftbl 4
     * @symbol ?handle\@ComplexInventoryTransaction\@\@UEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    virtual enum class InventoryTransactionError handle(class Player&, bool) const;
    /**
     * @vftbl 5
     * @symbol ?onTransactionError\@ComplexInventoryTransaction\@\@UEBAXAEAVPlayer\@\@W4InventoryTransactionError\@\@\@Z
     */
    virtual void onTransactionError(class Player&, enum class InventoryTransactionError) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPLEXINVENTORYTRANSACTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ComplexInventoryTransaction();
#endif
    /**
     * @symbol ??0ComplexInventoryTransaction\@\@QEAA\@W4Type\@0\@\@Z
     */
    MCAPI ComplexInventoryTransaction(enum class ComplexInventoryTransaction::Type);
    /**
     * @symbol
     * ?fromType\@ComplexInventoryTransaction\@\@SA?AV?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@W4Type\@1\@AEBVInventoryTransaction\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ComplexInventoryTransaction>
    fromType(enum class ComplexInventoryTransaction::Type, class InventoryTransaction const&);
    /**
     * @symbol
     * ?fromType\@ComplexInventoryTransaction\@\@SA?AV?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@W4Type\@1\@\@Z
     */
    MCAPI static std::unique_ptr<class ComplexInventoryTransaction>
        fromType(enum class ComplexInventoryTransaction::Type);
    /**
     * @symbol
     * ?getTransactionTypeName\@ComplexInventoryTransaction\@\@SA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Type\@1\@\@Z
     */
    MCAPI static std::string const getTransactionTypeName(enum class ComplexInventoryTransaction::Type);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?transactionTypeMap\@ComplexInventoryTransaction\@\@0V?$BidirectionalUnorderedMap\@W4Type\@ComplexInventoryTransaction\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ComplexInventoryTransaction::Type, std::string> const
        transactionTypeMap;
    // NOLINTEND
};
