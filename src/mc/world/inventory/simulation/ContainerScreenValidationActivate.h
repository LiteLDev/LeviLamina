#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"

class ContainerScreenValidationActivate : public ::ContainerScreenValidation {
public:
    // prevent constructor by default
    ContainerScreenValidationActivate& operator=(ContainerScreenValidationActivate const&);
    ContainerScreenValidationActivate(ContainerScreenValidationActivate const&);
    ContainerScreenValidationActivate();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerScreenValidationActivate() = default;

    // vIndex: 3
    virtual struct ContainerValidationResult tryActivate();

    // NOLINTEND
};
