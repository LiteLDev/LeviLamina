/**
 * @file  ContainerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1979184908
     * @vftbl  0
     * @symbol  ?containerContentChanged\@ContainerModel\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~ContainerModel();
    /**
     * @hash   1692983919
     * @vftbl  2
     * @symbol  ?postInit\@ContainerModel\@\@UEAAXXZ
     */
    virtual void postInit();
    /**
     * @hash   552776605
     * @vftbl  3
     * @symbol  ?releaseResources\@ContainerModel\@\@UEAAXXZ
     */
    virtual void releaseResources();
    /**
     * @hash   -349998113
     * @vftbl  4
     * @symbol  ?getContainerSize\@ContainerModel\@\@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @hash   714017304
     * @vftbl  5
     * @symbol  ?getFilteredContainerSize\@ContainerModel\@\@UEBAHXZ
     */
    virtual int getFilteredContainerSize() const;
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -391408179
     * @vftbl  7
     * @symbol  ?getContainerWeakRef\@ContainerModel\@\@UEBA?AVContainerWeakRef\@\@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @hash   1487559558
     * @vftbl  8
     * @symbol  ?getItemStack\@ContainerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getItemStack(int) const;
    /**
     * @hash   757398755
     * @vftbl  9
     * @symbol  ?getItems\@ContainerModel\@\@UEBAAEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> const & getItems() const;
    /**
     * @hash   646140466
     * @vftbl  10
     * @symbol  ?getItemInstance\@ContainerModel\@\@UEBAAEBVItemInstance\@\@H\@Z
     */
    virtual class ItemInstance const & getItemInstance(int) const;
    /**
     * @hash   -1418813642
     * @vftbl  11
     * @symbol  ?getItemStackBase\@ContainerModel\@\@UEBAAEBVItemStackBase\@\@H\@Z
     */
    virtual class ItemStackBase const & getItemStackBase(int) const;
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   261232633
     * @vftbl  13
     * @symbol  ?setItem\@ContainerModel\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @hash   1628448019
     * @vftbl  14
     * @symbol  ?isValid\@ContainerModel\@\@UEAA_NXZ
     */
    virtual bool isValid();
    /**
     * @vftbl  15
     * @symbol  __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -2030292777
     * @vftbl  17
     * @symbol  ?getItemExpandStatus\@ContainerModel\@\@UEBA?AW4ContainerExpandStatus\@\@H\@Z
     */
    virtual enum class ContainerExpandStatus getItemExpandStatus(int) const;
    /**
     * @hash   -352468564
     * @vftbl  18
     * @symbol  ?getItemGroupName\@ContainerModel\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual std::string const & getItemGroupName(int) const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   -1430668066
     * @vftbl  20
     * @symbol  ?_getContainer\@ContainerModel\@\@MEBAPEAVContainer\@\@XZ
     */
    virtual class Container * _getContainer() const;
    /**
     * @hash   -1108252391
     * @vftbl  21
     * @symbol  ?_getContainerOffset\@ContainerModel\@\@MEBAHXZ
     */
    virtual int _getContainerOffset() const;
    /**
     * @hash   -1277194380
     * @vftbl  22
     * @symbol  ?_onItemChanged\@ContainerModel\@\@MEAAXHAEBVItemStack\@\@0\@Z
     */
    virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERMODEL
    /**
     * @hash   -711096743
     * @symbol  ?isExpanableItemFiltered\@ContainerModel\@\@UEBA_NH\@Z
     */
    MCVAPI bool isExpanableItemFiltered(int) const;
    /**
     * @hash   -998612579
     * @symbol  ?isItemFiltered\@ContainerModel\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool isItemFiltered(class ItemStackBase const &) const;
    /**
     * @hash   -1725511407
     * @symbol  ?isItemInstanceBased\@ContainerModel\@\@UEBA_NXZ
     */
    MCVAPI bool isItemInstanceBased() const;
    /**
     * @hash   -493273342
     * @symbol  ?switchItemExpando\@ContainerModel\@\@UEAAXH\@Z
     */
    MCVAPI void switchItemExpando(int);
    /**
     * @hash   1473244115
     * @symbol  ?tick\@ContainerModel\@\@UEAAXH\@Z
     */
    MCVAPI void tick(int);
