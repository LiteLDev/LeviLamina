#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RNS2EventHandler; }
// clang-format on

namespace RakNet {

struct RNS2_BerkleyBindParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                      port;
    ::ll::TypedStorage<8, 8, char*>                       hostAddress;
    ::ll::TypedStorage<2, 2, ushort>                      addressFamily;
    ::ll::TypedStorage<4, 4, int>                         type;
    ::ll::TypedStorage<4, 4, int>                         protocol;
    ::ll::TypedStorage<1, 1, bool>                        nonBlockingSocket;
    ::ll::TypedStorage<4, 4, int>                         setBroadcast;
    ::ll::TypedStorage<4, 4, int>                         setIPHdrIncl;
    ::ll::TypedStorage<4, 4, int>                         doNotFragment;
    ::ll::TypedStorage<4, 4, int>                         pollingThreadPriority;
    ::ll::TypedStorage<8, 8, ::RakNet::RNS2EventHandler*> eventHandler;
    ::ll::TypedStorage<2, 2, ushort>                      remotePortRakNetWasStartedOn_PS3_PS4_PSP2;
    // NOLINTEND
};

} // namespace RakNet
