#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class FurnaceResultContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    FurnaceResultContainerValidation& operator=(FurnaceResultContainerValidation const&);
    FurnaceResultContainerValidation(FurnaceResultContainerValidation const&);
    FurnaceResultContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 0
    virtual ~FurnaceResultContainerValidation() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
