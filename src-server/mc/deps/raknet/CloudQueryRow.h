#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/CloudKey.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"

namespace RakNet {

struct CloudQueryRow {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::RakNet::CloudKey>       key;
    ::ll::TypedStorage<8, 8, uchar*>                    data;
    ::ll::TypedStorage<4, 4, uint>                      length;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> serverSystemAddress;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> clientSystemAddress;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     serverGUID;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     clientGUID;
    // NOLINTEND
};

} // namespace RakNet
