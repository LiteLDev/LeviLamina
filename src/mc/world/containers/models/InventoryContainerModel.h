#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerModel.h"

class InventoryContainerModel : public ::ContainerModel {

public:
    // prevent constructor by default
    InventoryContainerModel& operator=(InventoryContainerModel const&) = delete;
    InventoryContainerModel(InventoryContainerModel const&)            = delete;
    InventoryContainerModel()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?containerContentChanged\@InventoryContainerModel\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?postInit\@InventoryContainerModel\@\@UEAAXXZ
     */
    virtual void postInit(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?releaseResources\@InventoryContainerModel\@\@UEAAXXZ
     */
    virtual void releaseResources(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getContainerWeakRef\@InventoryContainerModel\@\@UEBA?AVContainerWeakRef\@\@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const; // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?isValid\@InventoryContainerModel\@\@UEAA_NXZ
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
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19(); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?_getContainer\@InventoryContainerModel\@\@EEBAPEAVContainer\@\@XZ
     */
    virtual class Container* _getContainer() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol ?_getContainerOffset\@InventoryContainerModel\@\@MEBAHXZ
     */
    virtual int _getContainerOffset() const; // NOLINT
    /**
     * @vftbl 22
     * @symbol ?_onItemChanged\@InventoryContainerModel\@\@EEAAXHAEBVItemStack\@\@0\@Z
     */
    virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&); // NOLINT
    /**
     * @symbol ??0InventoryContainerModel\@\@QEAA\@W4ContainerEnumName\@\@HAEAVPlayer\@\@\@Z
     */
    MCAPI InventoryContainerModel(enum class ContainerEnumName, int, class Player&); // NOLINT

    // private:
    /**
     * @symbol ?_refreshSlot\@InventoryContainerModel\@\@AEAAXH\@Z
     */
    MCAPI void _refreshSlot(int); // NOLINT

private:
};
