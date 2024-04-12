#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCommitObject.h"

class ExperienceRewardCommitObject : public ::ContainerValidationCommitObject {
public:
    // prevent constructor by default
    ExperienceRewardCommitObject& operator=(ExperienceRewardCommitObject const&);
    ExperienceRewardCommitObject(ExperienceRewardCommitObject const&);
    ExperienceRewardCommitObject();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ExperienceRewardCommitObject@@UEAA@XZ
    virtual ~ExperienceRewardCommitObject() = default;

    // vIndex: 1, symbol: ?append@ExperienceRewardCommitObject@@UEAA_NPEAVContainerValidationCommitObject@@@Z
    virtual bool append(class ContainerValidationCommitObject* other);

    // vIndex: 2, symbol: ?canCommit@ExperienceRewardCommitObject@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canCommit(class ContainerScreenContext const&) const;

    // vIndex: 3, symbol: ?commit@ExperienceRewardCommitObject@@UEAAXAEBVContainerScreenContext@@@Z
    virtual void commit(class ContainerScreenContext const& screenContext);

    // symbol: ??0ExperienceRewardCommitObject@@QEAA@H@Z
    MCAPI explicit ExperienceRewardCommitObject(int);

    // NOLINTEND
};
