#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RemoteConnector {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOTECONNECTOR
public:
    RemoteConnector& operator=(RemoteConnector const&) = delete;
    RemoteConnector(RemoteConnector const&)            = delete;
    RemoteConnector()                                  = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOTECONNECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RemoteConnector();
#endif
};
