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
    // prevent constructor by default
    ContainerScreenValidationCrafting& operator=(ContainerScreenValidationCrafting const&);
    ContainerScreenValidationCrafting(ContainerScreenValidationCrafting const&);
    ContainerScreenValidationCrafting();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::ContainerValidationResult
    tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts) /*override*/;

    // vIndex: 2
    virtual ::ContainerValidationCraftResult getCraftResults(
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    ) /*override*/;

    // vIndex: 0
    virtual ~ContainerScreenValidationCrafting() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _appendCraftResult(::ContainerValidationCraftResult& craftResult);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ContainerValidationResult
    $tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);

    MCAPI ::ContainerValidationCraftResult
    $getCraftResults(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
