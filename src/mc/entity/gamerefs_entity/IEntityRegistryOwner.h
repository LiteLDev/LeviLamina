#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEntityRegistryOwner {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IENTITYREGISTRYOWNER
public:
    IEntityRegistryOwner& operator=(IEntityRegistryOwner const&) = delete;
    IEntityRegistryOwner(IEntityRegistryOwner const&)            = delete;
    IEntityRegistryOwner()                                       = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IENTITYREGISTRYOWNER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IEntityRegistryOwner();
#endif
};
