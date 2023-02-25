/**
 * @file  SmokerContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FurnaceContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SmokerContainerManagerModel.
 *
 */
class SmokerContainerManagerModel : public FurnaceContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMOKERCONTAINERMANAGERMODEL
public:
    class SmokerContainerManagerModel& operator=(class SmokerContainerManagerModel const &) = delete;
    SmokerContainerManagerModel(class SmokerContainerManagerModel const &) = delete;
    SmokerContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SmokerContainerManagerModel();
    /**
     * @symbol  ??0SmokerContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SmokerContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};