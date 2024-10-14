#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationSlotInfo {
public:
    // prevent constructor by default
    ContainerValidationSlotInfo& operator=(ContainerValidationSlotInfo const&);
    ContainerValidationSlotInfo(ContainerValidationSlotInfo const&);
    ContainerValidationSlotInfo();

public:
    // NOLINTBEGIN
    MCAPI ~ContainerValidationSlotInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
