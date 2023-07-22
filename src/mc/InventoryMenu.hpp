/**
 * @file  InventoryMenu.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryMenu.
 *
 */
class InventoryMenu {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYMENU
public:
    class InventoryMenu& operator=(class InventoryMenu const &) = delete;
    InventoryMenu(class InventoryMenu const &) = delete;
    InventoryMenu() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYMENU
    /**
     * @symbol  ?_getContainer\@InventoryMenu\@\@MEBAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * _getContainer() const;
    /**
     * @symbol  ?getItemCopies\@InventoryMenu\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class ItemStack> getItemCopies() const;
    /**
     * @symbol  ?getSlot\@InventoryMenu\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getSlot(int) const;
    /**
     * @symbol  ?removeSlot\@InventoryMenu\@\@UEAAXHH\@Z
     */
    MCVAPI void removeSlot(int, int);
    /**
     * @symbol  ?serverInitItemStackIds\@InventoryMenu\@\@UEAAXXZ
     */
    MCVAPI void serverInitItemStackIds();
    /**
     * @symbol  ?setSlot\@InventoryMenu\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    MCVAPI void setSlot(int, class ItemStack const &, bool);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~InventoryMenu();
#endif
    /**
     * @symbol  ??0InventoryMenu\@\@QEAA\@AEAVPlayer\@\@PEAVContainer\@\@\@Z
     */
    MCAPI InventoryMenu(class Player &, class Container *);

};