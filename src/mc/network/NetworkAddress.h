#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkAddress {

public:
    // prevent constructor by default
    NetworkAddress& operator=(NetworkAddress const&) = delete;
    NetworkAddress(NetworkAddress const&)            = delete;
    NetworkAddress()                                 = delete;

public:
    /**
     * @symbol ??1NetworkAddress\@\@QEAA\@XZ
     */
    MCAPI ~NetworkAddress(); // NOLINT
};
