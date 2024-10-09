#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"

class ContainerScreenValidationCrafting : public ::ContainerScreenValidation {
public:
    // prevent constructor by default
    ContainerScreenValidationCrafting& operator=(ContainerScreenValidationCrafting const&);
    ContainerScreenValidationCrafting(ContainerScreenValidationCrafting const&);
    ContainerScreenValidationCrafting();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerScreenValidationCrafting() = default;

    // vIndex: 1
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs> craftInputs
    );

    // vIndex: 2
    virtual struct ContainerValidationCraftResult
    getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs> craftInputs);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _appendCraftResult(struct ContainerValidationCraftResult& craftResult);

    // NOLINTEND
};
