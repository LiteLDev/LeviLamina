#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ContainerScreenValidatorBase;
class ContainerValidationBase;
struct FullContainerName;
// clang-format on

class ContainerValidatorFactory {
public:
    // prevent constructor by default
    ContainerValidatorFactory& operator=(ContainerValidatorFactory const&);
    ContainerValidatorFactory(ContainerValidatorFactory const&);
    ContainerValidatorFactory();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::ContainerScreenValidatorBase>
    createContainerScreenValidator(::ContainerScreenContext const& screenContext);

    MCAPI static ::std::shared_ptr<::ContainerValidationBase const> createContainerValidator(
        ::FullContainerName const&      containerId,
        ::ContainerScreenContext const& screenContext,
        ::ContainerValidationCaller     caller
    );

    MCAPI static ::Container*
    getBackingContainer(::FullContainerName const& containerEnumName, ::ContainerScreenContext const& screenContext);
    // NOLINTEND
};
