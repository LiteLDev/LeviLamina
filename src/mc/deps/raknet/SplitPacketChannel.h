#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SortedSplittedPackets.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct InternalPacket; }
// clang-format on

namespace RakNet {

struct SplitPacketChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                           lastUpdateTime;
    ::ll::TypedStorage<8, 24, ::RakNet::SortedSplittedPackets> splitPacketList;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>        firstPacket;
    // NOLINTEND
};

} // namespace RakNet
