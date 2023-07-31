#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"

class ContainerScreenValidationActivate : public ::ContainerScreenValidation {

public:
    // prevent constructor by default
    ContainerScreenValidationActivate& operator=(ContainerScreenValidationActivate const&) = delete;
    ContainerScreenValidationActivate(ContainerScreenValidationActivate const&)            = delete;
    ContainerScreenValidationActivate()                                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?tryActivate\@ContainerScreenValidationActivate\@\@EEAA?AUContainerValidationResult\@\@XZ
     */
    virtual struct ContainerValidationResult tryActivate();
    // NOLINTEND
};
