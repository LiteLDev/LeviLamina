/**
 * @file  DropperContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DropperContainerManagerModel.
 *
 */
class DropperContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPPERCONTAINERMANAGERMODEL
public:
    class DropperContainerManagerModel& operator=(class DropperContainerManagerModel const &) = delete;
    DropperContainerManagerModel(class DropperContainerManagerModel const &) = delete;
    DropperContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DropperContainerManagerModel();
    /**
     * @hash   695642183
     * @vftbl  17
     * @symbol  ?_postInit\@DropperContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -514181930
     * @symbol  ??0DropperContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI DropperContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};