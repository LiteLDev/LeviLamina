#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct NetworkID {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNET_NETWORKID
public:
    NetworkID& operator=(NetworkID const&) = delete;
    NetworkID(NetworkID const&)            = delete;
    NetworkID()                            = delete;
#endif

public:
};

}; // namespace NetherNet
