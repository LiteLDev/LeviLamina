#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class DropperContainerManagerModel : public ::LevelContainerManagerModel {

public:
    // prevent constructor by default
    DropperContainerManagerModel& operator=(DropperContainerManagerModel const&) = delete;
    DropperContainerManagerModel(DropperContainerManagerModel const&)            = delete;
    DropperContainerManagerModel()                                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?_postInit\@DropperContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit(); // NOLINT
    /**
     * @symbol ??0DropperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI DropperContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&); // NOLINT
};
