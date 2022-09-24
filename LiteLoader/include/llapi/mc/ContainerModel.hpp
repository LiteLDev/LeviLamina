/**
 * @file  ContainerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerModel.
 *
 */
class ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERMODEL
public:
    class ContainerModel& operator=(class ContainerModel const &) = delete;
    ContainerModel(class ContainerModel const &) = delete;
    ContainerModel() = delete;
#endif

public:
    /**
     * @hash   -1334146332
     * @vftbl  0
     * @symbol ?containerContentChanged@ContainerModel@@UEAAXH@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~ContainerModel();
    /**
     * @hash   1601096943
     * @vftbl  2
     * @symbol ?postInit@ContainerModel@@UEAAXXZ
     */
    virtual void postInit();
    /**
     * @hash   1197553789
     * @vftbl  3
     * @symbol ?releaseResources@ContainerModel@@UEAAXXZ
     */
    virtual void releaseResources();
    /**
     * @hash   294963583
     * @vftbl  4
     * @symbol ?getContainerSize@ContainerModel@@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @hash   1358979000
     * @vftbl  5
     * @symbol ?getFilteredContainerSize@ContainerModel@@UEBAHXZ
     */
    virtual int getFilteredContainerSize() const;
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   253553517
     * @vftbl  7
     * @symbol ?getContainerWeakRef@ContainerModel@@UEBA?AVContainerWeakRef@@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @hash   2132521254
     * @vftbl  8
     * @symbol ?getItemStack@ContainerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getItemStack(int) const;
    /**
     * @hash   -402320669
     * @vftbl  9
     * @symbol ?getItems@ContainerModel@@UEBAAEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> const & getItems() const;
    /**
     * @hash   1291102162
     * @vftbl  10
     * @symbol ?getItemInstance@ContainerModel@@UEBAAEBVItemInstance@@H@Z
     */
    virtual class ItemInstance const & getItemInstance(int) const;
    /**
     * @hash   -875395050
     * @vftbl  11
     * @symbol ?getItemStackBase@ContainerModel@@UEBAAEBVItemStackBase@@H@Z
     */
    virtual class ItemStackBase const & getItemStackBase(int) const;
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   905948313
     * @vftbl  13
     * @symbol ?setItem@ContainerModel@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @hash   1528550147
     * @vftbl  14
     * @symbol ?isValid@ContainerModel@@UEAA_NXZ
     */
    virtual bool isValid();
    /**
     * @vftbl  15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -2126915561
     * @vftbl  17
     * @symbol ?getItemExpandStatus@ContainerModel@@UEBA?AW4ContainerExpandStatus@@H@Z
     */
    virtual enum ContainerExpandStatus getItemExpandStatus(int) const;
    /**
     * @hash   381858444
     * @vftbl  18
     * @symbol ?getItemGroupName@ContainerModel@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual std::string const & getItemGroupName(int) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   -1527290850
     * @vftbl  20
     * @symbol ?_getContainer@ContainerModel@@MEBAPEAVContainer@@XZ
     */
    virtual class Container * _getContainer() const;
    /**
     * @hash   -1204875175
     * @vftbl  21
     * @symbol ?_getContainerOffset@ContainerModel@@MEBAHXZ
     */
    virtual int _getContainerOffset() const;
    /**
     * @hash   -632186556
     * @vftbl  22
     * @symbol ?_onItemChanged@ContainerModel@@MEAAXHAEBVItemStack@@0@Z
     */
    virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERMODEL
    /**
     * @hash   -811717287
     * @symbol ?isExpanableItemFiltered@ContainerModel@@UEBA_NH@Z
     */
    MCVAPI bool isExpanableItemFiltered(int) const;
    /**
     * @hash   -1099233123
     * @symbol ?isItemFiltered@ContainerModel@@UEBA_NAEBVItemStackBase@@@Z
     */
    MCVAPI bool isItemFiltered(class ItemStackBase const &) const;
    /**
     * @hash   -1826131951
     * @symbol ?isItemInstanceBased@ContainerModel@@UEBA_NXZ
     */
    MCVAPI bool isItemInstanceBased() const;
    /**
     * @hash   -585160318
     * @symbol ?switchItemExpando@ContainerModel@@UEAAXH@Z
     */
    MCVAPI void switchItemExpando(int);
    /**
     * @hash   1381357139
     * @symbol ?tick@ContainerModel@@UEAAXH@Z
     */
    MCVAPI void tick(int);
