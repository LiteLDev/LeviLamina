#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CartographyContainerScreenValidator {

public:
    // prevent constructor by default
    CartographyContainerScreenValidator& operator=(CartographyContainerScreenValidator const&) = delete;
    CartographyContainerScreenValidator(CartographyContainerScreenValidator const&)            = delete;

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
     * @symbol ?isCraftingImplemented\@CartographyContainerScreenValidator\@\@UEAA_NXZ
     */
    virtual bool isCraftingImplemented(); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getCraftResult\@CartographyContainerScreenValidator\@\@UEAA?AUContainerValidationCraftResult\@\@AEBVContainerScreenContext\@\@AEAVContainerScreenValidation\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationCraftResult
    getCraftResult(class ContainerScreenContext const&, class ContainerScreenValidation&, std::unique_ptr<struct ContainerValidationCraftInputs>); // NOLINT
    /**
     * @symbol ??0CartographyContainerScreenValidator\@\@QEAA\@XZ
     */
    MCAPI CartographyContainerScreenValidator(); // NOLINT
};
