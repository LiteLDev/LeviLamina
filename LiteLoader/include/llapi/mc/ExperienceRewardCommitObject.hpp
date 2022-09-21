/**
 * @file  MC/ExperienceRewardCommitObject.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~ExperienceRewardCommitObject();
    /**
     * @hash   -40786316
     * @vftbl  1
     * @symbol ?append@ExperienceRewardCommitObject@@UEAA_NPEAVContainerValidationCommitObject@@@Z
     */
    virtual bool append(class ContainerValidationCommitObject *);
    /**
     * @hash   -1512576179
     * @vftbl  2
     * @symbol ?canCommit@ExperienceRewardCommitObject@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    virtual bool canCommit(class ContainerScreenContext const &) const;
    /**
     * @hash   -639594160
     * @vftbl  3
     * @symbol ?commit@ExperienceRewardCommitObject@@UEAAXAEBVContainerScreenContext@@@Z
     */
    virtual void commit(class ContainerScreenContext const &);
    /**
     * @hash   1871182672
     * @symbol ??0ExperienceRewardCommitObject@@QEAA@H@Z
     */
    MCAPI ExperienceRewardCommitObject(int);

};