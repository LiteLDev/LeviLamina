/**
 * @file  ChestContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChestContainerManagerModel.
 *
 */
class ChestContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHESTCONTAINERMANAGERMODEL
public:
    class ChestContainerManagerModel& operator=(class ChestContainerManagerModel const &) = delete;
    ChestContainerManagerModel(class ChestContainerManagerModel const &) = delete;
    ChestContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ChestContainerManagerModel();
    /**
     * @hash   226938931
     * @vftbl  16
     * @symbol ?isValid@ChestContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   -514404246
     * @vftbl  17
     * @symbol ?_postInit@ChestContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   1425725967
     * @symbol ??0ChestContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@UActorUniqueID@@@Z
     */
    MCAPI ChestContainerManagerModel(enum ContainerID, class Player &, struct ActorUniqueID);
    /**
     * @hash   -991217378
     * @symbol ??0ChestContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@W4BlockActorType@@@Z
     */
    MCAPI ChestContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &, enum BlockActorType);

};