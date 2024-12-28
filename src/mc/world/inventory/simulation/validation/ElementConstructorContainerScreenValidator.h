#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class ElementConstructorContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    ElementConstructorContainerScreenValidator& operator=(ElementConstructorContainerScreenValidator const&);
    ElementConstructorContainerScreenValidator(ElementConstructorContainerScreenValidator const&);
    ElementConstructorContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ElementConstructorContainerScreenValidator() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
