#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FullPlayerInventoryWrapper {

public:
    // prevent constructor by default
    FullPlayerInventoryWrapper& operator=(FullPlayerInventoryWrapper const&) = delete;
    FullPlayerInventoryWrapper(FullPlayerInventoryWrapper const&)            = delete;
    FullPlayerInventoryWrapper()                                             = delete;

public:
    /**
     * @symbol
     * ??0FullPlayerInventoryWrapper\@\@QEAA\@AEAVPlayerInventory\@\@AEAVSimpleContainer\@\@1PEAVInventoryTransactionManager\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI
    FullPlayerInventoryWrapper(class PlayerInventory&, class SimpleContainer&, class SimpleContainer&, class InventoryTransactionManager*, class Player*); // NOLINT
    /**
     * @symbol ?clearAllItems\@FullPlayerInventoryWrapper\@\@QEAAHXZ
     */
    MCAPI int clearAllItems(); // NOLINT
    /**
     * @symbol ?getItemCount\@FullPlayerInventoryWrapper\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int getItemCount(class std::function<bool(class ItemStack const&)>); // NOLINT
    /**
     * @symbol
     * ?removeResource\@FullPlayerInventoryWrapper\@\@QEAAHAEBVItemStack\@\@V?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@_NH\@Z
     */
    MCAPI int
    removeResource(class ItemStack const&, class std::function<bool(class ItemStack const&)>, bool, int); // NOLINT

    // private:
    /**
     * @symbol
     * ?_clearSimpleContainerItem\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@W4ContainerID\@\@H\@Z
     */
    MCAPI int _clearSimpleContainerItem(class SimpleContainer&, enum class ContainerID, int); // NOLINT
    /**
     * @symbol
     * ?_getSimpleContainerItemCount\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@HV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int
    _getSimpleContainerItemCount(class SimpleContainer&, int, class std::function<bool(class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?_removeCursorItem\@FullPlayerInventoryWrapper\@\@AEAAHAEBVItemStack\@\@_NH\@Z
     */
    MCAPI int _removeCursorItem(class ItemStack const&, bool, int); // NOLINT
    /**
     * @symbol
     * ?_removeSimpleContainerItem\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@W4ContainerID\@\@HAEBVItemStack\@\@_NH\@Z
     */
    MCAPI int _removeSimpleContainerItem(
        class SimpleContainer&,
        enum class ContainerID,
        int,
        class ItemStack const&,
        bool,
        int
    ); // NOLINT
    /**
     * @symbol ?_sendCursorSlotPacket\@FullPlayerInventoryWrapper\@\@AEBAXXZ
     */
    MCAPI void _sendCursorSlotPacket() const; // NOLINT

private:
};
