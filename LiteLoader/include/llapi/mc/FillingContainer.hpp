/**
 * @file  FillingContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~FillingContainer();
    /**
     * @hash   2078436571
     * @vftbl  2
     * @symbol ?serverInitItemStackIds@FillingContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   260608262
     * @vftbl  5
     * @symbol ?getItem@FillingContainer@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @hash   526686799
     * @vftbl  9
     * @symbol ?setItem@FillingContainer@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @hash   1407231030
     * @vftbl  10
     * @symbol ?setItemWithForceBalance@FillingContainer@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @hash   2010839324
     * @vftbl  11
     * @symbol ?removeItem@FillingContainer@@UEAAXHH@Z
     */
    virtual void removeItem(int, int);
    /**
     * @hash   -538416891
     * @vftbl  14
     * @symbol ?getContainerSize@FillingContainer@@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @hash   1564586724
     * @vftbl  15
     * @symbol ?getMaxStackSize@FillingContainer@@UEBAHXZ
     */
    virtual int getMaxStackSize() const;
    /**
     * @hash   -1403905342
     * @vftbl  16
     * @symbol ?startOpen@FillingContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @hash   -380443934
     * @vftbl  17
     * @symbol ?stopOpen@FillingContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void stopOpen(class Player &);
    /**
     * @vftbl  22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @hash   1475350463
     * @vftbl  33
     * @symbol ?add@FillingContainer@@UEAA_NAEAVItemStack@@@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @hash   -45682677
     * @vftbl  34
     * @symbol ?canAdd@FillingContainer@@UEBA_NAEBVItemStack@@@Z
     */
    virtual bool canAdd(class ItemStack const &) const;
    /**
     * @hash   -1262302385
     * @vftbl  35
     * @symbol ?clearSlot@FillingContainer@@UEAAXH@Z
     */
    virtual void clearSlot(int);
    /**
     * @hash   465340966
     * @vftbl  36
     * @symbol ?clearInventory@FillingContainer@@UEAAHH@Z
     */
    virtual int clearInventory(int);
    /**
     * @hash   372416166
     * @vftbl  37
     * @symbol ?load@FillingContainer@@UEAAXAEBVListTag@@AEBVSemVersion@@AEAVLevel@@@Z
     */
    virtual void load(class ListTag const &, class SemVersion const &, class Level &);
    /**
     * @hash   297310250
     * @vftbl  38
     * @symbol ?getEmptySlotsCount@FillingContainer@@UEBAHXZ
     */
    virtual int getEmptySlotsCount() const;
    /**
     * @hash   -1342970744
     * @symbol ??0FillingContainer@@QEAA@PEAVPlayer@@HW4ContainerType@@@Z
     */
    MCAPI FillingContainer(class Player *, int, enum class ContainerType);
    /**
     * @hash   -1687754698
     * @symbol ?getHotbarSize@FillingContainer@@QEBAHXZ
     */
    MCAPI int getHotbarSize() const;
    /**
     * @hash   778173961
     * @symbol ?getSlotWithItem@FillingContainer@@QEBAHAEBVItemStack@@_N1@Z
     */
    MCAPI int getSlotWithItem(class ItemStack const &, bool, bool) const;
    /**
     * @hash   -630930433
     * @symbol ?hasResource@FillingContainer@@QEAA_NH@Z
     */
    MCAPI bool hasResource(int);
    /**
     * @hash   1233639332
     * @symbol ??4FillingContainer@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class FillingContainer & operator=(class FillingContainer const &);
    /**
     * @hash   1746648208
     * @symbol ?removeResource@FillingContainer@@QEAAHAEBVItemStack@@_N1H@Z
     */
    MCAPI int removeResource(class ItemStack const &, bool, bool, int);
    /**
     * @hash   1367794557
     * @symbol ?removeResource@FillingContainer@@QEAA_NH@Z
     */
    MCAPI bool removeResource(int);
    /**
     * @hash   -394956796
     * @symbol ?save@FillingContainer@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save() const;
    /**
     * @hash   -127584693
     * @symbol ?swapSlots@FillingContainer@@QEAAXHH@Z
     */
    MCAPI void swapSlots(int, int);

//protected:
    /**
     * @hash   -278808386
     * @symbol ?_addResource@FillingContainer@@IEAAHAEBVItemStack@@@Z
     */
    MCAPI int _addResource(class ItemStack const &);
    /**
     * @hash   -1840167049
     * @symbol ?_doDrop@FillingContainer@@IEAAXAEAVItemStack@@_N@Z
     */
    MCAPI void _doDrop(class ItemStack &, bool);
    /**
     * @hash   -118390191
     * @symbol ?_fixBackwardCompabilityItem@FillingContainer@@IEAAXAEAVItemStack@@@Z
     */
    MCAPI void _fixBackwardCompabilityItem(class ItemStack &);
    /**
     * @hash   -1278715259
     * @symbol ?_getEmptySlotsCount@FillingContainer@@IEBAHHH@Z
     */
    MCAPI int _getEmptySlotsCount(int, int) const;
    /**
     * @hash   1490070006
     * @symbol ?_getFreeSlot@FillingContainer@@IEBAHXZ
     */
    MCAPI int _getFreeSlot() const;
    /**
     * @hash   -1871026621
     * @symbol ?_getSlot@FillingContainer@@IEBAHH@Z
     */
    MCAPI int _getSlot(int) const;
    /**
     * @hash   -526785342
     * @symbol ?_getSlotWithRemainingSpace@FillingContainer@@IEBAHAEBVItemStack@@@Z
     */
    MCAPI int _getSlotWithRemainingSpace(class ItemStack const &) const;
    /**
     * @hash   480888130
     * @symbol ?_isCreative@FillingContainer@@IEBA_NXZ
     */
    MCAPI bool _isCreative() const;
    /**
     * @hash   -694696442
     * @symbol ?_release@FillingContainer@@IEAAXH@Z
     */
    MCAPI void _release(int);

protected:

};