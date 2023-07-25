#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class ChestContainerManagerModel : public ::LevelContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHESTCONTAINERMANAGERMODEL
public:
    ChestContainerManagerModel& operator=(ChestContainerManagerModel const&) = delete;
    ChestContainerManagerModel(ChestContainerManagerModel const&)            = delete;
    ChestContainerManagerModel()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 16
     * @symbol ?isValid\@ChestContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl 17
     * @symbol ?_postInit\@ChestContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol
     * ??0ChestContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@W4BlockActorType\@\@\@Z
     */
    MCAPI
    ChestContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&, enum class BlockActorType);
    /**
     * @symbol ??0ChestContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI ChestContainerManagerModel(enum class ContainerID, class Player&, struct ActorUniqueID);
};
