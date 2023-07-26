#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerScreenValidationCrafting {

public:
    // prevent constructor by default
    ContainerScreenValidationCrafting& operator=(ContainerScreenValidationCrafting const&) = delete;
    ContainerScreenValidationCrafting(ContainerScreenValidationCrafting const&)            = delete;
    ContainerScreenValidationCrafting()                                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?tryCraft\@ContainerScreenValidationCrafting\@\@UEAA?AUContainerValidationResult\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getCraftResults\@ContainerScreenValidationCrafting\@\@UEAA?AUContainerValidationCraftResult\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationCraftResult
        getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>); // NOLINT

    // private:
    /**
     * @symbol ?_appendCraftResult\@ContainerScreenValidationCrafting\@\@AEAAXAEAUContainerValidationCraftResult\@\@\@Z
     */
    MCAPI void _appendCraftResult(struct ContainerValidationCraftResult&); // NOLINT

private:
};
