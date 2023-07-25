#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class HopperContainerManagerModel : public ::LevelContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERCONTAINERMANAGERMODEL
public:
    HopperContainerManagerModel& operator=(HopperContainerManagerModel const&) = delete;
    HopperContainerManagerModel(HopperContainerManagerModel const&)            = delete;
    HopperContainerManagerModel()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 17
     * @symbol ?_postInit\@HopperContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0HopperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI HopperContainerManagerModel(enum class ContainerID, class Player&, struct ActorUniqueID const&);
    /**
     * @symbol ??0HopperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI HopperContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
};
