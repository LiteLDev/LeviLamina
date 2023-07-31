#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class DispenserContainerManagerModel : public ::LevelContainerManagerModel {

public:
    // prevent constructor by default
    DispenserContainerManagerModel& operator=(DispenserContainerManagerModel const&) = delete;
    DispenserContainerManagerModel(DispenserContainerManagerModel const&)            = delete;
    DispenserContainerManagerModel()                                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 17
     * @symbol ?_postInit\@DispenserContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0DispenserContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI DispenserContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
    // NOLINTEND
};
