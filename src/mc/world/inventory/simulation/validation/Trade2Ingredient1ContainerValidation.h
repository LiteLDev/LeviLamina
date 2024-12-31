#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class Trade2Ingredient1ContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    Trade2Ingredient1ContainerValidation& operator=(Trade2Ingredient1ContainerValidation const&);
    Trade2Ingredient1ContainerValidation(Trade2Ingredient1ContainerValidation const&);
    Trade2Ingredient1ContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 0
    virtual ~Trade2Ingredient1ContainerValidation() /*override*/ = default;
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
