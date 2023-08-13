#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"

class ContainerScreenValidationCrafting : public ::ContainerScreenValidation {

public:
    // prevent constructor by default
    ContainerScreenValidationCrafting& operator=(ContainerScreenValidationCrafting const&) = delete;
    ContainerScreenValidationCrafting(ContainerScreenValidationCrafting const&)            = delete;
    ContainerScreenValidationCrafting()                                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?tryCraft\@ContainerScreenValidationCrafting\@\@UEAA?AUContainerValidationResult\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @vftbl 2
     * @symbol
     * ?getCraftResults\@ContainerScreenValidationCrafting\@\@UEAA?AUContainerValidationCraftResult\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationCraftResult
        getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_appendCraftResult\@ContainerScreenValidationCrafting\@\@AEAAXAEAUContainerValidationCraftResult\@\@\@Z
     */
    MCAPI void _appendCraftResult(struct ContainerValidationCraftResult&);
    // NOLINTEND
};
