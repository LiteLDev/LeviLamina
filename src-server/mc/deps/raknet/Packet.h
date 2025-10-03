#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"

namespace RakNet {

struct Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     guid;
    ::ll::TypedStorage<4, 4, uint>                      length;
    ::ll::TypedStorage<4, 4, uint>                      bitSize;
    ::ll::TypedStorage<8, 8, uchar*>                    data;
    ::ll::TypedStorage<1, 1, bool>                      deleteData;
    ::ll::TypedStorage<1, 1, bool>                      wasGeneratedLocally;
    // NOLINTEND
};

} // namespace RakNet
