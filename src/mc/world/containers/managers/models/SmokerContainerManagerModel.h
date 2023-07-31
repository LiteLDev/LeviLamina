#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/FurnaceContainerManagerModel.h"

class SmokerContainerManagerModel : public ::FurnaceContainerManagerModel {

public:
    // prevent constructor by default
    SmokerContainerManagerModel& operator=(SmokerContainerManagerModel const&) = delete;
    SmokerContainerManagerModel(SmokerContainerManagerModel const&)            = delete;
    SmokerContainerManagerModel()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0SmokerContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SmokerContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
    // NOLINTEND
};
