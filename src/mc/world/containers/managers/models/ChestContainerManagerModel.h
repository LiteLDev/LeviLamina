#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class ChestContainerManagerModel : public ::LevelContainerManagerModel {

public:
    // prevent constructor by default
    ChestContainerManagerModel& operator=(ChestContainerManagerModel const&) = delete;
    ChestContainerManagerModel(ChestContainerManagerModel const&)            = delete;
    ChestContainerManagerModel()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?isValid\@ChestContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?_postInit\@ChestContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit(); // NOLINT
    /**
     * @symbol
     * ??0ChestContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@W4BlockActorType\@\@\@Z
     */
    MCAPI ChestContainerManagerModel(
        enum class ContainerID,
        class Player&,
        class BlockPos const&,
        enum class BlockActorType
    ); // NOLINT
    /**
     * @symbol ??0ChestContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI ChestContainerManagerModel(enum class ContainerID, class Player&, struct ActorUniqueID); // NOLINT
};
