#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEntityRegistryOwner {

public:
    // prevent constructor by default
    IEntityRegistryOwner& operator=(IEntityRegistryOwner const&) = delete;
    IEntityRegistryOwner(IEntityRegistryOwner const&)            = delete;
    IEntityRegistryOwner()                                       = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IENTITYREGISTRYOWNER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IEntityRegistryOwner(); // NOLINT
#endif
};
