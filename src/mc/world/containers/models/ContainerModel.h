#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"

class ContainerModel : public ::ContainerContentChangeListener {

public:
    // prevent constructor by default
    ContainerModel& operator=(ContainerModel const&) = delete;
    ContainerModel(ContainerModel const&)            = delete;
    ContainerModel()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?containerContentChanged\@ContainerModel\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?postInit\@ContainerModel\@\@UEAAXXZ
     */
    virtual void postInit();
    /**
     * @vftbl 3
     * @symbol ?releaseResources\@ContainerModel\@\@UEAAXXZ
     */
    virtual void releaseResources();
    /**
     * @vftbl 4
     * @symbol ?getContainerSize\@ContainerModel\@\@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @vftbl 5
     * @symbol ?getFilteredContainerSize\@ContainerModel\@\@UEBAHXZ
     */
    virtual int getFilteredContainerSize() const;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol ?getContainerWeakRef\@ContainerModel\@\@UEBA?AVContainerWeakRef\@\@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl 8
     * @symbol ?getItemStack\@ContainerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getItemStack(int) const;
    /**
     * @vftbl 9
     * @symbol
     * ?getItems\@ContainerModel\@\@UEBAAEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> const& getItems() const;
    /**
     * @vftbl 10
     * @symbol ?getItemInstance\@ContainerModel\@\@UEBAAEBVItemInstance\@\@H\@Z
     */
    virtual class ItemInstance const& getItemInstance(int) const;
    /**
     * @vftbl 11
     * @symbol ?getItemStackBase\@ContainerModel\@\@UEBAAEBVItemStackBase\@\@H\@Z
     */
    virtual class ItemStackBase const& getItemStackBase(int) const;
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol ?setItem\@ContainerModel\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const&);
    /**
     * @vftbl 14
     * @symbol ?isValid\@ContainerModel\@\@UEAA_NXZ
     */
    virtual bool isValid();
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol ?getItemExpandStatus\@ContainerModel\@\@UEBA?AW4ContainerExpandStatus\@\@H\@Z
     */
    virtual enum class ContainerExpandStatus getItemExpandStatus(int) const;
    /**
     * @vftbl 18
     * @symbol
     * ?getItemGroupName\@ContainerModel\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual std::string const& getItemGroupName(int) const;
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 20
     * @symbol ?_getContainer\@ContainerModel\@\@MEBAPEAVContainer\@\@XZ
     */
    virtual class Container* _getContainer() const;
    /**
     * @vftbl 21
     * @symbol ?_getContainerOffset\@ContainerModel\@\@MEBAHXZ
     */
    virtual int _getContainerOffset() const;
    /**
     * @vftbl 22
     * @symbol ?_onItemChanged\@ContainerModel\@\@MEAAXHAEBVItemStack\@\@0\@Z
     */
    virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERMODEL
    /**
     * @symbol ?isExpanableItemFiltered\@ContainerModel\@\@UEBA_NH\@Z
     */
    MCVAPI bool isExpanableItemFiltered(int) const;
    /**
     * @symbol ?isItemFiltered\@ContainerModel\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool isItemFiltered(class ItemStackBase const&) const;
    /**
     * @symbol ?isItemInstanceBased\@ContainerModel\@\@UEBA_NXZ
     */
    MCVAPI bool isItemInstanceBased() const;
    /**
     * @symbol ?switchItemExpando\@ContainerModel\@\@UEAAXH\@Z
     */
    MCVAPI void switchItemExpando(int);
    /**
     * @symbol ?tick\@ContainerModel\@\@UEAAXH\@Z
     */
    MCVAPI void tick(int);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerModel();
#endif
    /**
     * @symbol ??0ContainerModel\@\@QEAA\@W4ContainerEnumName\@\@HW4ContainerCategory\@\@_N\@Z
     */
    MCAPI ContainerModel(enum class ContainerEnumName, int, enum class ContainerCategory, bool);
    /**
     * @symbol ?isContainerSlotInRange\@ContainerModel\@\@QEBA_NH\@Z
     */
    MCAPI bool isContainerSlotInRange(int) const;
    /**
     * @symbol ?networkUpdateItem\@ContainerModel\@\@QEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void networkUpdateItem(int, class ItemStack const&, class ItemStack const&);
    /**
     * @symbol
     * ?registerPlayerNotificationCallback\@ContainerModel\@\@QEAAXV?$function\@$$A6AXHAEBVItemStack\@\@0\@Z\@std\@\@\@Z
     */
    MCAPI void
        registerPlayerNotificationCallback(std::function<void(int, class ItemStack const&, class ItemStack const&)>);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_init\@ContainerModel\@\@IEAAXXZ
     */
    MCAPI void _init();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_onClientUIItemNetworkChanged\@ContainerModel\@\@AEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void _onClientUIItemNetworkChanged(int, class ItemStack const&, class ItemStack const&);
    // NOLINTEND
};
