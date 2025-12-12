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
    virtual ~TransportInterface() = default;

    virtual bool Start(ushort, bool) = 0;

    virtual void Stop() = 0;

    virtual void Send(::RakNet::SystemAddress, char const*, ...) = 0;

    virtual void CloseConnection(::RakNet::SystemAddress) = 0;

    virtual ::RakNet::Packet* Receive() = 0;

    virtual void DeallocatePacket(::RakNet::Packet*) = 0;

    virtual ::RakNet::SystemAddress HasNewIncomingConnection() = 0;

    virtual ::RakNet::SystemAddress HasLostConnection() = 0;

    virtual ::RakNet::CommandParserInterface* GetCommandParser() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
