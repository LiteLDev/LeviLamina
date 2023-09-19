#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerValidationCommitObject {
public:
    // prevent constructor by default
    ContainerValidationCommitObject& operator=(ContainerValidationCommitObject const&);
    ContainerValidationCommitObject(ContainerValidationCommitObject const&);
    ContainerValidationCommitObject();

public:
    // NOLINTBEGIN
    // symbol:
    // ?append@ContainerValidationCommitObject@@SAXV?$shared_ptr@VContainerValidationCommitObject@@@std@@AEAV?$vector@V?$shared_ptr@VContainerValidationCommitObject@@@std@@V?$allocator@V?$shared_ptr@VContainerValidationCommitObject@@@std@@@2@@3@@Z
    MCAPI static void
    append(std::shared_ptr<class ContainerValidationCommitObject>, std::vector<std::shared_ptr<class ContainerValidationCommitObject>>&);

    // NOLINTEND
};
