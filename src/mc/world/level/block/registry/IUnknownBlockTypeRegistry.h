#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUnknownBlockTypeRegistry {

public:
    // prevent constructor by default
    IUnknownBlockTypeRegistry& operator=(IUnknownBlockTypeRegistry const&) = delete;
    IUnknownBlockTypeRegistry(IUnknownBlockTypeRegistry const&)            = delete;
    IUnknownBlockTypeRegistry()                                            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IUNKNOWNBLOCKTYPEREGISTRY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IUnknownBlockTypeRegistry();
#endif
    // NOLINTEND
};
