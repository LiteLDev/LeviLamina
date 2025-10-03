#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakString.h"

namespace RakNet {

struct CloudKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::RakString> primaryKey;
    ::ll::TypedStorage<4, 4, uint>                secondaryKey;
    // NOLINTEND
};

} // namespace RakNet
