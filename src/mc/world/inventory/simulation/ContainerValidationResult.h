#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerScreenRequestActionType.h"
#include "mc/world/containers/ContainerValidationOperationType.h"
#include "mc/world/containers/ContainerValidationOutcome.h"

struct ContainerValidationResult {
public:
    // prevent constructor by default
    ContainerValidationResult& operator=(ContainerValidationResult const&);
    ContainerValidationResult();

public:
    // NOLINTBEGIN
    // symbol: ??0ContainerValidationResult@@QEAA@W4ContainerValidationOutcome@@@Z
    MCAPI explicit ContainerValidationResult(::ContainerValidationOutcome outcome);

    // symbol: ??0ContainerValidationResult@@QEAA@AEBU0@@Z
    MCAPI ContainerValidationResult(struct ContainerValidationResult const&);

    // symbol:
    // ??0ContainerValidationResult@@QEAA@$$QEAV?$vector@UContainerValidationOperation@@V?$allocator@UContainerValidationOperation@@@std@@@std@@W4ContainerValidationOutcome@@W4ContainerScreenRequestActionType@@@Z
    MCAPI ContainerValidationResult(
        std::vector<struct ContainerValidationOperation>&&,
        ::ContainerValidationOutcome outcome,
        ::ContainerScreenRequestActionType
    );

    // symbol: ?isSuccess@ContainerValidationResult@@QEBA_NXZ
    MCAPI bool isSuccess() const;

    // symbol: ??4ContainerValidationResult@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ContainerValidationResult& operator=(struct ContainerValidationResult&&);

    // symbol:
    // ?tryGetOperation@ContainerValidationResult@@QEBAPEBUContainerValidationOperation@@W4ContainerValidationOperationType@@@Z
    MCAPI struct ContainerValidationOperation const* tryGetOperation(::ContainerValidationOperationType type) const;

    // symbol: ??1ContainerValidationResult@@QEAA@XZ
    MCAPI ~ContainerValidationResult();

    // NOLINTEND
};
