#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperienceCostCommitObject {

public:
    // prevent constructor by default
    ExperienceCostCommitObject& operator=(ExperienceCostCommitObject const&) = delete;
    ExperienceCostCommitObject(ExperienceCostCommitObject const&)            = delete;
    ExperienceCostCommitObject()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?append\@ExperienceCostCommitObject\@\@UEAA_NPEAVContainerValidationCommitObject\@\@\@Z
     */
    virtual bool append(class ContainerValidationCommitObject*); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canCommit\@ExperienceCostCommitObject\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canCommit(class ContainerScreenContext const&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?commit\@ExperienceCostCommitObject\@\@UEAAXAEBVContainerScreenContext\@\@\@Z
     */
    virtual void commit(class ContainerScreenContext const&); // NOLINT
    /**
     * @symbol ??0ExperienceCostCommitObject\@\@QEAA\@H\@Z
     */
    MCAPI ExperienceCostCommitObject(int); // NOLINT
};