#endif
    /**
     * @hash   -580920730
     * @symbol ??0ContainerModel@@QEAA@W4ContainerEnumName@@HW4ContainerCategory@@_N@Z
     */
    MCAPI ContainerModel(enum ContainerEnumName, int, enum ContainerCategory, bool);
    /**
     * @hash   -1337694934
     * @symbol ?_useLegacyTransactions@ContainerModel@@QEBA_NXZ
     */
    MCAPI bool _useLegacyTransactions() const;
    /**
     * @hash   754952240
     * @symbol ?getContainerEnumName@ContainerModel@@QEBA?AW4ContainerEnumName@@XZ
     */
    MCAPI enum ContainerEnumName getContainerEnumName() const;
    /**
     * @hash   37321201
     * @symbol ?getContainerSlot@ContainerModel@@QEBAHH@Z
     */
    MCAPI int getContainerSlot(int) const;
    /**
     * @hash   982941950
     * @symbol ?getContainerStringName@ContainerModel@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getContainerStringName() const;
    /**
     * @hash   653552929
     * @symbol ?getModelSlot@ContainerModel@@QEBAHH@Z
     */
    MCAPI int getModelSlot(int) const;
    /**
     * @hash   339811989
     * @symbol ?initContainerRuntimeId@ContainerModel@@QEAAXXZ
     */
    MCAPI void initContainerRuntimeId();
    /**
     * @hash   -297705787
     * @symbol ?isContainerSlotInRange@ContainerModel@@QEBA_NH@Z
     */
    MCAPI bool isContainerSlotInRange(int) const;
    /**
     * @hash   -868980916
     * @symbol ?isIntermediaryCategory@ContainerModel@@QEBA_NXZ
     */
    MCAPI bool isIntermediaryCategory() const;
    /**
     * @hash   1898408261
     * @symbol ?networkUpdateItem@ContainerModel@@QEAAXHAEBVItemStack@@0@Z
     */
    MCAPI void networkUpdateItem(int, class ItemStack const &, class ItemStack const &);
    /**
     * @hash   1480628348
     * @symbol ?registerOnContainerChangedCallback@ContainerModel@@QEAAXV?$function@$$A6AXHAEBVItemStack@@0@Z@std@@@Z
     */
    MCAPI void registerOnContainerChangedCallback(class std::function<void (int, class ItemStack const &, class ItemStack const &)>);
    /**
     * @hash   -664048532
     * @symbol ?registerPlayerNotificationCallback@ContainerModel@@QEAAXV?$function@$$A6AXHAEBVItemStack@@0@Z@std@@@Z
     */
    MCAPI void registerPlayerNotificationCallback(class std::function<void (int, class ItemStack const &, class ItemStack const &)>);
    /**
     * @hash   1375835173
     * @symbol ?serverInitItemStackIds@ContainerModel@@QEAAXXZ
     */
    MCAPI void serverInitItemStackIds();
    /**
     * @hash   -2140020855
     * @symbol ?setClientUIContainer@ContainerModel@@QEAAXPEAVSparseContainerClient@@@Z
     */
    MCAPI void setClientUIContainer(class SparseContainerClient *);
    /**
     * @hash   -906672227
     * @symbol ?setItemSource@ContainerModel@@QEAAXHAEBUSlotData@@@Z
     */
    MCAPI void setItemSource(int, struct SlotData const &);

//protected:
    /**
     * @hash   1432686122
     * @symbol ?_init@ContainerModel@@IEAAXXZ
     */
    MCAPI void _init();
    /**
     * @hash   -1815525397
     * @symbol ?_notifyPlayer@ContainerModel@@IEAAXHAEBVItemStack@@0@Z
     */
    MCAPI void _notifyPlayer(int, class ItemStack const &, class ItemStack const &);

//private:
    /**
     * @hash   682269429
     * @symbol ?_onClientUIItemNetworkChanged@ContainerModel@@AEAAXHAEBVItemStack@@0@Z
     */
    MCAPI void _onClientUIItemNetworkChanged(int, class ItemStack const &, class ItemStack const &);

protected:

private:

};