/**
 * @file  InventoryAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "InventorySource.hpp"
#include "NetworkItemStackDescriptor.hpp"
#include "ItemStack.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryAction.
 *
 */
class InventoryAction {

#define AFTER_EXTRA
// Add Member There
public:
    InventorySource source;                    // 0
    uint32_t slot;                             // 12
    NetworkItemStackDescriptor fromDescriptor; // 16
    NetworkItemStackDescriptor toDescriptor;   // 112
    ItemStack fromItem;                        // 208
    ItemStack toItem;                          // 368

private:
    inline void test()
    {
        static_assert(offsetof(InventoryAction, slot) == 12);
        static_assert(offsetof(InventoryAction, fromDescriptor) == 16);
        static_assert(offsetof(InventoryAction, toDescriptor) == 112);
        static_assert(offsetof(InventoryAction, fromItem) == 208);
        static_assert(offsetof(InventoryAction, toItem) == 368);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYACTION
public:
    class InventoryAction& operator=(class InventoryAction const &) = delete;
    InventoryAction() = delete;
#endif

public:
    /**
     * @symbol  ??0InventoryAction\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI InventoryAction(class InventoryAction const &);
    /**
     * @symbol  ?postLoadItems\@InventoryAction\@\@QEAAXAEAVBlockPalette\@\@_N\@Z
     */
    MCAPI void postLoadItems(class BlockPalette &, bool);
    /**
     * @symbol  ??1InventoryAction\@\@QEAA\@XZ
     */
    MCAPI ~InventoryAction();

};