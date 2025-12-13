#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenSimulation.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
// clang-format on

class ContainerScreenSimulationCrafting : public ::ContainerScreenSimulation {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ContainerScreenActionResult tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs);

    virtual ::ContainerValidationCraftResult getCraftPreview();

    virtual ~ContainerScreenSimulationCrafting() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs);

    MCNAPI ::ContainerValidationCraftResult $getCraftPreview();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
