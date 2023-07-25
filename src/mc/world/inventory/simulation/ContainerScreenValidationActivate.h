#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"

class ContainerScreenValidationActivate : public ::ContainerScreenValidation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATIONACTIVATE
public:
    ContainerScreenValidationActivate& operator=(ContainerScreenValidationActivate const&) = delete;
    ContainerScreenValidationActivate(ContainerScreenValidationActivate const&)            = delete;
    ContainerScreenValidationActivate()                                                    = delete;
#endif

public:
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
};
