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

public:
    // prevent constructor by default
    ItemReleaseInventoryTransaction& operator=(ItemReleaseInventoryTransaction const&) = delete;
    ItemReleaseInventoryTransaction(ItemReleaseInventoryTransaction const&)            = delete;
    ItemReleaseInventoryTransaction()                                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?read\@ItemReleaseInventoryTransaction\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?write\@ItemReleaseInventoryTransaction\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?postLoadItems\@ItemReleaseInventoryTransaction\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    virtual void postLoadItems(class BlockPalette&, bool); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?handle\@ItemReleaseInventoryTransaction\@\@UEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    virtual enum class InventoryTransactionError handle(class Player&, bool) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?onTransactionError\@ItemReleaseInventoryTransaction\@\@UEBAXAEAVPlayer\@\@W4InventoryTransactionError\@\@\@Z
     */
    virtual void onTransactionError(class Player&, enum class InventoryTransactionError) const; // NOLINT
};
