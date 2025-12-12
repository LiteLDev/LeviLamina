#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"

// auto generated forward declare list
// clang-format off
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
struct ContainerValidationResult;
// clang-format on

class ContainerScreenValidationCrafting : public ::ContainerScreenValidation {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ContainerValidationResult
    tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts) /*override*/;

    virtual ::ContainerValidationCraftResult getCraftResults(
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    ) /*override*/;

    virtual ~ContainerScreenValidationCrafting() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _appendCraftResult(::ContainerValidationCraftResult& craftResult);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContainerValidationResult
    $tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);

    MCNAPI ::ContainerValidationCraftResult
    $getCraftResults(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
