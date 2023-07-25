#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TcpProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TCPPROXY
public:
    TcpProxy& operator=(TcpProxy const&) = delete;
    TcpProxy(TcpProxy const&)            = delete;
    TcpProxy()                           = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TCPPROXY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TcpProxy();
#endif
};
