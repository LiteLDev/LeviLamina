#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemReleaseInventoryTransaction {
public:
    // ItemReleaseInventoryTransaction inner types declare
    // clang-format off

    // clang-format on

    // ItemReleaseInventoryTransaction inner types define
    enum class ActionType {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMRELEASEINVENTORYTRANSACTION
public:
    ItemReleaseInventoryTransaction& operator=(ItemReleaseInventoryTransaction const&) = delete;
    ItemReleaseInventoryTransaction(ItemReleaseInventoryTransaction const&)            = delete;
    ItemReleaseInventoryTransaction()                                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?read\@ItemReleaseInventoryTransaction\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @vftbl 2
     * @symbol ?write\@ItemReleaseInventoryTransaction\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 3
     * @symbol ?postLoadItems\@ItemReleaseInventoryTransaction\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    virtual void postLoadItems(class BlockPalette&, bool);
    /**
     * @vftbl 4
     * @symbol ?handle\@ItemReleaseInventoryTransaction\@\@UEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    virtual enum class InventoryTransactionError handle(class Player&, bool) const;
    /**
     * @vftbl 5
     * @symbol
     * ?onTransactionError\@ItemReleaseInventoryTransaction\@\@UEBAXAEAVPlayer\@\@W4InventoryTransactionError\@\@\@Z
     */
    virtual void onTransactionError(class Player&, enum class InventoryTransactionError) const;
};
