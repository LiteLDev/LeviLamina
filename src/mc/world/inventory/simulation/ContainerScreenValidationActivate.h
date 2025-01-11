#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"

// auto generated forward declare list
// clang-format off
struct ContainerValidationResult;
// clang-format on

class ContainerScreenValidationActivate : public ::ContainerScreenValidation {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::ContainerValidationResult tryActivate() /*override*/;

    // vIndex: 0
    virtual ~ContainerScreenValidationActivate() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ContainerValidationResult $tryActivate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
