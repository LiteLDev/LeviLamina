#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RemoteSystemIndex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                         index;
    ::ll::TypedStorage<8, 8, ::RakNet::RemoteSystemIndex*> next;
    // NOLINTEND
};

} // namespace RakNet
