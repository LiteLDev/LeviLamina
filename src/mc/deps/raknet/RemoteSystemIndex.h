#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RemoteSystemIndex {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_REMOTESYSTEMINDEX
public:
    RemoteSystemIndex& operator=(RemoteSystemIndex const&) = delete;
    RemoteSystemIndex(RemoteSystemIndex const&)            = delete;
    RemoteSystemIndex()                                    = delete;
#endif

public:
};

}; // namespace RakNet
