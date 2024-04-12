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
    // vIndex: 0, symbol: __gen_??1ExperienceCostCommitObject@@UEAA@XZ
    virtual ~ExperienceCostCommitObject() = default;

    // vIndex: 1, symbol: ?append@ExperienceCostCommitObject@@UEAA_NPEAVContainerValidationCommitObject@@@Z
    virtual bool append(class ContainerValidationCommitObject* other);

    // vIndex: 2, symbol: ?canCommit@ExperienceCostCommitObject@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canCommit(class ContainerScreenContext const& screenContext) const;

    // vIndex: 3, symbol: ?commit@ExperienceCostCommitObject@@UEAAXAEBVContainerScreenContext@@@Z
    virtual void commit(class ContainerScreenContext const& screenContext);

    // symbol: ??0ExperienceCostCommitObject@@QEAA@H@Z
    MCAPI explicit ExperienceCostCommitObject(int);

    // NOLINTEND
};
