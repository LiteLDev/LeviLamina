#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/FurnaceContainerManagerModel.h"

class BlastFurnaceContainerManagerModel : public ::FurnaceContainerManagerModel {

public:
    // prevent constructor by default
    BlastFurnaceContainerManagerModel& operator=(BlastFurnaceContainerManagerModel const&) = delete;
    BlastFurnaceContainerManagerModel(BlastFurnaceContainerManagerModel const&)            = delete;
    BlastFurnaceContainerManagerModel()                                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @symbol ??0BlastFurnaceContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BlastFurnaceContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&); // NOLINT
};
