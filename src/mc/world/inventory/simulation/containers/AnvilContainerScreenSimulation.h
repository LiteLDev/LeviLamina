#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenAutoplaceBehaviour.h"
#include "mc/world/inventory/simulation/ContainerScreenSimulationCrafting.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
struct ContainerValidationCraftResult;
struct ContainerValidationSlotData;
struct ItemTransferAmount;
// clang-format on

class AnvilContainerScreenSimulation : public ::ContainerScreenSimulationCrafting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkb49bd9;
    ::ll::UntypedStorage<8, 72> mUnk40a598;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilContainerScreenSimulation& operator=(AnvilContainerScreenSimulation const&);
    AnvilContainerScreenSimulation(AnvilContainerScreenSimulation const&);
    AnvilContainerScreenSimulation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::ContainerScreenActionResult
    tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&) /*override*/;

    // vIndex: 5
    virtual ::ContainerScreenActionResult
    tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&) /*override*/;

    // vIndex: 6
    virtual ::ContainerScreenActionResult
    tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&) /*override*/;

    // vIndex: 10
    virtual ::ContainerScreenActionResult tryAutoPlace(
        ::ContainerValidationSlotData const&,
        ::ItemTransferAmount,
        ::ContainerScreenAutoplaceBehaviour
    ) /*override*/;

    // vIndex: 20
    virtual ::ContainerValidationCraftResult getCraftPreview() /*override*/;

    // vIndex: 17
    virtual void _registerCoalesceOrder() /*override*/;

    // vIndex: 18
    virtual void _registerAutoPlaceOrder() /*override*/;

    // vIndex: 0
    virtual ~AnvilContainerScreenSimulation() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
