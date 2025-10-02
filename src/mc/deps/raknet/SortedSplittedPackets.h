#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct InternalPacket; }
// clang-format on

namespace RakNet {

class SortedSplittedPackets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket**> data;
    ::ll::TypedStorage<4, 4, uint>                       allocation_size;
    ::ll::TypedStorage<4, 4, uint>                       addedPacketsCount;
    ::ll::TypedStorage<2, 2, ushort>                     packetId;
    // NOLINTEND
};

} // namespace RakNet
