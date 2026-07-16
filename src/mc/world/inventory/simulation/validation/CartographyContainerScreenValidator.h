#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ContainerScreenValidation;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
// clang-format on

class CartographyContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isCraftingImplemented() /*override*/;

    virtual ::ContainerValidationCraftResult getCraftResult(
        ::ContainerScreenContext const&,
        ::ContainerScreenValidation&,
        ::std::unique_ptr<::ContainerValidationCraftInputs>,
        uchar const
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
