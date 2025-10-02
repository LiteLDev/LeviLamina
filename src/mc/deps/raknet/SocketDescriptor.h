#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SocketDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>    port;
    ::ll::TypedStorage<1, 32, char[32]> hostAddress;
    ::ll::TypedStorage<2, 2, short>     socketFamily;
    ::ll::TypedStorage<2, 2, ushort>    remotePortRakNetWasStartedOn_PS3_PSP2;
    ::ll::TypedStorage<4, 4, int>       chromeInstance;
    ::ll::TypedStorage<1, 1, bool>      blockingSocket;
    ::ll::TypedStorage<4, 4, uint>      extraSocketOptions;
    // NOLINTEND
};

} // namespace RakNet
