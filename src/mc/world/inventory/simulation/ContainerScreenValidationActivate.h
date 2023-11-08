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
    // vIndex: 0, symbol: __gen_??1ContainerScreenValidationActivate@@UEAA@XZ
    virtual ~ContainerScreenValidationActivate() = default;

    // vIndex: 3, symbol: ?tryActivate@ContainerScreenValidationActivate@@EEAA?AUContainerValidationResult@@XZ
    virtual struct ContainerValidationResult tryActivate();

    // NOLINTEND
};
