#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/uint24_t.h"

namespace RakNet {

struct InternalPacketFixedSizeTransmissionHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>  reliableMessageNumber;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>  orderingIndex;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>  sequencingIndex;
    ::ll::TypedStorage<1, 1, uchar>               orderingChannel;
    ::ll::TypedStorage<2, 2, ushort>              splitPacketId;
    ::ll::TypedStorage<4, 4, uint>                splitPacketIndex;
    ::ll::TypedStorage<4, 4, uint>                splitPacketCount;
    ::ll::TypedStorage<4, 4, uint>                dataBitLength;
    ::ll::TypedStorage<4, 4, ::PacketReliability> reliability;
    // NOLINTEND
};

} // namespace RakNet
