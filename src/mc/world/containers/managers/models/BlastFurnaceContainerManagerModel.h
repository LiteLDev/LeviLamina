#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/FurnaceContainerManagerModel.h"

class BlastFurnaceContainerManagerModel : public ::FurnaceContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLASTFURNACECONTAINERMANAGERMODEL
public:
    BlastFurnaceContainerManagerModel& operator=(BlastFurnaceContainerManagerModel const&) = delete;
    BlastFurnaceContainerManagerModel(BlastFurnaceContainerManagerModel const&)            = delete;
    BlastFurnaceContainerManagerModel()                                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0BlastFurnaceContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BlastFurnaceContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
};
