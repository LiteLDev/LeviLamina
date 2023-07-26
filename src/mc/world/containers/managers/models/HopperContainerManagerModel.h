#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class HopperContainerManagerModel : public ::LevelContainerManagerModel {

public:
    // prevent constructor by default
    HopperContainerManagerModel& operator=(HopperContainerManagerModel const&) = delete;
    HopperContainerManagerModel(HopperContainerManagerModel const&)            = delete;
    HopperContainerManagerModel()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?_postInit\@HopperContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit(); // NOLINT
    /**
     * @symbol ??0HopperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI HopperContainerManagerModel(enum class ContainerID, class Player&, struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ??0HopperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI HopperContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&); // NOLINT
};
