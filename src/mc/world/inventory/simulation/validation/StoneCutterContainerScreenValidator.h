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

class StoneCutterContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isCraftingImplemented() /*override*/;

    virtual ::ContainerValidationCraftResult getCraftResult(
        ::ContainerScreenContext const&                     screenContext,
        ::ContainerScreenValidation&                        screenValidation,
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isCraftingImplemented();

    MCAPI ::ContainerValidationCraftResult $getCraftResult(
        ::ContainerScreenContext const&                     screenContext,
        ::ContainerScreenValidation&                        screenValidation,
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
