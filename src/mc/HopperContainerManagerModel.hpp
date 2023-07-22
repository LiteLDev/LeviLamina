/**
 * @file  HopperContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HopperContainerManagerModel.
 *
 */
class HopperContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERCONTAINERMANAGERMODEL
public:
    class HopperContainerManagerModel& operator=(class HopperContainerManagerModel const &) = delete;
    HopperContainerManagerModel(class HopperContainerManagerModel const &) = delete;
    HopperContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HopperContainerManagerModel();
    /**
     * @vftbl  17
     * @symbol  ?_postInit\@HopperContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol  ??0HopperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI HopperContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol  ??0HopperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI HopperContainerManagerModel(enum class ContainerID, class Player &, struct ActorUniqueID const &);

};