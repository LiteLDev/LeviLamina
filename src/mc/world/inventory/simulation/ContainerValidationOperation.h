#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationOperation {

public:
    // prevent constructor by default
    ContainerValidationOperation& operator=(ContainerValidationOperation const&) = delete;
    ContainerValidationOperation(ContainerValidationOperation const&)            = delete;
    ContainerValidationOperation()                                               = delete;
};
