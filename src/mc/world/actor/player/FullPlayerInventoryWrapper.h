#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class FullPlayerInventoryWrapper {

public:
    // prevent constructor by default
    FullPlayerInventoryWrapper& operator=(FullPlayerInventoryWrapper const&) = delete;
    FullPlayerInventoryWrapper(FullPlayerInventoryWrapper const&)            = delete;
    FullPlayerInventoryWrapper()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0FullPlayerInventoryWrapper\@\@QEAA\@AEAVPlayerInventory\@\@AEAVSimpleContainer\@\@1PEAVInventoryTransactionManager\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI
    FullPlayerInventoryWrapper(class PlayerInventory&, class SimpleContainer&, class SimpleContainer&, class InventoryTransactionManager*, class Player*);
    /**
     * @symbol ?clearAllItems\@FullPlayerInventoryWrapper\@\@QEAAHXZ
     */
    MCAPI int32_t clearAllItems();
    /**
     * @symbol ?getItemCount\@FullPlayerInventoryWrapper\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int32_t getItemCount(std::function<bool(class ItemStack const&)>);
    /**
     * @symbol
     * ?removeResource\@FullPlayerInventoryWrapper\@\@QEAAHAEBVItemStack\@\@V?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@_NH\@Z
     */
    MCAPI int32_t removeResource(class ItemStack const&, std::function<bool(class ItemStack const&)>, bool, int32_t);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_clearSimpleContainerItem\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@W4ContainerID\@\@H\@Z
     */
    MCAPI int32_t _clearSimpleContainerItem(class SimpleContainer&, enum class ContainerID, int32_t);
    /**
     * @symbol
     * ?_getSimpleContainerItemCount\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@HV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int32_t
    _getSimpleContainerItemCount(class SimpleContainer&, int32_t, std::function<bool(class ItemStack const&)>);
    /**
     * @symbol ?_removeCursorItem\@FullPlayerInventoryWrapper\@\@AEAAHAEBVItemStack\@\@_NH\@Z
     */
    MCAPI int32_t _removeCursorItem(class ItemStack const&, bool, int32_t);
    /**
     * @symbol
     * ?_removeSimpleContainerItem\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@W4ContainerID\@\@HAEBVItemStack\@\@_NH\@Z
     */
    MCAPI int32_t _removeSimpleContainerItem(
        class SimpleContainer&,
        enum class ContainerID,
        int32_t,
        class ItemStack const&,
        bool,
        int32_t
    );
    /**
     * @symbol ?_sendCursorSlotPacket\@FullPlayerInventoryWrapper\@\@AEBAXXZ
     */
    MCAPI void _sendCursorSlotPacket() const;
    // NOLINTEND
};
