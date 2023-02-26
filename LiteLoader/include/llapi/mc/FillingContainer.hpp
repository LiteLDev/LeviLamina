/**
 * @file  FillingContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Container.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FillingContainer.
 *
 */
class FillingContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILLINGCONTAINER
public:
    FillingContainer(class FillingContainer const &) = delete;
    FillingContainer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FillingContainer();
    /**
     * @vftbl  2
     * @symbol  ?serverInitItemStackIds\@FillingContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @vftbl  5
     * @symbol  ?getItem\@FillingContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @vftbl  9
     * @symbol  ?setItem\@FillingContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vftbl  10
     * @symbol  ?setItemWithForceBalance\@FillingContainer\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @vftbl  11
     * @symbol  ?removeItem\@FillingContainer\@\@UEAAXHH\@Z
     */
    virtual void removeItem(int, int);
    /**
     * @vftbl  14
     * @symbol  ?getContainerSize\@FillingContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @vftbl  15
     * @symbol  ?getMaxStackSize\@FillingContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const;
    /**
     * @vftbl  16
     * @symbol  ?startOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @vftbl  17
     * @symbol  ?stopOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player &);
    /**
     * @vftbl  22
     * @symbol  __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol  __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  33
     * @symbol  ?add\@FillingContainer\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @vftbl  34
     * @symbol  ?canAdd\@FillingContainer\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool canAdd(class ItemStack const &) const;
    /**
     * @vftbl  35
     * @symbol  ?clearSlot\@FillingContainer\@\@UEAAXH\@Z
     */
    virtual void clearSlot(int);
    /**
     * @vftbl  36
     * @symbol  ?clearInventory\@FillingContainer\@\@UEAAHH\@Z
     */
    virtual int clearInventory(int);
    /**
     * @vftbl  37
     * @symbol  ?load\@FillingContainer\@\@UEAAXAEBVListTag\@\@AEBVSemVersion\@\@AEAVLevel\@\@\@Z
     */
    virtual void load(class ListTag const &, class SemVersion const &, class Level &);
    /**
     * @vftbl  38
     * @symbol  ?getEmptySlotsCount\@FillingContainer\@\@UEBAHXZ
     */
    virtual int getEmptySlotsCount() const;
    /**
     * @symbol  ??0FillingContainer\@\@QEAA\@PEAVPlayer\@\@HW4ContainerType\@\@\@Z
     */
    MCAPI FillingContainer(class Player *, int, enum class ContainerType);
    /**
     * @symbol  ?getHotbarSize\@FillingContainer\@\@QEBAHXZ
     */
    MCAPI int getHotbarSize() const;
    /**
     * @symbol  ?getSlotWithItem\@FillingContainer\@\@QEBAHAEBVItemStack\@\@_N1\@Z
     */
    MCAPI int getSlotWithItem(class ItemStack const &, bool, bool) const;
    /**
     * @symbol  ?hasResource\@FillingContainer\@\@QEAA_NH\@Z
     */
    MCAPI bool hasResource(int);
    /**
     * @symbol  ??4FillingContainer\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class FillingContainer & operator=(class FillingContainer const &);
    /**
     * @symbol  ?removeResource\@FillingContainer\@\@QEAAHAEBVItemStack\@\@_N1H\@Z
     */
    MCAPI int removeResource(class ItemStack const &, bool, bool, int);
    /**
     * @symbol  ?removeResource\@FillingContainer\@\@QEAA_NH\@Z
     */
    MCAPI bool removeResource(int);
    /**
     * @symbol  ?save\@FillingContainer\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save() const;
    /**
     * @symbol  ?swapSlots\@FillingContainer\@\@QEAAXHH\@Z
     */
    MCAPI void swapSlots(int, int);

//protected:
    /**
     * @symbol  ?_addResource\@FillingContainer\@\@IEAAHAEBVItemStack\@\@\@Z
     */
    MCAPI int _addResource(class ItemStack const &);
    /**
     * @symbol  ?_doDrop\@FillingContainer\@\@IEAAXAEAVItemStack\@\@_N\@Z
     */
    MCAPI void _doDrop(class ItemStack &, bool);
    /**
     * @symbol  ?_fixBackwardCompabilityItem\@FillingContainer\@\@IEAAXAEAVItemStack\@\@\@Z
     */
    MCAPI void _fixBackwardCompabilityItem(class ItemStack &);
    /**
     * @symbol  ?_getEmptySlotsCount\@FillingContainer\@\@IEBAHHH\@Z
     */
    MCAPI int _getEmptySlotsCount(int, int) const;
    /**
     * @symbol  ?_getFreeSlot\@FillingContainer\@\@IEBAHXZ
     */
    MCAPI int _getFreeSlot() const;
    /**
     * @symbol  ?_getSlot\@FillingContainer\@\@IEBAHH\@Z
     */
    MCAPI int _getSlot(int) const;
    /**
     * @symbol  ?_getSlotWithRemainingSpace\@FillingContainer\@\@IEBAHAEBVItemStack\@\@\@Z
     */
    MCAPI int _getSlotWithRemainingSpace(class ItemStack const &) const;
    /**
     * @symbol  ?_isCreative\@FillingContainer\@\@IEBA_NXZ
     */
    MCAPI bool _isCreative() const;
    /**
     * @symbol  ?_release\@FillingContainer\@\@IEAAXH\@Z
     */
    MCAPI void _release(int);

protected:

};