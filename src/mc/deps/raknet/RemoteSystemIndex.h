#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RemoteSystemIndex {
public:
    // prevent constructor by default
    RemoteSystemIndex& operator=(RemoteSystemIndex const&);
    RemoteSystemIndex(RemoteSystemIndex const&);
    RemoteSystemIndex();
};

}; // namespace RakNet
