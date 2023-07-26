/**
 * @file  FullPlayerInventoryWrapper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FullPlayerInventoryWrapper.
 *
 */
class FullPlayerInventoryWrapper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FULLPLAYERINVENTORYWRAPPER
public:
    class FullPlayerInventoryWrapper& operator=(class FullPlayerInventoryWrapper const &) = delete;
    FullPlayerInventoryWrapper(class FullPlayerInventoryWrapper const &) = delete;
    FullPlayerInventoryWrapper() = delete;
#endif

public:
    /**
     * @symbol  ??0FullPlayerInventoryWrapper\@\@QEAA\@AEAVPlayerInventory\@\@AEAVSimpleContainer\@\@1PEAVInventoryTransactionManager\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI FullPlayerInventoryWrapper(class PlayerInventory &, class SimpleContainer &, class SimpleContainer &, class InventoryTransactionManager *, class Player *);
    /**
     * @symbol  ?clearAllItems\@FullPlayerInventoryWrapper\@\@QEAAHXZ
     */
    MCAPI int clearAllItems();
    /**
     * @symbol  ?getItemCount\@FullPlayerInventoryWrapper\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @symbol  ?removeResource\@FullPlayerInventoryWrapper\@\@QEAAHAEBVItemStack\@\@V?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@_NH\@Z
     */
    MCAPI int removeResource(class ItemStack const &, class std::function<bool (class ItemStack const &)>, bool, int);

//private:
    /**
     * @symbol  ?_clearSimpleContainerItem\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@W4ContainerID\@\@H\@Z
     */
    MCAPI int _clearSimpleContainerItem(class SimpleContainer &, enum class ContainerID, int);
    /**
     * @symbol  ?_getSimpleContainerItemCount\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@HV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int _getSimpleContainerItemCount(class SimpleContainer &, int, class std::function<bool (class ItemStack const &)>);
    /**
     * @symbol  ?_removeCursorItem\@FullPlayerInventoryWrapper\@\@AEAAHAEBVItemStack\@\@_NH\@Z
     */
    MCAPI int _removeCursorItem(class ItemStack const &, bool, int);
    /**
     * @symbol  ?_removeSimpleContainerItem\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@W4ContainerID\@\@HAEBVItemStack\@\@_NH\@Z
     */
    MCAPI int _removeSimpleContainerItem(class SimpleContainer &, enum class ContainerID, int, class ItemStack const &, bool, int);
    /**
     * @symbol  ?_sendCursorSlotPacket\@FullPlayerInventoryWrapper\@\@AEBAXXZ
     */
    MCAPI void _sendCursorSlotPacket() const;

private:

};