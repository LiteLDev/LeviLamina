#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnvilContainerScreenValidator {

public:
    // prevent constructor by default
    AnvilContainerScreenValidator& operator=(AnvilContainerScreenValidator const&) = delete;
    AnvilContainerScreenValidator(AnvilContainerScreenValidator const&)            = delete;
    AnvilContainerScreenValidator()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isCraftingImplemented\@AnvilContainerScreenValidator\@\@UEAA_NXZ
     */
    virtual bool isCraftingImplemented(); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getCraftResult\@AnvilContainerScreenValidator\@\@UEAA?AUContainerValidationCraftResult\@\@AEBVContainerScreenContext\@\@AEAVContainerScreenValidation\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationCraftResult
    getCraftResult(class ContainerScreenContext const&, class ContainerScreenValidation&, std::unique_ptr<struct ContainerValidationCraftInputs>); // NOLINT
};
