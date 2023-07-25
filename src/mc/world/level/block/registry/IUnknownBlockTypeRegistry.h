#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUnknownBlockTypeRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IUNKNOWNBLOCKTYPEREGISTRY
public:
    IUnknownBlockTypeRegistry& operator=(IUnknownBlockTypeRegistry const&) = delete;
    IUnknownBlockTypeRegistry(IUnknownBlockTypeRegistry const&)            = delete;
    IUnknownBlockTypeRegistry()                                            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IUNKNOWNBLOCKTYPEREGISTRY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IUnknownBlockTypeRegistry();
#endif
};
