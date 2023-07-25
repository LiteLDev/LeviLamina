#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class DropperContainerManagerModel : public ::LevelContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPPERCONTAINERMANAGERMODEL
public:
    DropperContainerManagerModel& operator=(DropperContainerManagerModel const&) = delete;
    DropperContainerManagerModel(DropperContainerManagerModel const&)            = delete;
    DropperContainerManagerModel()                                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 17
     * @symbol ?_postInit\@DropperContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0DropperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI DropperContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
};
