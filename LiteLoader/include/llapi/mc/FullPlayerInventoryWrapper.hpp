/**
 * @file  FullPlayerInventoryWrapper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1469635917
     * @symbol  ??0FullPlayerInventoryWrapper\@\@QEAA\@AEAVPlayerInventory\@\@AEAVSimpleContainer\@\@1PEAVInventoryTransactionManager\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI FullPlayerInventoryWrapper(class PlayerInventory &, class SimpleContainer &, class SimpleContainer &, class InventoryTransactionManager *, class Player *);
    /**
     * @hash   1630639032
     * @symbol  ?clearAllItems\@FullPlayerInventoryWrapper\@\@QEAAHXZ
     */
    MCAPI int clearAllItems();
    /**
     * @hash   -1229797691
     * @symbol  ?getItemCount\@FullPlayerInventoryWrapper\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @hash   1209152916
     * @symbol  ?removeResource\@FullPlayerInventoryWrapper\@\@QEAAHAEBVItemStack\@\@V?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@_NH\@Z
     */
    MCAPI int removeResource(class ItemStack const &, class std::function<bool (class ItemStack const &)>, bool, int);

//private:
    /**
     * @hash   -1067452016
     * @symbol  ?_clearSimpleContainerItem\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@W4ContainerID\@\@H\@Z
     */
    MCAPI int _clearSimpleContainerItem(class SimpleContainer &, enum class ContainerID, int);
    /**
     * @hash   -214545861
     * @symbol  ?_getSimpleContainerItemCount\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@HV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int _getSimpleContainerItemCount(class SimpleContainer &, int, class std::function<bool (class ItemStack const &)>);
    /**
     * @hash   -745454999
     * @symbol  ?_removeCursorItem\@FullPlayerInventoryWrapper\@\@AEAAHAEBVItemStack\@\@_NH\@Z
     */
    MCAPI int _removeCursorItem(class ItemStack const &, bool, int);
    /**
     * @hash   1514466906
     * @symbol  ?_removeSimpleContainerItem\@FullPlayerInventoryWrapper\@\@AEAAHAEAVSimpleContainer\@\@W4ContainerID\@\@HAEBVItemStack\@\@_NH\@Z
     */
    MCAPI int _removeSimpleContainerItem(class SimpleContainer &, enum class ContainerID, int, class ItemStack const &, bool, int);
    /**
     * @hash   1591870199
     * @symbol  ?_sendCursorSlotPacket\@FullPlayerInventoryWrapper\@\@AEBAXXZ
     */
    MCAPI void _sendCursorSlotPacket() const;

private:

};