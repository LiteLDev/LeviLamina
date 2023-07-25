#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkAddress {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKADDRESS
public:
    NetworkAddress& operator=(NetworkAddress const&) = delete;
    NetworkAddress(NetworkAddress const&)            = delete;
    NetworkAddress()                                 = delete;
#endif

public:
    /**
     * @symbol ??1NetworkAddress\@\@QEAA\@XZ
     */
    MCAPI ~NetworkAddress();
};
