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
    // vIndex: 19
    virtual ::ContainerScreenActionResult tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs>);

    // vIndex: 20
    virtual ::ContainerValidationCraftResult getCraftPreview();

    // vIndex: 0
    virtual ~ContainerScreenSimulationCrafting() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
