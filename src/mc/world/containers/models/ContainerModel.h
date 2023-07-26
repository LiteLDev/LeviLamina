#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerModel {

public:
    // prevent constructor by default
    ContainerModel& operator=(ContainerModel const&) = delete;
    ContainerModel(ContainerModel const&)            = delete;
    ContainerModel()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?containerContentChanged\@ContainerModel\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?postInit\@ContainerModel\@\@UEAAXXZ
     */
    virtual void postInit(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?releaseResources\@ContainerModel\@\@UEAAXXZ
     */
    virtual void releaseResources(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getContainerSize\@ContainerModel\@\@UEBAHXZ
     */
    virtual int getContainerSize() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getFilteredContainerSize\@ContainerModel\@\@UEBAHXZ
     */
    virtual int getFilteredContainerSize() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getContainerWeakRef\@ContainerModel\@\@UEBA?AVContainerWeakRef\@\@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getItemStack\@ContainerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getItemStack(int) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?getItems\@ContainerModel\@\@UEBAAEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> const& getItems() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?getItemInstance\@ContainerModel\@\@UEBAAEBVItemInstance\@\@H\@Z
     */
    virtual class ItemInstance const& getItemInstance(int) const; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?getItemStackBase\@ContainerModel\@\@UEBAAEBVItemStackBase\@\@H\@Z
     */
    virtual class ItemStackBase const& getItemStackBase(int) const; // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?setItem\@ContainerModel\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?isValid\@ContainerModel\@\@UEAA_NXZ
     */
    virtual bool isValid(); // NOLINT
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?getItemExpandStatus\@ContainerModel\@\@UEBA?AW4ContainerExpandStatus\@\@H\@Z
     */
    virtual enum class ContainerExpandStatus getItemExpandStatus(int) const; // NOLINT
    /**
     * @vftbl 18
     * @symbol
     * ?getItemGroupName\@ContainerModel\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual std::string const& getItemGroupName(int) const; // NOLINT
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19(); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?_getContainer\@ContainerModel\@\@MEBAPEAVContainer\@\@XZ
     */
    virtual class Container* _getContainer() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol ?_getContainerOffset\@ContainerModel\@\@MEBAHXZ
     */
    virtual int _getContainerOffset() const; // NOLINT
    /**
     * @vftbl 22
     * @symbol ?_onItemChanged\@ContainerModel\@\@MEAAXHAEBVItemStack\@\@0\@Z
     */
    virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERMODEL
    /**
     * @symbol ?isExpanableItemFiltered\@ContainerModel\@\@UEBA_NH\@Z
     */
    MCVAPI bool isExpanableItemFiltered(int) const; // NOLINT
    /**
     * @symbol ?isItemFiltered\@ContainerModel\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool isItemFiltered(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?isItemInstanceBased\@ContainerModel\@\@UEBA_NXZ
     */
    MCVAPI bool isItemInstanceBased() const; // NOLINT
    /**
     * @symbol ?switchItemExpando\@ContainerModel\@\@UEAAXH\@Z
     */
    MCVAPI void switchItemExpando(int); // NOLINT
    /**
     * @symbol ?tick\@ContainerModel\@\@UEAAXH\@Z
     */
    MCVAPI void tick(int); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerModel(); // NOLINT
#endif
    /**
     * @symbol ??0ContainerModel\@\@QEAA\@W4ContainerEnumName\@\@HW4ContainerCategory\@\@_N\@Z
     */
    MCAPI ContainerModel(enum class ContainerEnumName, int, enum class ContainerCategory, bool); // NOLINT
    /**
     * @symbol ?isContainerSlotInRange\@ContainerModel\@\@QEBA_NH\@Z
     */
    MCAPI bool isContainerSlotInRange(int) const; // NOLINT
    /**
     * @symbol ?networkUpdateItem\@ContainerModel\@\@QEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void networkUpdateItem(int, class ItemStack const&, class ItemStack const&); // NOLINT
    /**
     * @symbol
     * ?registerPlayerNotificationCallback\@ContainerModel\@\@QEAAXV?$function\@$$A6AXHAEBVItemStack\@\@0\@Z\@std\@\@\@Z
     */
    MCAPI void registerPlayerNotificationCallback(class std::function<
                                                  void(int, class ItemStack const&, class ItemStack const&)>); // NOLINT

    // protected:
    /**
     * @symbol ?_init\@ContainerModel\@\@IEAAXXZ
     */
    MCAPI void _init(); // NOLINT

    // private:
    /**
     * @symbol ?_onClientUIItemNetworkChanged\@ContainerModel\@\@AEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void _onClientUIItemNetworkChanged(int, class ItemStack const&, class ItemStack const&); // NOLINT

protected:
private:
};
