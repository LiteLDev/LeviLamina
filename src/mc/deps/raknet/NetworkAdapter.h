#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SystemAddress.h"

namespace RakNet {

struct NetworkAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                           attributeFlags;
    ::ll::TypedStorage<4, 4, int>                            interfaceIndex;
    ::ll::TypedStorage<1, 1, bool>                           isDisabled;
    ::ll::TypedStorage<8, 2856, ::RakNet::SystemAddress[21]> addresses;
    // NOLINTEND
};

} // namespace RakNet
