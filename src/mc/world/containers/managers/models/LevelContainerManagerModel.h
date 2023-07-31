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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol
     * ?getItemCopies\@LevelContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@LevelContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool);
    /**
     * @vftbl 8
     * @symbol ?getSlot\@LevelContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const;
    /**
     * @vftbl 9
     * @symbol ?setData\@LevelContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@LevelContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl 16
     * @symbol ?isValid\@LevelContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl 17
     * @symbol ?_postInit\@LevelContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELCONTAINERMANAGERMODEL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelContainerManagerModel();
#endif
    /**
     * @symbol ??0LevelContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI LevelContainerManagerModel(enum class ContainerID, class Player&, struct ActorUniqueID);
    /**
     * @symbol
     * ??0LevelContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@W4BlockActorType\@\@\@Z
     */
    MCAPI
    LevelContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&, enum class BlockActorType);
    /**
     * @symbol ?getBlockPos\@LevelContainerManagerModel\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getBlockPos() const;
    /**
     * @symbol ?getEntityUniqueID\@LevelContainerManagerModel\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getEntityUniqueID() const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_getBlockEntity\@LevelContainerManagerModel\@\@IEAAPEAVBlockActor\@\@XZ
     */
    MCAPI class BlockActor* _getBlockEntity();
    /**
     * @symbol ?_getRawContainer\@LevelContainerManagerModel\@\@IEAAPEAVContainer\@\@XZ
     */
    MCAPI class Container* _getRawContainer();
    // NOLINTEND
};
