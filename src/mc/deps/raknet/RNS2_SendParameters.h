#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SystemAddress.h"

namespace RakNet {

struct RNS2_SendParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char*>                     data;
    ::ll::TypedStorage<4, 4, int>                       length;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
    ::ll::TypedStorage<4, 4, int>                       ttl;
    // NOLINTEND
};

} // namespace RakNet
