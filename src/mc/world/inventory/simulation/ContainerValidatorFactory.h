#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ContainerValidationBase;
struct FullContainerName;
// clang-format on

class ContainerValidatorFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::ContainerValidationBase const> createContainerValidator(
        ::FullContainerName const&      containerId,
        ::ContainerScreenContext const& screenContext,
        ::ContainerValidationCaller     caller
    );
    // NOLINTEND
};