#endif
    /**
     * @hash   -1226020810
     * @symbol  ??0ContainerModel\@\@QEAA\@W4ContainerEnumName\@\@HW4ContainerCategory\@\@_N\@Z
     */
    MCAPI ContainerModel(enum class ContainerEnumName, int, enum class ContainerCategory, bool);
    /**
     * @hash   -1982702758
     * @symbol  ?_useLegacyTransactions\@ContainerModel\@\@QEBA_NXZ
     */
    MCAPI bool _useLegacyTransactions() const;
    /**
     * @hash   -208077392
     * @symbol  ?getContainerEnumName\@ContainerModel\@\@QEBA?AW4ContainerEnumName\@\@XZ
     */
    MCAPI enum class ContainerEnumName getContainerEnumName() const;
    /**
     * @hash   -607640495
     * @symbol  ?getContainerSlot\@ContainerModel\@\@QEBAHH\@Z
     */
    MCAPI int getContainerSlot(int) const;
    /**
     * @hash   -1973493826
     * @symbol  ?getContainerStringName\@ContainerModel\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getContainerStringName() const;
    /**
     * @hash   8621985
     * @symbol  ?getModelSlot\@ContainerModel\@\@QEBAHH\@Z
     */
    MCAPI int getModelSlot(int) const;
    /**
     * @hash   -305103579
     * @symbol  ?initContainerRuntimeId\@ContainerModel\@\@QEAAXXZ
     */
    MCAPI void initContainerRuntimeId();
    /**
     * @hash   -942621355
     * @symbol  ?isContainerSlotInRange\@ContainerModel\@\@QEBA_NH\@Z
     */
    MCAPI bool isContainerSlotInRange(int) const;
    /**
     * @hash   -1513881108
     * @symbol  ?isIntermediaryCategory\@ContainerModel\@\@QEBA_NXZ
     */
    MCAPI bool isIntermediaryCategory() const;
    /**
     * @hash   1253508069
     * @symbol  ?networkUpdateItem\@ContainerModel\@\@QEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void networkUpdateItem(int, class ItemStack const &, class ItemStack const &);
    /**
     * @hash   835743532
     * @symbol  ?registerOnContainerChangedCallback\@ContainerModel\@\@QEAAXV?$function\@$$A6AXHAEBVItemStack\@\@0\@Z\@std\@\@\@Z
     */
    MCAPI void registerOnContainerChangedCallback(class std::function<void (int, class ItemStack const &, class ItemStack const &)>);
    /**
     * @hash   -1308917972
     * @symbol  ?registerPlayerNotificationCallback\@ContainerModel\@\@QEAAXV?$function\@$$A6AXHAEBVItemStack\@\@0\@Z\@std\@\@\@Z
     */
    MCAPI void registerPlayerNotificationCallback(class std::function<void (int, class ItemStack const &, class ItemStack const &)>);
    /**
     * @hash   731088741
     * @symbol  ?serverInitItemStackIds\@ContainerModel\@\@QEAAXXZ
     */
    MCAPI void serverInitItemStackIds();
    /**
     * @hash   1510215385
     * @symbol  ?setClientUIContainer\@ContainerModel\@\@QEAAXPEAVSparseContainerClient\@\@\@Z
     */
    MCAPI void setClientUIContainer(class SparseContainerClient *);
    /**
     * @hash   -1551357155
     * @symbol  ?setItemSource\@ContainerModel\@\@QEAAXHAEBUSlotData\@\@\@Z
     */
    MCAPI void setItemSource(int, struct SlotData const &);

//protected:
    /**
     * @hash   787632170
     * @symbol  ?_init\@ContainerModel\@\@IEAAXXZ
     */
    MCAPI void _init();
    /**
     * @hash   1834387947
     * @symbol  ?_notifyPlayer\@ContainerModel\@\@IEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void _notifyPlayer(int, class ItemStack const &, class ItemStack const &);

//private:
    /**
     * @hash   37230853
     * @symbol  ?_onClientUIItemNetworkChanged\@ContainerModel\@\@AEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void _onClientUIItemNetworkChanged(int, class ItemStack const &, class ItemStack const &);

protected:

private:

};