#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerMetrics {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMETRICS
public:
    ServerMetrics& operator=(ServerMetrics const&) = delete;
    ServerMetrics(ServerMetrics const&)            = delete;
    ServerMetrics()                                = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERMETRICS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerMetrics();
#endif
};
