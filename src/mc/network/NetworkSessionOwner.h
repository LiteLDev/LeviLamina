#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkSessionOwner {

public:
    // prevent constructor by default
    NetworkSessionOwner& operator=(NetworkSessionOwner const&) = delete;
    NetworkSessionOwner(NetworkSessionOwner const&)            = delete;

public:
    /**
     * @symbol ??0NetworkSessionOwner\@\@QEAA\@XZ
     */
    MCAPI NetworkSessionOwner(); // NOLINT
    /**
     * @symbol ?getTransportLayer\@NetworkSessionOwner\@\@QEBA?AW4TransportLayer\@\@XZ
     */
    MCAPI enum class TransportLayer getTransportLayer() const; // NOLINT
};
