#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerValidationOperationType.h"

struct ContainerValidationOperation {
public:
    // prevent constructor by default
    ContainerValidationOperation& operator=(ContainerValidationOperation const&);
    ContainerValidationOperation(ContainerValidationOperation const&);
    ContainerValidationOperation();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ContainerValidationOperation@@QEAA@W4ContainerValidationOperationType@@AEBUContainerValidationSlotData@@HAEBVItemStack@@@Z
    MCAPI ContainerValidationOperation(
        ::ContainerValidationOperationType type,
        struct ContainerValidationSlotData const&,
        int                    amount,
        class ItemStack const& stack
    );

    // NOLINTEND
};
