#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkSession {

public:
    // prevent constructor by default
    NetworkSession& operator=(NetworkSession const&) = delete;
    NetworkSession(NetworkSession const&)            = delete;
    NetworkSession()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getTransportLayer\@NetworkSession\@\@QEBA?AW4TransportLayer\@\@XZ
     */
    MCAPI enum class TransportLayer getTransportLayer() const;
    // NOLINTEND
};
