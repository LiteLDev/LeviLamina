#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class CommandParserInterface; }
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class TransportInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransportInterface() = default;

    // vIndex: 1
    virtual bool Start(ushort, bool) = 0;

    // vIndex: 2
    virtual void Stop() = 0;

    // vIndex: 3
    virtual void Send(::RakNet::SystemAddress, char const*, ...) = 0;

    // vIndex: 4
    virtual void CloseConnection(::RakNet::SystemAddress) = 0;

    // vIndex: 5
    virtual ::RakNet::Packet* Receive() = 0;

    // vIndex: 6
    virtual void DeallocatePacket(::RakNet::Packet*) = 0;

    // vIndex: 7
    virtual ::RakNet::SystemAddress HasNewIncomingConnection() = 0;

    // vIndex: 8
    virtual ::RakNet::SystemAddress HasLostConnection() = 0;

    // vIndex: 9
    virtual ::RakNet::CommandParserInterface* GetCommandParser() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
