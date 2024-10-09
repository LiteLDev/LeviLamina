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
    // vIndex: 0
    virtual ~ExperienceRewardCommitObject() = default;

    // vIndex: 1
    virtual bool append(class ContainerValidationCommitObject* other);

    // vIndex: 2
    virtual bool canCommit(class ContainerScreenContext const&) const;

    // vIndex: 3
    virtual void commit(class ContainerScreenContext const& screenContext);

    MCAPI explicit ExperienceRewardCommitObject(int experienceReward);

    // NOLINTEND
};
