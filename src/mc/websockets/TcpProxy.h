#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TcpProxy {

public:
    // prevent constructor by default
    TcpProxy& operator=(TcpProxy const&) = delete;
    TcpProxy(TcpProxy const&)            = delete;
    TcpProxy()                           = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TCPPROXY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TcpProxy(); // NOLINT
#endif
};
