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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?append@ExperienceCostCommitObject@@UEAA_NPEAVContainerValidationCommitObject@@@Z
    virtual bool append(class ContainerValidationCommitObject*);

    // vIndex: 2, symbol: ?canCommit@ExperienceCostCommitObject@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canCommit(class ContainerScreenContext const&) const;

    // vIndex: 3, symbol: ?commit@ExperienceCostCommitObject@@UEAAXAEBVContainerScreenContext@@@Z
    virtual void commit(class ContainerScreenContext const&);

    // symbol: ??0ExperienceCostCommitObject@@QEAA@H@Z
    MCAPI explicit ExperienceCostCommitObject(int);

    // NOLINTEND
};
