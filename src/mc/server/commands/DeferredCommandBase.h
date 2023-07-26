#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DeferredCommandBase {

public:
    // prevent constructor by default
    DeferredCommandBase& operator=(DeferredCommandBase const&) = delete;
    DeferredCommandBase(DeferredCommandBase const&)            = delete;
    DeferredCommandBase()                                      = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFERREDCOMMANDBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DeferredCommandBase(); // NOLINT
#endif
};
