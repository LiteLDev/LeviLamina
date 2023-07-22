/**
 * @file  ExperienceCostCommitObject.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperienceCostCommitObject.
 *
 */
class ExperienceCostCommitObject {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCECOSTCOMMITOBJECT
public:
    class ExperienceCostCommitObject& operator=(class ExperienceCostCommitObject const &) = delete;
    ExperienceCostCommitObject(class ExperienceCostCommitObject const &) = delete;
    ExperienceCostCommitObject() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ExperienceCostCommitObject();
    /**
     * @vftbl  1
     * @symbol  ?append\@ExperienceCostCommitObject\@\@UEAA_NPEAVContainerValidationCommitObject\@\@\@Z
     */
    virtual bool append(class ContainerValidationCommitObject *);
    /**
     * @vftbl  2
     * @symbol  ?canCommit\@ExperienceCostCommitObject\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canCommit(class ContainerScreenContext const &) const;
    /**
     * @vftbl  3
     * @symbol  ?commit\@ExperienceCostCommitObject\@\@UEAAXAEBVContainerScreenContext\@\@\@Z
     */
    virtual void commit(class ContainerScreenContext const &);
    /**
     * @symbol  ??0ExperienceCostCommitObject\@\@QEAA\@H\@Z
     */
    MCAPI ExperienceCostCommitObject(int);

};