#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RemoteSystemIndex {

public:
    // prevent constructor by default
    RemoteSystemIndex& operator=(RemoteSystemIndex const&) = delete;
    RemoteSystemIndex(RemoteSystemIndex const&)            = delete;
    RemoteSystemIndex()                                    = delete;
};

}; // namespace RakNet
