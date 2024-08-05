#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCommitObject.h"

class ExperienceCostCommitObject : public ::ContainerValidationCommitObject {
public:
    // prevent constructor by default
    ExperienceCostCommitObject& operator=(ExperienceCostCommitObject const&);
    ExperienceCostCommitObject(ExperienceCostCommitObject const&);
    ExperienceCostCommitObject();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExperienceCostCommitObject() = default;

    // vIndex: 1
    virtual bool append(class ContainerValidationCommitObject* other);

    // vIndex: 2
    virtual bool canCommit(class ContainerScreenContext const& screenContext) const;

    // vIndex: 3
    virtual void commit(class ContainerScreenContext const& screenContext);

    // NOLINTEND
};
