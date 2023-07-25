#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DeferredCommandBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDCOMMANDBASE
public:
    DeferredCommandBase& operator=(DeferredCommandBase const&) = delete;
    DeferredCommandBase(DeferredCommandBase const&)            = delete;
    DeferredCommandBase()                                      = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFERREDCOMMANDBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DeferredCommandBase();
#endif
};
