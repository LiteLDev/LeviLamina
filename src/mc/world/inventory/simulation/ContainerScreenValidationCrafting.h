#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerScreenValidationCrafting {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATIONCRAFTING
public:
    ContainerScreenValidationCrafting& operator=(ContainerScreenValidationCrafting const&) = delete;
    ContainerScreenValidationCrafting(ContainerScreenValidationCrafting const&)            = delete;
    ContainerScreenValidationCrafting()                                                    = delete;
#endif

public:
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

    // private:
    /**
     * @symbol ?_appendCraftResult\@ContainerScreenValidationCrafting\@\@AEAAXAEAUContainerValidationCraftResult\@\@\@Z
     */
    MCAPI void _appendCraftResult(struct ContainerValidationCraftResult&);

private:
};
