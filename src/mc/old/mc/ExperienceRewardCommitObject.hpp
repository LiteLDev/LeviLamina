/**
 * @file  ExperienceRewardCommitObject.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperienceRewardCommitObject.
 *
 */
class ExperienceRewardCommitObject {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEREWARDCOMMITOBJECT
public:
    class ExperienceRewardCommitObject& operator=(class ExperienceRewardCommitObject const &) = delete;
    ExperienceRewardCommitObject(class ExperienceRewardCommitObject const &) = delete;
    ExperienceRewardCommitObject() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ExperienceRewardCommitObject();
    /**
     * @vftbl  1
     * @symbol  ?append\@ExperienceRewardCommitObject\@\@UEAA_NPEAVContainerValidationCommitObject\@\@\@Z
     */
    virtual bool append(class ContainerValidationCommitObject *);
    /**
     * @vftbl  2
     * @symbol  ?canCommit\@ExperienceRewardCommitObject\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canCommit(class ContainerScreenContext const &) const;
    /**
     * @vftbl  3
     * @symbol  ?commit\@ExperienceRewardCommitObject\@\@UEAAXAEBVContainerScreenContext\@\@\@Z
     */
    virtual void commit(class ContainerScreenContext const &);
    /**
     * @symbol  ??0ExperienceRewardCommitObject\@\@QEAA\@H\@Z
     */
    MCAPI ExperienceRewardCommitObject(int);

};