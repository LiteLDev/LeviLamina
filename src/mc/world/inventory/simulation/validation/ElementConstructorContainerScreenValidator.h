#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class ElementConstructorContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    ElementConstructorContainerScreenValidator& operator=(ElementConstructorContainerScreenValidator const&);
    ElementConstructorContainerScreenValidator(ElementConstructorContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ElementConstructorContainerScreenValidator() = default;

    MCAPI ElementConstructorContainerScreenValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
