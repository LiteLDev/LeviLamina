#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCommitObject.h"

class ExperienceRewardCommitObject : public ::ContainerValidationCommitObject {

public:
    // prevent constructor by default
    ExperienceRewardCommitObject& operator=(ExperienceRewardCommitObject const&) = delete;
    ExperienceRewardCommitObject(ExperienceRewardCommitObject const&)            = delete;
    ExperienceRewardCommitObject()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?append\@ExperienceRewardCommitObject\@\@UEAA_NPEAVContainerValidationCommitObject\@\@\@Z
     */
    virtual bool append(class ContainerValidationCommitObject*);
    /**
     * @vftbl 2
     * @symbol ?canCommit\@ExperienceRewardCommitObject\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canCommit(class ContainerScreenContext const&) const;
    /**
     * @vftbl 3
     * @symbol ?commit\@ExperienceRewardCommitObject\@\@UEAAXAEBVContainerScreenContext\@\@\@Z
     */
    virtual void commit(class ContainerScreenContext const&);
    /**
     * @symbol ??0ExperienceRewardCommitObject\@\@QEAA\@H\@Z
     */
    MCAPI ExperienceRewardCommitObject(int);
    // NOLINTEND
};
