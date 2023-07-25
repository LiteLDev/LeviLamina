#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperienceCostCommitObject {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCECOSTCOMMITOBJECT
public:
    ExperienceCostCommitObject& operator=(ExperienceCostCommitObject const&) = delete;
    ExperienceCostCommitObject(ExperienceCostCommitObject const&)            = delete;
    ExperienceCostCommitObject()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?append\@ExperienceCostCommitObject\@\@UEAA_NPEAVContainerValidationCommitObject\@\@\@Z
     */
    virtual bool append(class ContainerValidationCommitObject*);
    /**
     * @vftbl 2
     * @symbol ?canCommit\@ExperienceCostCommitObject\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canCommit(class ContainerScreenContext const&) const;
    /**
     * @vftbl 3
     * @symbol ?commit\@ExperienceCostCommitObject\@\@UEAAXAEBVContainerScreenContext\@\@\@Z
     */
    virtual void commit(class ContainerScreenContext const&);
    /**
     * @symbol ??0ExperienceCostCommitObject\@\@QEAA\@H\@Z
     */
    MCAPI ExperienceCostCommitObject(int);
};
