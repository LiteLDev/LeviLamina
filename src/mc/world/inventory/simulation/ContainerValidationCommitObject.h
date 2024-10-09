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
    MCAPI static void append(
        std::shared_ptr<class ContainerValidationCommitObject>               commitObject,
        std::vector<std::shared_ptr<class ContainerValidationCommitObject>>& objectList
    );

    // NOLINTEND
};
