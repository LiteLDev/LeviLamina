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
    // vIndex: 0, symbol: __gen_??1ContainerScreenValidationCrafting@@UEAA@XZ
    virtual ~ContainerScreenValidationCrafting() = default;

    // vIndex: 1, symbol:
    // ?tryCraft@ContainerScreenValidationCrafting@@UEAA?AUContainerValidationResult@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);

    // vIndex: 2, symbol:
    // ?getCraftResults@ContainerScreenValidationCrafting@@UEAA?AUContainerValidationCraftResult@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
    virtual struct ContainerValidationCraftResult
        getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_appendCraftResult@ContainerScreenValidationCrafting@@AEAAXAEAUContainerValidationCraftResult@@@Z
    MCAPI void _appendCraftResult(struct ContainerValidationCraftResult& craftResult);

    // NOLINTEND
};
