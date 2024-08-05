#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerValidationCaller.h"

class ContainerValidatorFactory {
public:
    // prevent constructor by default
    ContainerValidatorFactory& operator=(ContainerValidatorFactory const&);
    ContainerValidatorFactory(ContainerValidatorFactory const&);
    ContainerValidatorFactory();

public:
    // NOLINTBEGIN
    MCAPI static std::unique_ptr<class ContainerScreenValidatorBase>
    createContainerScreenValidator(class ContainerScreenContext const& screenContext);

    MCAPI static std::shared_ptr<class ContainerValidationBase const> createContainerValidator(
        ::ContainerEnumName                 containerId,
        class ContainerScreenContext const& screenContext,
        ::ContainerValidationCaller
    );

    MCAPI static class Container*
    getBackingContainer(::ContainerEnumName containerEnumName, class ContainerScreenContext const& screenContext);

    // NOLINTEND
};
