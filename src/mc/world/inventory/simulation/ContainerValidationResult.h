#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 24> mUnk4a3990;
    ::ll::UntypedStorage<4, 4>  mUnkd9c671;
    ::ll::UntypedStorage<1, 1>  mUnk25938f;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationResult& operator=(ContainerValidationResult const&);
    ContainerValidationResult(ContainerValidationResult const&);
    ContainerValidationResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ContainerValidationResult(::ContainerValidationOutcome outcome);

    MCAPI bool isSuccess() const;

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
