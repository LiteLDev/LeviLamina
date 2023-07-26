#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

class ItemUseInventoryTransaction {
public:
    // ItemUseInventoryTransaction inner types declare
    // clang-format off

    // clang-format on

    // ItemUseInventoryTransaction inner types define
    enum class ActionType {};

public:
    // prevent constructor by default
    ItemUseInventoryTransaction() = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?read\@ItemUseInventoryTransaction\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?write\@ItemUseInventoryTransaction\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?postLoadItems\@ItemUseInventoryTransaction\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    virtual void postLoadItems(class BlockPalette&, bool); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?handle\@ItemUseInventoryTransaction\@\@UEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    virtual enum class InventoryTransactionError handle(class Player&, bool) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?onTransactionError\@ItemUseInventoryTransaction\@\@UEBAXAEAVPlayer\@\@W4InventoryTransactionError\@\@\@Z
     */
    virtual void onTransactionError(class Player&, enum class InventoryTransactionError) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMUSEINVENTORYTRANSACTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemUseInventoryTransaction(); // NOLINT
#endif
    /**
     * @symbol ??0ItemUseInventoryTransaction\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemUseInventoryTransaction(class ItemUseInventoryTransaction const&); // NOLINT
    /**
     * @symbol ??4ItemUseInventoryTransaction\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemUseInventoryTransaction& operator=(class ItemUseInventoryTransaction const&); // NOLINT
    /**
     * @symbol ?resendBlocksAroundArea\@ItemUseInventoryTransaction\@\@QEBAXAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI void resendBlocksAroundArea(class Player&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @symbol ?resendPlayerState\@ItemUseInventoryTransaction\@\@QEBAXAEAVPlayer\@\@\@Z
     */
    MCAPI void resendPlayerState(class Player&) const; // NOLINT
    /**
     * @symbol ?setSelectedItem\@ItemUseInventoryTransaction\@\@QEAAAEAV1\@AEBVItemStack\@\@\@Z
     */
    MCAPI class ItemUseInventoryTransaction& setSelectedItem(class ItemStack const&); // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?actionTypeMap\@ItemUseInventoryTransaction\@\@0V?$BidirectionalUnorderedMap\@W4ActionType\@ItemUseInventoryTransaction\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemUseInventoryTransaction::ActionType, std::string> const
        actionTypeMap; // NOLINT
};
