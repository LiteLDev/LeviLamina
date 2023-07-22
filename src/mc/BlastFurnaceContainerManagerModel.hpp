/**
 * @file  BlastFurnaceContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "FurnaceContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlastFurnaceContainerManagerModel.
 *
 */
class BlastFurnaceContainerManagerModel : public FurnaceContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLASTFURNACECONTAINERMANAGERMODEL
public:
    class BlastFurnaceContainerManagerModel& operator=(class BlastFurnaceContainerManagerModel const &) = delete;
    BlastFurnaceContainerManagerModel(class BlastFurnaceContainerManagerModel const &) = delete;
    BlastFurnaceContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlastFurnaceContainerManagerModel();
    /**
     * @symbol  ??0BlastFurnaceContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BlastFurnaceContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};