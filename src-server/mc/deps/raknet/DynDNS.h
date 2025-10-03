#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/DynDnsResultCode.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/SystemAddress.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class TCPInterface; }
// clang-format on

namespace RakNet {

class DynDNS {
public:
    // DynDNS inner types define
    enum class ConnectPhase : int {
        ConnectingToCheckip       = 0,
        WaitingForCheckipResponse = 1,
        ConnectingToDyndns        = 2,
        WaitingForDyndnsResponse  = 3,
        Idle                      = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::TCPInterface*>        tcp;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>            getString;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>      serverAddress;
    ::ll::TypedStorage<4, 4, ::RakNet::DynDNS::ConnectPhase> connectPhase;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>            host;
    ::ll::TypedStorage<8, 8, uint64>                         phaseTimeout;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>      checkIpAddress;
    ::ll::TypedStorage<8, 8, char const*>                    resultDescription;
    ::ll::TypedStorage<4, 4, ::RakNet::DynDnsResultCode>     result;
    ::ll::TypedStorage<1, 32, char[32]>                      myIPStr;
    // NOLINTEND
};

} // namespace RakNet
