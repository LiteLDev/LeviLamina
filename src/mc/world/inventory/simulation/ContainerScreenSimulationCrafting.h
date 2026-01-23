#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenSimulation.h"
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class IContainerTransfer;
struct ContainerScreenActionResult;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
struct FullContainerName;
// clang-format on

class ContainerScreenSimulationCrafting : public ::ContainerScreenSimulation {
public:
    // prevent constructor by default
    ContainerScreenSimulationCrafting();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ContainerScreenActionResult tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs);

    virtual ::ContainerValidationCraftResult getCraftPreview();

    virtual ~ContainerScreenSimulationCrafting() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ContainerScreenSimulationCrafting(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller,
        ::std::unique_ptr<::IContainerTransfer>&&,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller,
        ::std::unique_ptr<::IContainerTransfer>&&,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>>
    );
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
