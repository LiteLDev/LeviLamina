#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class StoneCutterInputContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    StoneCutterInputContainerValidation& operator=(StoneCutterInputContainerValidation const&);
    StoneCutterInputContainerValidation(StoneCutterInputContainerValidation const&);
    StoneCutterInputContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 0
    virtual ~StoneCutterInputContainerValidation() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
