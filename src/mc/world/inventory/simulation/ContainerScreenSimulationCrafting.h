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
#ifdef LL_PLAT_S
    virtual ::ContainerScreenActionResult tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs>);
#else // LL_PLAT_C
    virtual ::ContainerScreenActionResult tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs);
#endif

    virtual ::ContainerValidationCraftResult getCraftPreview();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs);
#endif


    // NOLINTEND
};
