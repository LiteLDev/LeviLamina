#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerMetrics {

public:
    // prevent constructor by default
    ServerMetrics& operator=(ServerMetrics const&) = delete;
    ServerMetrics(ServerMetrics const&)            = delete;
    ServerMetrics()                                = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERMETRICS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerMetrics();
#endif
    // NOLINTEND
};
