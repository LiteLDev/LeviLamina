#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenSimulation.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
// clang-format on

class ContainerScreenSimulationActivate : public ::ContainerScreenSimulation {
public:
    // prevent constructor by default
    ContainerScreenSimulationActivate& operator=(ContainerScreenSimulationActivate const&);
    ContainerScreenSimulationActivate(ContainerScreenSimulationActivate const&);
    ContainerScreenSimulationActivate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 19
    virtual ::ContainerScreenActionResult tryActivate();

    // vIndex: 0
    virtual ~ContainerScreenSimulationActivate() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ContainerScreenActionResult $tryActivate();
    // NOLINTEND
};
