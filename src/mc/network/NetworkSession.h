#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkSession {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSESSION
public:
    NetworkSession& operator=(NetworkSession const&) = delete;
    NetworkSession(NetworkSession const&)            = delete;
    NetworkSession()                                 = delete;
#endif

public:
    /**
     * @symbol ?getTransportLayer\@NetworkSession\@\@QEBA?AW4TransportLayer\@\@XZ
     */
    MCAPI enum class TransportLayer getTransportLayer() const;
};
