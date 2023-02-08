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
     * @hash   1434228299
     * @vftbl  2
     * @symbol  ?serverInitItemStackIds\@FillingContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -382984970
     * @vftbl  5
     * @symbol  ?getItem\@FillingContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @hash   -116721921
     * @vftbl  9
     * @symbol  ?setItem\@FillingContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @hash   763837686
     * @vftbl  10
     * @symbol  ?setItemWithForceBalance\@FillingContainer\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @hash   1367322972
     * @vftbl  11
     * @symbol  ?removeItem\@FillingContainer\@\@UEAAXHH\@Z
     */
    virtual void removeItem(int, int);
    /**
     * @hash   -1182640539
     * @vftbl  14
     * @symbol  ?getContainerSize\@FillingContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @hash   920993492
     * @vftbl  15
     * @symbol  ?getMaxStackSize\@FillingContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const;
    /**
     * @hash   -1312018366
     * @vftbl  16
     * @symbol  ?startOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @hash   -288556958
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
     * @hash   831695727
     * @vftbl  33
     * @symbol  ?add\@FillingContainer\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @hash   -689337413
     * @vftbl  34
     * @symbol  ?canAdd\@FillingContainer\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool canAdd(class ItemStack const &) const;
    /**
     * @hash   -1905926369
     * @vftbl  35
     * @symbol  ?clearSlot\@FillingContainer\@\@UEAAXH\@Z
     */
    virtual void clearSlot(int);
    /**
     * @hash   -178313770
     * @vftbl  36
     * @symbol  ?clearInventory\@FillingContainer\@\@UEAAHH\@Z
     */
    virtual int clearInventory(int);
    /**
     * @hash   -271130938
     * @vftbl  37
     * @symbol  ?load\@FillingContainer\@\@UEAAXAEBVListTag\@\@AEBVSemVersion\@\@AEAVLevel\@\@\@Z
     */
    virtual void load(class ListTag const &, class SemVersion const &, class Level &);
    /**
     * @hash   -346313734
     * @vftbl  38
     * @symbol  ?getEmptySlotsCount\@FillingContainer\@\@UEBAHXZ
     */
    virtual int getEmptySlotsCount() const;
    /**
     * @hash   -1986856120
     * @symbol  ??0FillingContainer\@\@QEAA\@PEAVPlayer\@\@HW4ContainerType\@\@\@Z
     */
    MCAPI FillingContainer(class Player *, int, enum class ContainerType);
    /**
     * @hash   1691310406
     * @symbol  ?getHotbarSize\@FillingContainer\@\@QEBAHXZ
     */
    MCAPI int getHotbarSize() const;
    /**
     * @hash   134580729
     * @symbol  ?getSlotWithItem\@FillingContainer\@\@QEBAHAEBVItemStack\@\@_N1\@Z
     */
    MCAPI int getSlotWithItem(class ItemStack const &, bool, bool) const;
    /**
     * @hash   -1274492913
     * @symbol  ?hasResource\@FillingContainer\@\@QEAA_NH\@Z
     */
    MCAPI bool hasResource(int);
    /**
     * @hash   380840244
     * @symbol  ??4FillingContainer\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class FillingContainer & operator=(class FillingContainer const &);
    /**
     * @hash   1103177984
     * @symbol  ?removeResource\@FillingContainer\@\@QEAAHAEBVItemStack\@\@_N1H\@Z
     */
    MCAPI int removeResource(class ItemStack const &, bool, bool, int);
    /**
     * @hash   724370461
     * @symbol  ?removeResource\@FillingContainer\@\@QEAA_NH\@Z
     */
    MCAPI bool removeResource(int);
    /**
     * @hash   -1038365516
     * @symbol  ?save\@FillingContainer\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save() const;
    /**
     * @hash   -770931909
     * @symbol  ?swapSlots\@FillingContainer\@\@QEAAXHH\@Z
     */
    MCAPI void swapSlots(int, int);

//protected:
    /**
     * @hash   -922693762
     * @symbol  ?_addResource\@FillingContainer\@\@IEAAHAEBVItemStack\@\@\@Z
     */
    MCAPI int _addResource(class ItemStack const &);
    /**
     * @hash   1810960999
     * @symbol  ?_doDrop\@FillingContainer\@\@IEAAXAEAVItemStack\@\@_N\@Z
     */
    MCAPI void _doDrop(class ItemStack &, bool);
    /**
     * @hash   -762229439
     * @symbol  ?_fixBackwardCompabilityItem\@FillingContainer\@\@IEAAXAEAVItemStack\@\@\@Z
     */
    MCAPI void _fixBackwardCompabilityItem(class ItemStack &);
    /**
     * @hash   -1922508379
     * @symbol  ?_getEmptySlotsCount\@FillingContainer\@\@IEBAHHH\@Z
     */
    MCAPI int _getEmptySlotsCount(int, int) const;
    /**
     * @hash   846292262
     * @symbol  ?_getFreeSlot\@FillingContainer\@\@IEBAHXZ
     */
    MCAPI int _getFreeSlot() const;
    /**
     * @hash   1780193683
     * @symbol  ?_getSlot\@FillingContainer\@\@IEBAHH\@Z
     */
    MCAPI int _getSlot(int) const;
    /**
     * @hash   -1170501582
     * @symbol  ?_getSlotWithRemainingSpace\@FillingContainer\@\@IEBAHAEBVItemStack\@\@\@Z
     */
    MCAPI int _getSlotWithRemainingSpace(class ItemStack const &) const;
    /**
     * @hash   -162797358
     * @symbol  ?_isCreative\@FillingContainer\@\@IEBA_NXZ
     */
    MCAPI bool _isCreative() const;
    /**
     * @hash   -1338366554
     * @symbol  ?_release\@FillingContainer\@\@IEAAXH\@Z
     */
    MCAPI void _release(int);

protected:

};