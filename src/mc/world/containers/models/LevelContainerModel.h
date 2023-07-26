#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerModel.h"

class LevelContainerModel : public ::ContainerModel {

public:
    // prevent constructor by default
    LevelContainerModel& operator=(LevelContainerModel const&) = delete;
    LevelContainerModel(LevelContainerModel const&)            = delete;
    LevelContainerModel()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?containerContentChanged\@LevelContainerModel\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?postInit\@LevelContainerModel\@\@UEAAXXZ
     */
    virtual void postInit(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?releaseResources\@LevelContainerModel\@\@UEAAXXZ
     */
    virtual void releaseResources(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getContainerWeakRef\@LevelContainerModel\@\@UEBA?AVContainerWeakRef\@\@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const; // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?isValid\@LevelContainerModel\@\@UEAA_NXZ
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
     * @symbol ?_getContainer\@LevelContainerModel\@\@EEBAPEAVContainer\@\@XZ
     */
    virtual class Container* _getContainer() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol ?_getContainerOffset\@LevelContainerModel\@\@MEBAHXZ
     */
    virtual int _getContainerOffset() const; // NOLINT
    /**
     * @vftbl 22
     * @symbol ?_onItemChanged\@LevelContainerModel\@\@MEAAXHAEBVItemStack\@\@0\@Z
     */
    virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&); // NOLINT
    /**
     * @symbol
     * ??0LevelContainerModel\@\@QEAA\@W4ContainerEnumName\@\@HAEAVPlayer\@\@W4BlockActorType\@\@AEBVBlockPos\@\@W4ContainerCategory\@\@\@Z
     */
    MCAPI LevelContainerModel(
        enum class ContainerEnumName,
        int,
        class Player&,
        enum class BlockActorType,
        class BlockPos const&,
        enum class ContainerCategory
    ); // NOLINT
    /**
     * @symbol
     * ??0LevelContainerModel\@\@QEAA\@W4ContainerEnumName\@\@HAEAVPlayer\@\@UActorUniqueID\@\@W4ContainerCategory\@\@\@Z
     */
    MCAPI LevelContainerModel(
        enum class ContainerEnumName,
        int,
        class Player&,
        struct ActorUniqueID,
        enum class ContainerCategory
    ); // NOLINT
    /**
     * @symbol
     * ?getContainerHelper\@LevelContainerModel\@\@SAPEAVContainer\@\@AEAVPlayer\@\@W4BlockActorType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class Container*
    getContainerHelper(class Player&, enum class BlockActorType, class BlockPos const&); // NOLINT

    // private:
    /**
     * @symbol ?_getEntity\@LevelContainerModel\@\@AEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* _getEntity() const; // NOLINT
    /**
     * @symbol ?_refreshSlot\@LevelContainerModel\@\@AEAAXH\@Z
     */
    MCAPI void _refreshSlot(int); // NOLINT

private:
};
