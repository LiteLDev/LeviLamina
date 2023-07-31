#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RemoteConnector {

public:
    // prevent constructor by default
    RemoteConnector& operator=(RemoteConnector const&) = delete;
    RemoteConnector(RemoteConnector const&)            = delete;
    RemoteConnector()                                  = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOTECONNECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RemoteConnector();
#endif
    // NOLINTEND
};
