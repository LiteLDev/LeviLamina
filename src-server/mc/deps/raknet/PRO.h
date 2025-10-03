#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PacketReliability.h"

namespace RakNet {

struct PRO {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PacketPriority>    priority;
    ::ll::TypedStorage<4, 4, ::PacketReliability> reliability;
    ::ll::TypedStorage<1, 1, char>                orderingChannel;
    ::ll::TypedStorage<4, 4, uint>                sendReceipt;
    // NOLINTEND
};

} // namespace RakNet
