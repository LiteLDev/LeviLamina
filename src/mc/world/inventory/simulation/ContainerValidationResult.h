#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationOperationType.h"
#include "mc/world/inventory/simulation/ContainerValidationOutcome.h"

struct ContainerValidationResult {
public:
    // prevent constructor by default
    ContainerValidationResult& operator=(ContainerValidationResult const&);
    ContainerValidationResult();

public:
    // NOLINTBEGIN
    MCAPI explicit ContainerValidationResult(::ContainerValidationOutcome outcome);

    MCAPI ContainerValidationResult(struct ContainerValidationResult const&);

    MCAPI bool isSuccess() const;

    MCAPI struct ContainerValidationOperation const* tryGetOperation(::ContainerValidationOperationType type) const;

    MCAPI ~ContainerValidationResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ContainerValidationResult const&);

    MCAPI void* ctor$(::ContainerValidationOutcome outcome);

    MCAPI void dtor$();

    // NOLINTEND
};
