/**
 * @file  HopperContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   895702493
     * @vftbl  17
     * @symbol  ?_postInit\@HopperContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -1565435252
     * @symbol  ??0HopperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI HopperContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @hash   707995174
     * @symbol  ??0HopperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI HopperContainerManagerModel(enum class ContainerID, class Player &, struct ActorUniqueID const &);

};