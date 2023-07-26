#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class LevelContainerManagerModel : public ::ContainerManagerModel {

public:
    // prevent constructor by default
    LevelContainerManagerModel& operator=(LevelContainerManagerModel const&) = delete;
    LevelContainerManagerModel(LevelContainerManagerModel const&)            = delete;
    LevelContainerManagerModel()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?getItemCopies\@LevelContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?setSlot\@LevelContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getSlot\@LevelContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?setData\@LevelContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@LevelContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges(); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?isValid\@LevelContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?_postInit\@LevelContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELCONTAINERMANAGERMODEL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelContainerManagerModel(); // NOLINT
#endif
    /**
     * @symbol ??0LevelContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI LevelContainerManagerModel(enum class ContainerID, class Player&, struct ActorUniqueID); // NOLINT
    /**
     * @symbol
     * ??0LevelContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@W4BlockActorType\@\@\@Z
     */
    MCAPI LevelContainerManagerModel(
        enum class ContainerID,
        class Player&,
        class BlockPos const&,
        enum class BlockActorType
    ); // NOLINT
    /**
     * @symbol ?getBlockPos\@LevelContainerManagerModel\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getBlockPos() const; // NOLINT
    /**
     * @symbol ?getEntityUniqueID\@LevelContainerManagerModel\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getEntityUniqueID() const; // NOLINT

    // protected:
    /**
     * @symbol ?_getBlockEntity\@LevelContainerManagerModel\@\@IEAAPEAVBlockActor\@\@XZ
     */
    MCAPI class BlockActor* _getBlockEntity(); // NOLINT
    /**
     * @symbol ?_getRawContainer\@LevelContainerManagerModel\@\@IEAAPEAVContainer\@\@XZ
     */
    MCAPI class Container* _getRawContainer(); // NOLINT

protected:
};
