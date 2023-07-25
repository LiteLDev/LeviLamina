#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkSessionOwner {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSESSIONOWNER
public:
    NetworkSessionOwner& operator=(NetworkSessionOwner const&) = delete;
    NetworkSessionOwner(NetworkSessionOwner const&)            = delete;
#endif

public:
    /**
     * @symbol ??0NetworkSessionOwner\@\@QEAA\@XZ
     */
    MCAPI NetworkSessionOwner();
    /**
     * @symbol ?getTransportLayer\@NetworkSessionOwner\@\@QEBA?AW4TransportLayer\@\@XZ
     */
    MCAPI enum class TransportLayer getTransportLayer() const;
};
