#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationCraftResult {
public:
    // prevent constructor by default
    ContainerValidationCraftResult& operator=(ContainerValidationCraftResult const&);
    ContainerValidationCraftResult(ContainerValidationCraftResult const&);

public:
    // NOLINTBEGIN
    MCAPI ContainerValidationCraftResult();

    MCAPI ContainerValidationCraftResult(struct ContainerValidationCraftResult&&);

    MCAPI ~ContainerValidationCraftResult();

    // NOLINTEND
};
