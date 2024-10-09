#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class HUDContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    HUDContainerScreenValidator& operator=(HUDContainerScreenValidator const&);
    HUDContainerScreenValidator(HUDContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HUDContainerScreenValidator() = default;

    MCAPI HUDContainerScreenValidator();

    // NOLINTEND
};
