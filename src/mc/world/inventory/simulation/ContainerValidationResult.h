#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"
#include "mc/world/inventory/simulation/ContainerValidationOperationType.h"
#include "mc/world/inventory/simulation/ContainerValidationOutcome.h"

// auto generated forward declare list
// clang-format off
struct ContainerValidationOperation;
// clang-format on

struct ContainerValidationResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerValidationOperation>> mOperations;
    ::ll::TypedStorage<4, 4, ::ContainerValidationOutcome>                   mOutcome;
    ::ll::TypedStorage<1, 1, ::ContainerScreenRequestActionType>             mRequestActionType;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ContainerValidationResult(::ContainerValidationOutcome outcome);

    MCFOLD bool isSuccess() const;

    MCAPI ::ContainerValidationOperation const* tryGetOperation(::ContainerValidationOperationType type) const;

    MCAPI ~ContainerValidationResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerValidationOutcome outcome);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
