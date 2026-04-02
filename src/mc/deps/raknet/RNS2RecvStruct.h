#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SystemAddress.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakNetSocket2; }
// clang-format on

namespace RakNet {

struct RNS2RecvStruct {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1600, char[1600]>             data;
    ::ll::TypedStorage<4, 4, int>                       bytesRead;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
    ::ll::TypedStorage<8, 8, uint64>                    timeRead;
    ::ll::TypedStorage<8, 8, ::RakNet::RakNetSocket2*>  socket;
    // NOLINTEND
};

} // namespace RakNet
